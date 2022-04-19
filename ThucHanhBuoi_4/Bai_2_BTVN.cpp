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

void selectionSort(string *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        int min_vt = i;
        for (int j=i+1; j<n; j++)
            if (a[j]<a[min_vt]) min_vt = j;

            string temp = a[i];
            a[i] = a[min_vt];
            a[min_vt] = temp;

    }
}
int main()
{
    int n;
    cin>>n;
    string *a = new string [n];
    nhap(a,n);
    selectionSort(a,n);
    xuat(a,n);
    return 0;
}
