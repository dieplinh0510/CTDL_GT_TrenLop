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

void selectionSort(int *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        int min_vt = i;
        for (int j=i+1; j<n; j++)
            if (a[j]>a[min_vt]) min_vt = j;

            int temp = a[i];
            a[i] = a[min_vt];
            a[min_vt] = temp;

    }
}

int main()
{
    int n;
    cin>>n;
    int *a = new int [n];
    input(a,n);

    selectionSort(a,n);
    output(a,n);
    return 0;
}
