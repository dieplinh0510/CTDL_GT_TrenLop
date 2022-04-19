#include<bits/stdc++.h>

using namespace std;

long power(int a, int n) {
	if (n == 1) return a;
	else {
		int x = pow(a, n / 2);
		if (n % 2 == 0)
			return x * x;
		else return x * x * a;
	}
}

main(){
	int a,n;
	cout<<"nhap so: ";	cin>>a;
	cout<<"nhap so mu: ";	cin>>n;
	cout<<"ket qua: "<<a<<"^"<<n<<": "<<power(a,n);
}

