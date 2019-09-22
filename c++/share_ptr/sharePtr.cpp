#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

template<class T>
class SharePtr
{
public:
    SharePtr(T* ptr = nullptr):_ptr(ptr), _ptrCount(new int(1)), _mutex(new mutex)
    {
        if(_ptr == nullptr)
            *_ptrCount = 0;
    }

    SharePtr(const SharePtr<T>& A)
    {
        _ptr = A._ptr;
        _ptrCount = A._ptrCount;
        _mutex = A._mutex;
        
        if(_ptr)
            AddCount();
    }

    void AddCount()
    {
        _mutex->lock();
        (*_ptrCount)++;
        _mutex->unlock();
    }

    int SubCount()
    {
        _mutex->lock();
        (*_ptrCount)--;
        _mutex->unlock();
    }

    int ptrCount()
    {
        return *_ptrCount;
    }

    SharePtr& operator=(const SharePtr<T>& A)
    {
        if(this != &A)
        {
            Release();

            _ptr = A._ptr;
            _ptrCount = A._ptrCount;
            _mutex = A._mutex;

            if(_ptr)
                AddCount();
        }
    }
private:
    void Release()
    {
        if(_ptr && SubCount() == 0)
        {
            delete _ptr;
            delete _ptrCount;
            delete _mutex;
        }
    }
private:
        T* _ptr;
        int* _ptrCount;
        mutex* _mutex;
        
};

int main()
{
    SharePtr<int> share(new int(10));

    cout << share.ptrCount() << endl;

    SharePtr<int> s2;
    s2 = share;
    cout << s2.ptrCount() << endl;

    SharePtr<int> s3 = s2;
    cout << s3.ptrCount() << endl;
    return 0;
}
