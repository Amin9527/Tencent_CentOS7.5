#include<vector>

template<typename T>
class Greater
{
    public:
        bool operator()(const T& e1,const T& e2)
        {
            return e1>e2;
        }
};

template<typename T>
class Less
{
    public:
        bool operator()(const T& e1,const T& e2)
        {
            return e1<e2;
        }
};

namespace Amin
{
    template<typename T,typename Container=std::vector<T>,typename Compare=Greater<T>> //仿函数
    class priority_queue
    {
        private:

            void swap(T& x,T& y)
            {
                T z;
                z=x;
                x=y;
                y=z;
            }

        public:

            void adjustup(int child)
            {
                Compare com;
                int parent=(child-1)/2;
                while(child!=0)
                {
                    if(com(con[child],con[parent]))
                    {
                        swap(con[child],con[parent]);
                        child=parent;
                        parent=(child-1)/2;
                    }
                    else
                        break;
                }
            }

            void adjustdown(int parent)
            {
                Compare com;
                int child=2*parent+1;
                if(child+1<size() && com(con[child+1],con[child]))  //两个条件顺序不能改，防止越界访问出错
                    ++child;
                while(child<size())
                {
                    if(com(con[child],con[parent]))
                    {
                        swap(con[parent],con[child]);
                        parent=child;
                        child=2*parent+1;
                    }
                    else
                        break;
                }
            }

            bool empty()
            {
                return con.empty();
            }

            int size()
            {
                return con.size();
            }

            T& top()
            {
                return con[0];
            }

            void push(const T& element)
            {
                con.push_back(element);
                adjustup(con.size()-1);
            }

            void pop()
            {
                swap(con[0],con[size()-1]);
                con.pop_back();
                adjustdown(0);
            }

        private:
            Container con;
    };
}
