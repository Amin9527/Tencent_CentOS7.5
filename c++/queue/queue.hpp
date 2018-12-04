#include<deque>
#include<iostream>

namespace Amin
{
    template<typename T,typename Container=std::deque<T>>
    class queue
    {
        public:
            void push(const T& element)
            {
                con.push_back(element);
            }

            void pop()
            {
                con.pop_front();
            }

            int size()
            {
                return con.size();
            }

            bool empty()
            {
                return con.empty();
            }

            T& front()
            {
                return con.front();
            }

            T& back()
            {
                return con.back();
            }
        private:
            Container con;
    };
}
