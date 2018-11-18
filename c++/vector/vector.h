#include<string>
#include<string.h>

namespace Amin
{
    template<typename T>
    class vector
    {
        public:
            typedef T* iterator  //类型重定义

            iterator begin()
            {
                return _start;
            }

            iterator end()
            {
                return _finish;
            }

            vector(int n)
            {
                if(_)
            }

        private:
            T* _start;
            T* _finish;
            T* _endofstorage;
    };

}

