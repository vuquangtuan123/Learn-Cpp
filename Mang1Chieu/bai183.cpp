#include <iostream>
using namespace std;
void nhap(float[], int &);
void lietkevtln(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    lietkevtln(a, n);
    return 0;
}
void nhap(float a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu ";
        cin >> n;
    } while (n < 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void lietkevtln(float a[], int n)
{
    float ln=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>ln)
            ln=a[i];
    }
    for (int i=0; i<n;i++)
    {
        if(ln==a[i])
            cout<<i<<" ";
    }
}