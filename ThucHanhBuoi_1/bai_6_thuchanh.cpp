#include<bits/stdc++.h>

using namespace std;

int demX(int *a, int x, int left, int right){
    if(left == right){
        if(a[left] == x){
            return 1;
        }
        return 0 ;
    }
    else {
        int mid = (left + right) / 2;
        return demX(a, x, left, mid) + demX(a, x, mid + 1, right);
    }
}

int main(){
    int n;
    cout<<"Nhap so luong phan tu cua mamg: ";
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cout<<"Nhap a["<<i<<"] = ";
        cin>>a[i];
    }
    int x;
    cout<<"---> Nhap phan tu muon dem x = "; cin>>x;
    int res = demX(a, x, 0, n -1);
    cout<<"Ket qua "<<res<<endl;
}
