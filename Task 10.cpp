#include<iostream>
#include<conio.h>
using namespace std;

class SN{
	static int count;
	int serial;
public:
	SN() { serial=++count;}
	void disp() const { cout<<serial;}
};  int SN::count=0;

class angle{
	int degrees;
	float minutes;
	char direction;
public:
	void getAngle(){
		cout<<"Enter degrees  : "; cin>>degrees;
		cout<<"Enter minutes  : "; cin>>minutes;
		cout<<"Enter direction: "; cin>>direction;}
	void disp() const { cout<<degrees<<"\xF8"<<minutes<<"\'"<<direction;}};

class ship{
	SN s;
	angle a1, a2;
public:
	void getPos() { a1.getAngle(); a2.getAngle();}
	void disp() const {
		cout<<"Ship number: "; s.disp();
		cout<<" position: "; a1.disp(); cout<<", "; a2.disp(); cout<<endl;}};

int main()
{
	
	ship s[3];

		for(int i=0; i<3; i++) s[i].getPos();
		for(int j=0; j<3; j++) s[j].disp();
}
