
#include<bits/stdc++.h>
using namespace std;
void nhap(string *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void xuat(string *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void insertSort(string *a, int n)
{
    string key;
    for (int i=1; i<n; i++)
    {
        key = a[i];
        int j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int n;
    cin>>n;
    string *a = new string [n];
    nhap(a,n);
    insertSort(a,n);
    xuat(a,n);
    return 0;
}
