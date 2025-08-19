#include<iostream>
using namespace std;

class Calculator
{
public: 
            float a;
            float b;
            float result;

        float addition(){
            result = a+b;
            return result;
        }
        float subtraction(){
            result = a - b;
            return result;
        }
};

int main()
{
    Calculator cal;
    cout << "Enter Two value: ";
    cin >> cal.a >> cal.b;
    cout <<"Enter operation"; 
    char choice;
    cin >> choice;
    if (choice == '+')
    cout<< "Result is: " << cal.addition();
    else if(choice == '-')
    cout<< "Result is: " << cal.subtraction();
}

