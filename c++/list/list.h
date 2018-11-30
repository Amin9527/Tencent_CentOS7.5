#include<iostream>

namespace Amin
{

    template<typename T>
    struct ListNode
    {
        T data;
        ListNode<T>* prev;
        ListNode<T>* next;

        ListNode(const T& _data):data(_data)  //当接收匿名对象的参数用引用时，必须用const修饰，否则报错
        {
            prev=nullptr;
            next=nullptr;
        }
    };

    template<typename T>
    struct _iterator
    {
        typedef ListNode<T> Node;
        typedef _iterator<T> Self;
        Node* _node;

        _iterator(Node* node):_node(node)
        {}

        T& operator*()//需要传引用，给*it赋值时。不传引用是给临时变量赋值，临时变量不能做左值
        {
            return _node->data;
        }

        T* operator->()  //it->_year时，实际是it->->_year,编译器省略了一个->
        {
            return &(operator*());
            //return &_node->data;
        }

        //++it，it.operator++(&it)
        Self& operator++()
        {
            _node=_node->next;
            return *this;
        }

        //it++ it.operator(&it,0)
        Self operator++(int)
        {
            Self tmp(*this);
            _node=_node->next;
            return *this;
        }
        //--it，it.operator++(&it)
        Self& operator--()
        {
            _node=_node->prev;
            return *this;
        }

        //it-- it.operator(&it,0)
        Self operator--(int)
        {
            Self tmp(*this);
            _node=_node->next;
            return *this;
        }

        //it+n    适用于随机迭代器，当前不适合
        Self operator+(size_t n)
        {
            while(n--)
                _node=_node->next;
            return *this;
        }

        bool operator!=(const Self& it)
        {
            return _node!=it._node;
        }
    };

    template<typename T>
    class list
    {
            typedef ListNode<T> Node;
        public:    
            typedef _iterator<T> iterator;
            iterator begin()
            {
                return iterator(_head->next);
            }

            iterator end()
            {
                return iterator(_head);
            }

            list():_head(new Node(T())) //T()匿名对象
            {
                _head->prev=_head;
                _head->next=_head;
            }

            template<typename TT>
            void swap(TT& t1,TT& t2)
            {
                TT tmp;
                tmp=t1;
                t1=t2;
                t2=tmp;
            }

            //拷贝构造
            list(list<T>& l)
            {
                _head=new Node(T());
                _head->prev=_head;
                _head->next=_head;
                iterator it=l.begin();
                while(it!=l.end())
                {
                    push_back(*it);
                    ++it;
                }
            }

            //赋值运算符重载
            list<T>& operator=(list<T> l)
            {
                swap(_head,l._head);
                return *this;
            }
            

            void push_back(const T& data)
            {
                insert(end(),data);
            }

            /*
            void printlist()
            {
                iterator it=begin();
                while(it!=end())
                {
                    std::cout<<*it<<" ";
                    ++it;
                }
                std::cout<<std::endl;
            }
            */

            /*
            void printlist(list<T>& l)
            {
                list<T>::iterator it=l.begin();
                while(it!=l.end())
                {
                    std::cout<<*it<<" ";
                    ++it;
                }
                std::cout<<std::endl;
            }
            */

            void pop_back()
            {
                erase(--end());
            }

            void pop_front()
            {
                erase(begin());
            }

            void push_front(const T& data)
            {
                insert(begin(),data);
            }

            void insert(iterator pos,const T& data)
            {
                Node* newprev=pos._node->prev;
                Node* newnode=new Node(data);
                pos._node->prev=newnode;
                newnode->prev=newprev;
                newprev->next=newnode;
                newnode->next=pos._node;
            }

            ~list()
            {
                clear();
                delete _head;
                _head=nullptr;
            }
            void clear()
            {
                iterator it=begin();
                while(it!=end())
                {
                    iterator del=it;
                    ++it;
                    delete del._node;
                }
                _head->next=_head;
                _head->prev=_head;
            }
            iterator erase(iterator pos)
            {
                Node* nnode=pos._node->next;
                Node* pnode=pos._node->prev;
                nnode->prev=pnode;
                pnode->next=nnode;
                delete pos._node;
                return iterator(nnode);
            }

            bool empty()
            {
                return _head->next==_head;
            }

            size_t size()
            {
                size_t n=0;
                iterator it=begin();
                while(it!=end())
                {
                    ++it;
                    ++n;
                }
                return n;
            }
        //private:
            Node* _head;
    };


template<typename T>
void printlist(list<T> l)
{
   _iterator<T> it=l.begin();
   while(it!=l.end())
   {
       std::cout<<*it<<" ";
       ++it;
   }
   std::cout<<std::endl;
}

}


