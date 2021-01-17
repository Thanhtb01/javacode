#include <iostream>

using namespace std;

int main()
{
    int n,a[31],lon,be;
    do
    {
        cout<<"nhap n : ";
        cin>>n;
    }while(n<5 || n>30);
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i)cout<<a[i]<<" ";cout<<endl;
    lon=a[1];be=a[1];
    for(int i=1;i<=n;++i)
    {
        lon=max(lon,a[i]);
        be=min(be,a[i]);
    }
    cout<<"lon nhat :"<<lon<<endl<<"be nhat :"<<be<<endl;
    for(int i=1;i<=n;++i)
    {
        if(a[i]==be)cout<<i<<" ";
    }cout<<endl;
}

