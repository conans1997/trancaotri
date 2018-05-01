#include <iostream>
#include <conio.h>
using namespace std;

class Date{
    private:
        int month,day,year;
    public :
        Date();
        Date(int,int,int);
        void Input();
        void Display();
        int Invalid();
        int Max();
};

Date::Date(){
    day=31;
    month=12;
    year=2002;
}

Date::Date(int d,int m,int y){
    day=d;
    month=m;
    year=y;
}

void Date::Input()
	{
	cout<<"======================================================\n";
	cout<<"No Press [/], only press [Enter]";
	cout<<"\n======================================================\n";
    cout<<"month/day/year: ";
    cin>>month;
    system("cls");
    cout<<"month/day/year: ";
    if(month<10) cout<<0<<month<<"/";
    else cout<<month<<"/";
    cin>>day;
    system("cls");
    cout<<"month/day/year: ";
    if(month<10) cout<<0<<month<<"/";
    else cout<<month<<"/";
    if(day<10) cout<<0<<day<<"/";
    else cout<<day<<"/";
    cin>>year;
}
void Date::Display(){
    if(month<10) cout<<0<<month<<"/";
    else cout<<month<<"/";
    if(day<10) cout<<0<<day<<"/";
    else cout<<day<<"/";
    cout<<year<<endl;
}

int Date::Invalid(){
	if(month<=12)
    return day<=Max();
    else return 1;
}

int Date::Max(){
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)  return 31;
    if(month==4||month==6||month==9||month==11) return 30;
    if(month==2&&((year%4==0&& year%100)||year%400==0))    return 29;
    else return 28;
}

int main(){
    Date a;
    a.Input();
    if(a.Invalid()!=1){
        cout<<"Date entered:";
        a.Display();
    }
    else cout<<endl<<"Invalid time"<<endl;
    return 0;
}
