#include<iostream>

using namespace std;

void insert_sort(int* arr,int len)
{
    for(int i=1;i<len;++i)
    {
        int pos=i;
        for(int j=0;j<i;++j)
        {
            if(arr[j]>arr[i])
            {
                pos=j;
                break;
            }
        }
    if(pos!=i)
    {
        int tmp=arr[i];
        for(int j=i;j>pos;--j)
        {
            arr[j]=arr[j-1];
        }
        arr[pos]=tmp;
    }
}
}

int main()
{
    int arr[]={5,9,4,2,1,3,6,7,1,8};
    int len=sizeof(arr)/sizeof(int);
    insert_sort(arr,len);
    for(int i=0;i<len;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
