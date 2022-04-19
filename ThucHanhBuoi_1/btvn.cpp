#include<bits/stdc++.h>

using namespace std;

void str(char a[], int n){
	if(n==1) cout<<a[n-1];
	else{
		cout<<a[n-1];
		str(a,n-1);
	}
}

main(){
	int n;
	char a[100];
	cout<<"nhap xau: ";	gets(a);
	n=strlen(a);
	str(a,n);
}
#include<bits/stdc++.h>

using namespace std;

int f(int x) {
	if (x < 10) return 1;
	else return 1 + f(x / 10);
}

main(){
	int x;
	cout<<"nhap x: ";	cin>>x;
	cout<<"so chu so cua x: "<<f(x);
}


#include<iostream>
using namespace std;
int sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so la: " << sum(n)<<endl;
    return 0;
}
