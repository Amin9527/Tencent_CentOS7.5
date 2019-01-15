#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

#define COUNT 5

template<typename T>
class Sharedptr
{
    public:
        
        Sharedptr(T* ptr=nullptr):_ptr(ptr),_count(new int(1)),_pmutex(new mutex)
        {
            cout<<"Sharedptr()"<<endl;
        }
        
        T* operator->(){return _ptr;}
        T& operator*(){return *_ptr;}
        T& operator[](int number){return *(_ptr+number);}

        Sharedptr(const Sharedptr<T>& p):_ptr(p._ptr),_count(p._count),_pmutex(p._pmutex)
        {
            if(_ptr)
                Addcount();
        }

        Sharedptr& operator=(const Sharedptr<T>& p)
        {
            if(_ptr==p._ptr)
                return *this;
            Release();
            _ptr=p._ptr;
            _count=p._count;
            _pmutex=p._pmutex;
            if(_ptr)
                Addcount();
            return *this;
        }

        int Subcount()
        {
            _pmutex->lock();
            return --(*_count);
            _pmutex->unlock();
        }

        int Getcount()
        {
            return *_count;
        }

        int Addcount()
        {
            _pmutex->lock();
            return ++(*_count);
            _pmutex->unlock();
        }

        void Print()
        {
            for(int i=0;i<COUNT;++i)
                cout<<_ptr[i]<<" ";
            cout<<endl;
        }

        ~Sharedptr(){Release();cout<<"~Sharedptr()"<<endl;}

    private:
        void Release()
        {
            if(_ptr && Subcount()==0)
            {
                delete _ptr;
                delete _count;
                delete _pmutex;
            }
        }
    private:
        T *_ptr;
        int *_count;  //添加引用计数
        mutex *_pmutex;
};

int main()
{
    int *ptr=new int[COUNT];
    Sharedptr<int> zm(ptr);
    cout<<zm.Getcount()<<endl<<endl;
    zm[0]=5;zm[1]=2;zm[2]=0;
    zm.Print();

    Sharedptr<int> gx(zm);
    cout<<gx.Getcount()<<endl<<endl;
    gx[3]=13;
    gx.Print();

    Sharedptr<int> zy;
    zy=zm;
    cout<<zy.Getcount()<<endl<<endl;
    zy[4]=14;
    zy.Print();

    return 0;
}
