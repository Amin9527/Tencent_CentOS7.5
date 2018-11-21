#include<iostream>
#include<string>
#include<assert.h>
using namespace std;

namespace Amin
{
    template<typename T>
    class vector
    {
        public:
            typedef T* iterator;

            iterator end()
            {
                return _finish;
            }

            iterator begin()
            {
                return _start;
            }

            vector()
                :_start(nullptr)
                 ,_finish(nullptr)
                 ,_endofstorage(nullptr)
            {}

            vector(size_t count,T element)
                :_start(nullptr)
                 ,_finish(nullptr)
                 ,_endofstorage(nullptr)
            {
                reserve(count);
                while(count--)
                    push_back(element);
            }

            //析构函数
            ~vector()
            {
                delete[] _start;
                _start=_finish=_endofstorage=nullptr;
            }

            //一段区间构造vector
            template<typename inputiterator>
            vector(inputiterator first1,inputiterator last)
            {
                reserve(last-first1);
                while(first1!=last)
                {
                    push_back(*first1);
                    ++first1;
                }
            }

            //拷贝构造函数
            vector(const vector<T>& object)
                :_start(nullptr)
                ,_finish(nullptr)
                ,_endofstorage(nullptr)
            {
                reserve(object.Size());
                iterator it=begin();
                iterator vit=object.begin();
                while(vit!=object.end())
                {
                    *it++=*vit++;
                }
                _finish=_start+object.Size();
                _endofstorage=_start+object.capacity();
            }
            
           /* 
            vector(const vector<T>& object)
                :_start(nullptr)
                ,_finish(nullptr)
                ,_endofstorage(nullptr)
            {
                T* tmp=new T[object.capacity()];
                _start=tmp;
                _finish=_start+object.Size();
                _endofstorage=_start+capacity();
                for(size_t size=0;size<Size();++size)
                    _start[size]=object._start[size];
            }
           */ 
        //Swap交换函数
        void Swap(vector<T>& tmp)
        {
            swap(_start,tmp._start);
            swap(_finish,tmp._finish);
            swap(_endofstorage,tmp._endofstorage);
        }

        //=运算符重载
        vector<T>& operator=(vector<T> object)
        {
            Swap(object);
            return *this;
        }

        //容量capacity
        size_t capacity()
        {
            return _endofstorage-_start;
        }

        //元素个数size
        size_t Size()
        {
            return _finish-_start;
        }

        //扩容reserve函数
        void reserve(size_t count)
        {
            if(count>=capacity())
            {
                size_t size=Size();
                T* tmp=new T[count];
                for(size_t i=0;i<size;++i)
                    tmp[i]=_start[i];
                _start=tmp;
                _finish=_start+size;
                _endofstorage=_start+count;
            }
        }

        //resize函数
        void resize(size_t count,T element)
        {
            if(count<=Size())
                _finish=_start+count;
            else if(Size()<count && count<capacity())
            {
                iterator endit=end();
                _finish=_start+count;
                while(endit!=_finish)
                    *endit++=element;
            }
            else
            {
                reserve(count);
                iterator endit=end();
                _finish=_start+count;
                while(endit!=_finish)
                    *endit++=element;
            }
        }

        //尾插
        void push_back(T& element)
        {
            insert(end(),element);
        }

        //尾删
        void pop_back()
        {
            erase(--end());
        }

        //任意位置删除元素
        void erase(T* pos)
        {
            assert(pos<_finish);
            while(pos!=_finish-1)
            {
                *pos=*(pos+1);
                ++pos;
            }
            --_finish;
        }

        //任意位置插入元素
        T* insert(T* pos,T element)
        {
            assert(pos<=_finish);
            if(_finish==_endofstorage)
            {
                size_t size=pos-_start;
                size_t newcapacity=capacity()==0 ? 1 : 2*capacity();
                reserve(newcapacity);
                pos=_start+size;
            }
            T* end=_finish;
            if(pos<end)
            {
                while(pos!=end)
                {
                    *end=*(end-1);
                    --end;
                }
            }
            *pos=element;
            ++_finish;
            return pos;
        }

        //[]运算符重载
        T& operator[](int number)
        {
            return _start[number];
        }

        //print打印函数
        void print()
        {
            for(size_t i=0;i<Size();++i)
                cout<<_start[i]<<" ";
        }
        private:
            T* _start;
            T* _finish;
            T* _endofstorage;
    };
}


