#include<iostream>
#include<conio.h>
using namespace std;

class Int{
	int int_var;
public:
	Int(): int_var(0){}
	Int(int begin): int_var(begin){}
	void display() const{ cout<<int_var;}
	void add(Int x, Int y){ int_var=x.int_var+y.int_var;}
};

int main()
{

	Int a=39, b=23, c;
		c.add(a,b);
		c.display(); 
}
