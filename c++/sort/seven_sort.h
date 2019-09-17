#include<iostream>
#include<vector>

//template<class T>
/*
class fastsort
{
    public:
        template<class T>
        void sort(std::vector<T>& v, int l, int r);
    private:
        template<class T>
        void _sort(std::vector<T>& v, int l ,int m , int r);

        template<class T>
        bool com(T l, T r);
};
*/

//堆排
namespace heapsort
{
    template<class T>
    void swap(T& a, T& b)
    {
        T c = a;
        a = b;
        b = c;
    }
    template<class T>
    void create_heap(std::vector<T>& v, int index, int size)
    {
        int l = 2 * index + 1;
        int r = 2 * index + 2;


        while(l < size)
        {
            int max = l;
            if(r < size && v[r] > v[l])
                max = r;
            if(v[max] > v[index])
                swap(v[max], v[index]);
             l = 2 * max + 1;
             r = 2 * max + 2;
             index = max;
        }
    }

    template<class T>
     void sort(std::vector<T>& v, int l, int r)
    {
        int size = v.size();
        int index = (size - 2) / 2; //最后一个非叶子节点
        while(index >= 0)
        {
            create_heap(v, index, size);  //建堆
            index--;
        }

        while(size >= 1)
        {
            index = size - 1;
            swap(v[0], v[index]);
            create_heap(v, 0, index);
            size--;
        }
    }
}

//快速排序

namespace fastsort
{
    template<class T>
    void swap(T& a, T& b)
    {
        T c = a;
        a = b;
        b = c;
    }

    template<class T>
    int doubleptr_sort(std::vector<T>& v, int l, int r)
    {
        int index = v[l];
        int i = l;
        while(l < r)
        {
            while(l < r && v[r] >= index)
                r--;

            while(l < r && v[l] <= index)
                l++;
            swap(v[l], v[r]); //交换两值
        }
        swap(v[l], v[i]);
        return l;
    }

    template<class T>
    int wk_sort(std::vector<T>& v, int l, int r) //挖坑法
    {
        int index = v[l]; //将最左边的第一个值当做基准值
        while(l < r)
        {
            while(l < r && v[r] >= index) //从最右边开始找第一个比基准值小的值
                r--;
            v[l] = v[r];
            
            while(l < r && v[l] <= index) //从最左边开始找第一个比基准值大的值
                l++;
            v[r] = v[l];
        }

        v[l] = index;
        return l;
    }

    template<class T>
    void sort(std::vector<T>& v, int l, int r)
    { 
        if(l >= r)
            return;
        int index = doubleptr_sort(v, l, r);
        sort(v, l, index - 1);
        sort(v, index + 1, r);
    }
}

//归并排序
namespace mergesort
{
    template<class T>
    bool com(T l, T r)
    {
       if(l < r)
           return true;
       else
           return false;
    }

    template<class T>
    void _sort(std::vector<T>& v, int l ,int m , int r)
    {
        int left_size = m - l + 1;  //左边区间元素个数
        int right_size = r - m;     //右边区间元素个数
        std::vector<T> left_v;    //临时存放左边区间元素
        std::vector<T> right_v;   //临时存放右边区间元素

        int left_index = 0, right_index = 0;
        for(left_index = l; left_index < m + 1; left_index++)  
            left_v.push_back(v[left_index]);
        for(right_index = m + 1; right_index < r + 1; right_index++)
            right_v.push_back(v[right_index]);
        
        std::cout << "left_v:";
        for(int i = 0; i < left_v.size(); i++)
            std::cout << left_v[i];
        std::cout << std::endl;
        std::cout << "right_v:";
        for(int i = 0; i < right_v.size(); i++)
            std::cout << right_v[i];
        std::cout << std::endl;

        left_index = 0;
        right_index = 0;
        int k = l;  //k为没排好序的开始位置
        while(left_index < left_size && right_index < right_size)  //临时左右区间都有元素，进行比较
        {
            if(com(left_v[left_index],right_v[right_index]))
            {
                v[k] = left_v[left_index];
                left_index++;
                k++;
            }
            else
            {
                v[k] = right_v[right_index];
                right_index++;
                k++;
            }
        }
        while(left_index < left_size)  //只有临时左区间有元素
        {
            v[k] = left_v[left_index];
            left_index++;
            k++;
        }
        while(right_index < right_size) //只有临时右区间有元素
        {
            v[k] = right_v[right_index];
            right_index++;
            k++;
        }
    }


    template<class T>
    void sort(std::vector<T>& v, int l, int r)
    {
        if(l == r)
            return;
        int m = (l + r) / 2;
        sort(v, l, m);
        sort(v, m + 1, r);
        _sort(v, l, m, r);
        /*
        for(int i = 0; i < v.size(); i++)
            std::cout << v[i];
        std::cout << std::endl;
        */
    }
}

/*
int main()
{
    int arr[9] = {3, 9, 1, 5, 8, 2, 7, 6, 4};
    std::vector<int> v(arr, arr+9);
    for(size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i];
    }
    std::cout << std::endl;
    
    fastsort::sort(v, 0, 8);

    for(size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i];
    }
    std::cout << std::endl;
    return 0;
}
*/
