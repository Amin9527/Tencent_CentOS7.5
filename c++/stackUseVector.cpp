#include <iostream>
#include <vector>

using namespace std;

template<class T>
class stack
{
    public:
        stack(int size = 0)
        {
            v.reserve(size);
            _capacity = size;
            _size = 0;

        }

        bool push(T a)
        {
            if(!full())
            {
                v.push_back(a);
                _size++;
                return true;

            }
            else
                return false;

        }

        T pop()
        {
            if(!empty())
            {
                T ret = v[_size - 1];
                vector<int>::iterator it = v.end();
                v.erase(--it);
                _size--;
                return ret;

            }

        }

        bool empty()
        {
            if(_size == 0)
                return true;
            else
                return false;

        }

        bool full()
        {
            if(_size == _capacity)
                return true;
            else
                return false;

        }

        stack(const stack<T>& b)
        {
            v.reserve(_capacity);
            for(int i = 0; i < _size; i++)
                v[i] = b[i];
            _capacity =b. _capacity;
            _size = b._size;

        }

        stack<T>& operator=(const stack<T>& b)
        {
            if(b == *this)
                return *this;
            stack<T> c;
            c.resize(_capacity);
            for(int i = 0; i < _size; i++)
                c[i] = b[i];
            c._size = _size;
            c._capacity = _capacity;
            return c;

        }
    private:
        vector<T> v;
        int _capacity;
        int _size;

};

int main()
{
    stack<int> s(10);
    s.push(6);
    int ret = s.pop();
    cout << ret << endl;
    return 0;

}
