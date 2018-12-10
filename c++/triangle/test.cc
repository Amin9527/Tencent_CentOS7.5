#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> showRows(int& row)
{
    vector<vector<int>> v1(row,vector<int>(1));
    for(int i=0;i<row;++i)
    {
        v1[i].resize(i+1);
        v1[i][0]=1;
        v1[i][i]=1;
    }

    for(int i=2;i<row;++i)
    {
        for(int j=1;j<i;++j)
        {
            v1[i][j]=v1[i-1][j-1]+v1[i-1][j];
        }
    }

    cout<<"["<<endl;
    for(int i=0;i<row;++i)
    {
        cout<<"[";
        for(int j=0;j<=i;++j)
        {
            cout<<v1[i][j];
            if(j<i)
                cout<<",";
        }
        cout<<"]";
        if(i<row-1)
            cout<<",";
        cout<<endl;
    }
    cout<<"]"<<endl;
    return v1;
}

int main()
{
    int row;
    cout<<"请输入行数：";
    cin>>row;
    showRows(row);
    return 0;
}
