#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class employee{
	int emp_num;
	float emp_comp;
public:
	void assign(int en, float ec){ emp_num=en; emp_comp=ec;}
	void disp() const { cout<<endl<<setw(20)<<emp_num<<setw(20)<<emp_comp;}
};

int main()
{
	
	employee x[3]; int a; float b;
	for(int i=0; i<3;){
	cout<<"Enter the employee "<<++i<<" number      : "; cin>>a;
	cout<<"Enter the employee "<<  i<<" compensation: "; cin>>b;
	x[i-1].assign(a, b);}
	cout<<setw(20)<<"employees number"<<setw(20)<<"employee's compensation";
	for(int j=0; j<3; j++) { x[j].disp();}
}
