#include<iostream>
#include<conio.h>
using namespace std;

class SN{
	static int count;
	int serial;
public:
	SN() { serial=++count;}
	void disp() const { cout<<"I\'am object number "<<serial<<endl;}
};  int SN::count=0;

int main()
{

		SN s[3];
		for(int i=0; i<3; i++) s[i].disp();
}
