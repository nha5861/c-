#include<iostream>
using namespace std;

int main()
{
	float s;
	float lx;
	float kv;
	int sn;
	cout<<"nhap vao so tien, lai xuat, so tien ki vong: ";
	cin>>s>>lx>>kv;
	do
	{
		int (s<0||lx<0||kv<0||kv<s)
		cout<<"ban da nhap sai xin moi nhap lai: "<<endl;
		cout<<"nhap vao so tien, lai xuat, so tien ki vong: ";
		cin>>s>>lx>>kv;
	}
	while (s <= kv)
				{
					s=s+(s*lx)/100;
					sn++;
				}
				cout<<"sau  "<<sn<<"nam thi ban nhan duoc so tien ki vong: "<<kv<<endl;
	    return 0;
}
