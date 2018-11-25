#include<iostream>

namespace Amin
{

    template<typename T>
    struct ListNode
    {
        T data;
        ListNode<T>* perv;
        ListNode<T>* next;

        ListNode(const T& _data=T()):data(_data)
        {
            perv=nullptr;
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

        T operator*()
        {
            return _node->data;
        }

        Self& operator++()
        {
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
            list():_head(new Node)
            {
                _head->perv=_head;
                _head->next=_head;
            }

            void push_back(const T& data)
            {
                Node* tail=_head->perv;
                Node* newnode=new Node(data);
                tail->next=newnode;
                newnode->next=_head;
                _head->perv=newnode;
                newnode->perv=tail;
            }
        //private:
            Node* _head;
    };
}
