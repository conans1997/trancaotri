#include<iostream>
#include<conio.h>
using namespace std;

class tollBooth{
	unsigned int num_cars;
	double money_amount;
public:
	tollBooth(): num_cars(0), money_amount(0) {}
	void payingCar(){ num_cars++; money_amount+=.5;}
	void nopayCar(){ num_cars++;}
	void display() const {
		cout<<"======================================================\n";
		cout<<"\rTotal number of cars is: "<<num_cars;
		cout<<"\nTotal money amount is  : "<<money_amount;
		cout<<"\n======================================================\n";}
};

int main()
{
	cout<<"======================================================\n";
	cout<<"Press [P]: Payed ====== or ====== Press [N]: Not Payed\n";
	cout<<"               Press [Esc]: Exit & Report             \n";
	cout<<"======================================================\n";
	tollBooth x;

		for(;;)
		{
			switch(toupper(getch()))
			{
			case('P'): x.payingCar(); cout<<"\rPayed\n";   break;
			case('N'): x.nopayCar(); cout<<"\rNot payed\n";  break;
			case(27 ): x.display(); break;
			}
		}
	
}
