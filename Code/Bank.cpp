#include<iostream>
#include<string>
using namespace std;

class Bank{
    float Amount, Money;            //Amount is total amount, Money is that is being deposit or credit in account
    string Name, Account;
    string password;

public: 
    float Deposit(){
        cout << "Enter the amount: ";
        cin >> Money;
        cout << Money << "Amount has been credited to your account";
        Amount = Amount + Money;
        return 0;
    }
    float Withdraw(){
        cout<<"How much amount want to withdraw";
        cin >> Money;
        Amount = Amount - Money;
        return 0;
    }

    float CheckBalance(){
        cout << "You have " <<Amount <<"Balance! \n";
        return 0;
    }
        void CreateAccount(){
            cout << "Enter your Whole Name";
            getline(cin, Name);
            cout <<"Enter Account Number";
            getline(cin, Account);
            cout << "Create a 5 Digit password";
            cin >> password;
            Amount = 0; 
            cout <<"Your Account Created Successfully!";
    }

};

int main(){

}

