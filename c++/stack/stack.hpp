#include<deque>
#include<list>
#include<iostream>
#include<vector>

namespace Amin
{
    template<typename T,typename Container=std::deque<T>>
    class stack
    {
        public:
            stack(){}

            void push(const T& element)
            {
                con.push_back(element);
            }

            void pop()
            {
                con.pop_back();
            }

            T& top()
            {
                return con.back();
            }

            int size()
            {
                return con.size();
            }

            bool empty()
            {
                return con.empty();
            }
        private:
            Container con;
    };
}
