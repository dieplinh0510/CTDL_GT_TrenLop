#include <bits/stdc++.h>
using namespace std;

class hocSinh
{
public:
    char hoTen[30];
    char gioiTinh[5];
    int namSinh;
    float diem;

public:
    void nhap();
    void xuat();
};

void hocSinh::nhap()
{
    cout<<"Nhap ho ten :" ; fflush(stdin); gets(hoTen);
    cout<<"Nhap gioi tinh: "; fflush(stdin); gets(gioiTinh);
    cout<<"Nhap nam sinh : " ; cin>>namSinh;
    cout<<"Nhao diem tong ket : "; cin>>diem;
}

void hocSinh::xuat()
{
    cout<<setw(20)<<hoTen<<setw(20)<<gioiTinh<<setw(20)<<namSinh<<setw(20)<<diem<<endl;
}



void bubbleSort(hocSinh *a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (strcmp(a[j].hoTen, a[j+1].hoTen)>0)
            {
                hocSinh temp = a[j];
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
    hocSinh *a = new hocSinh[n];
    for (int i=0; i<n; i++)
    {
        a[i].nhap();
    }

    bubbleSort(a,n);
    cout<<setw(20)<<"ho ten"<<setw(20)<<"gioi tinh"<<setw(20)<<"nam sinh"<<setw(20)<<"diem"<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
