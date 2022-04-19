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

void bubbleSort(string *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                string temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    string *a = new string [n];
    nhap(a,n);
    bubbleSort(a,n);
    xuat(a,n);
    return 0;
}
