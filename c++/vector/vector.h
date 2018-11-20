#include<iostream>
#include<assert.h>
//using namespace std;

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
        //容量capacity
        size_t capacity()
        {
            return _endofstorage-_start;
        }

        //元素个数size
        size_t size()
        {
            return _finish-_start;
        }

        //扩容reserve函数
        void reserve(size_t count)
        {
            if(count>=capacity())
            {
                T* tmp=new T[count];
                for(int i=0;i<size();++i)
                    tmp[i]=_start[i];
                _start=tmp;
                _finish=_start+size();
                _endofstorage=_start+count;
            }
        }

        //尾插
        void push_back(T& element)
        {
            insert(end(),element);
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
                while(pos!=end--)
                    *end=*(end-1);
            }
            *pos=element;
            ++_finish;
            return pos;
        }

        private:
            T* _start;
            T* _finish;
            T* _endofstorage;
    };
}


