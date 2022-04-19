#include<bits/stdc++.h>
using namespace std;
void input(int *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void output(int *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void insertSort(int *a, int n)
{
    int key;
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
    int *a = new int [n];
    input(a,n);

    insertSort(a,n);
    output(a,n);
    return 0;
}
