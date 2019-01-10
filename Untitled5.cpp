#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double tienvon;
	double tienkivong;
	int nam;
	double laixuat;
	double a,b;
	cout<<"nhap vao so tien von: ";
	cin>>tienvon;
	cout<<"nhap vao lai xuat: ";
	cin>>laixuat;
	cout<<"nhap vao so tien ki vong: ";
	cin>>tienkivong;
	laixuat=double(laixuat/100);
	a=double(tienkivong/tienvon);
	b=double(1+laixuat);
	nam=double(log(a)/log(b));
		if (tienkivong>=tienvon)
	cout<<"so nam can thiet de dat so tien ki vong: "<<nam;
		else
		cout<<"khong hop le.";
	return 0;	
}
