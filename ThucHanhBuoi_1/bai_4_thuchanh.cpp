#include<bits/stdc++.h>

using namespace std;

int max (int a[],int left,int right) {
	if (left == right)
		return a[left];
	else if (left + 1 == right)
		if (a[left] > a[right])
			return a[left];
	else return a[right];
	else {
		int mid = (left + right) / 2;
		int max_left = max(a, left, mid);
		int max_right = max(a, mid + 1, right);
		if (max_left > max_right)
			return max_left;
			else return max_right;
	}
}

main(){
	int n,a[100],l,r;
	cout<<"nhap so phan tu cua day so: ";	cin>>n;
	cout<<"nhap day so: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	l = 0;
	r = n-1;
	//cout<<"nhap vi tri dau cua day so can tim max: ";	cin>>l;
	//cout<<"nhap vi tri cuoi cua day so can tim max: ";	cin>>r;
	cout<<"max cua day so la: "<<max(a,l,r);
}

