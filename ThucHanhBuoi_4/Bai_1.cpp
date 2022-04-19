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

void bubbleSort(int *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
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
    int *a = new int [n];
    input(a,n);

    bubbleSort(a,n);
    output(a,n);
    return 0;
}
