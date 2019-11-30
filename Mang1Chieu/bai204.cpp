#include <iostream>
using namespace std;
void nhap(int[], int &);
void tong(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    tong(a, n);
    return 0;
}
void nhap(int a[], int &n)
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
void tong(int a[], int n)
{
    float s = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i]>a[i-1])
            s=s+a[i];
    }
    cout<<"Tong la: "<<s<<endl;
}