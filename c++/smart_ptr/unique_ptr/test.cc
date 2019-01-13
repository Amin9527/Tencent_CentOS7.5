#include<iostream>

using namespace std;

template<typename T>
class Smartptr
{
    public:
        Smartptr(T *ptr=nullptr):_ptr(ptr){cout<<"Smartptr()"<<endl;}
        ~Smartptr(){delete _ptr;cout<<"~Smartptr()"<<endl;}
        T* operator->(){return _ptr;}
        T& operator*(){return *_ptr;}

        //C++11
        Smartptr(const Smartptr<T>&)=delete;

        Smartptr<T>& operator=(const Smartptr<T>&)=delete;
    private:
        //C++98
        //Smartptr(const Smartptr<T>&);
        //Smartptr<T>& operator=(const Smartptr<T>&);
    private:
        T *_ptr;
};

int main()
{
    char* ptr=new char[3];
    Smartptr<char> zm(ptr);
    
   // Smartptr<char> zy(zm);  //C++98类中将拷贝构造函数私有化
                            //C++11将拷贝构函数delete
    

    //Smartptr<char> gx;
    //gx=zm;    //C++98类中将赋值运算符重载函数私有化
                //C++11将赋值运算符重载函数delete  
    return 0;
}
