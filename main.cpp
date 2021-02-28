#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main()
{

float fahr, cel;
char option;

do {

cout << "Please choose the option"<< endl;
cout << "1. Celcius to Fahrenheit."<< endl;
cout << "2. Fahrenheit to Celcius"<< endl;
cin >> option;

switch(option){

case '1':
cout << "Please Enter the temperature in Celcius:";
cin>> cel;
fahr=(cel*9.0/5.0)+32;
cout <<"\nTemperature in Fahrenheit is : " << fahr<<"F"<<endl;
break;

case '2':
cout << "Enter the temperature in Fahrenheit :";
cin>>fahr;
cel= (-32+fahr)*5.0/9.0;
cout<<"\nTemperature in Celcius is : "<<cel<<"C"<<endl;
break;

default:
cout<<"Error Wrong Input"<<endl;
return 0;

cout << endl;
cout << "For back press enter";

}
} while (option != 3);
}
