#include<iostream>

using namespace std;

void select_sort(int* zm , int len)
{
    for(int i=0;i<len;++i)
    {
        int min_idx=i;
        int min_val=zm[i];
        for(int j=i+1;j<len;++j)
        {
            if(zm[j]<min_val)
            {
                min_idx=j;
                min_val=zm[min_idx];
            }
        }
        if(min_idx!=i)
        {
            swap(zm[i],zm[min_idx]);
        }
    }
}

int main()
{
    int arr[9]={2,1,9,5,3,8,4,6,7};
    int len=sizeof(arr)/sizeof(int);
    select_sort(arr,len);
    for(int i=0;i<len;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
