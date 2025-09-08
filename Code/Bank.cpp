#include<iostream>
#include<string>
using namespace std;

class Bank{
    float Amount, Money=0;            //Amount is total amount, Money is that is being deposit or credit in account
    string Name, AccountNum;
    string password;

public:
    float Deposit()
    {
        cout << "Enter the amount: ";
        cin >> Money;
        cout << Money << "Amount has been credited to your account! \n";
        Amount = Amount + Money;
        return 0;
    }
    float Withdraw(){
        if(Amount<=0)
        {
            cout <<"You don't have sufficient balance!";
        }
        else
        {
        cout<<"Enter the amount want to withdraw \n ";
        cin >> Money;
        Amount = Amount - Money;
        return 0;
        }
    }

    float CheckBalance(){
        cout << "You have " <<Amount <<"Balance! \n";
        return 0;
    }
    void CreateAccount(){
        cout << "Enter your Whole Name";
        getline(cin, Name);
        cout <<"Enter Account Number";
        getline(cin, AccountNum);
        cout << "Create a 5 Digit password";
        cin >> password;
        Amount = 0; 
        cout <<"Your Account Created Successfully!";
    }
    void DeleteAccount(){
        Name.clear();
        AccountNum.clear();
        cout << "Well! Your Account has been removed.";
    }
};

int main()
{
    Bank Account;
    Account.CreateAccount();
    Account.CheckBalance();
    Account.Deposit();
    Account.Withdraw();
    Account.DeleteAccount();
    
    cout << "Enter, C: Create Account \n B: Check Balance \n D: Deposite Money \n W: Withdraw Money \n R: Remove Account Parmanently \n X: Exit";
    switch(choice!='X'){
            case 'C': 
                    Account.CreateAccount();
                    break;
            case 'B':
                    Account.CheckBalance();
                    break;
            case 'D': 
                    Account.Deposit();
                    break;
            case 'W': 
                    Account.Withdraw();
                    break;
            case 'R':
                    Account.DeleteAccount();
                    break;

    }

}
