#include <iostream>
using namespace std;
void nhap (float [],int &);
void xuat (float [],int);
int main()
{
    float a[50];
    int n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}
void nhap (float a[],int &n)
{
    cout<<"Nhap so phan tu ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat (float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]<0)
            cout<<a[i]<<" ";
    }
}