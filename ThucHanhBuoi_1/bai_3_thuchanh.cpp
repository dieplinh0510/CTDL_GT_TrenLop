#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    int a, b;
    cout<<"nhap a, b: "; cin>>a>>b;
    cout<<"uoc chung lon nhat: "<<gcd(a,b);
    return 0;
}
