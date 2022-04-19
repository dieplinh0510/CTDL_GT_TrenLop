#include <bits/stdc++.h>
using namespace std;

void move(int n,char A,char B,char C)
 {
      if(n==1){
        cout<<A<<" --> "<<C<<"\n";
      }
      else {
        move(n - 1, A, C, B);
        cout<<A<<" --> "<<C<<endl;
        move(n - 1, B, A, C);
      }
 }

int main() {
  int n;
  cout<<"Nhap n: ";
  cin>>n;
  cout<<"Thu tu dich cac dia: ";
  move(n, 'A', 'B', 'C');

}
