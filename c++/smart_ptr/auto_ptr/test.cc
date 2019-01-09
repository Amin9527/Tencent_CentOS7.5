#include<iostream>

using namespace std;

template<typename T>
class zm
{
    public:
        zm(T* zm=nullptr):_zm(zm){cout<<"zm()"<<endl;}
        ~zm(){cout<<"~zm()"<<endl;delete _zm;}
        T& operator*(){return *_zm;}  //智能指针要具有像指针一样的性质，需要重载*、->
        T* operator->(){return _zm;}

        zm(const zm& a):_zm(a._zm)
        {
            _zm=nullptr;
        }

        zm<T>& operator=(const zm<T>& a)
        {
            if(a!=*this)
            {
                if(_zm)
                    delete _zm;
                _zm=a._zm;
                a._zm=nullptr;
            }
            return *this;
        }

        T& operator[](int number)
        {
            return *(_zm+number);
        }
    private:
        T* _zm;
};

int main()
{
    int *ptr=new int[10];
    zm<int> z(ptr);
    zm<int> m(z);  //auto_ptr智能指针在拷贝构造的时候会导致对象悬空
    zm<int> g;
    //g=z;      //同理会导致对象悬空
    
    *z=10;
    cout<<*ptr<<endl;

    z[3]=11;

    for(int i=0;i<10;++i)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;
    return 0;
}
