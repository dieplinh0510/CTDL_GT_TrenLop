#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"So fibonaci thu "<<n<<" la: "<<Fibonacci(n);
    cout<<endl;
    cout<<n<<" so fibonaci dau tien: ";
    for (int i=1; i<=n; i++)
    cout<<fibonacci(i)<<" ";
    return 0;
}
