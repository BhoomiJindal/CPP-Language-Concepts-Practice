#include <iostream>
using namespace std;

int main(){
    int amount, dailyLimit;
    float balance;
    cout << "Enter your account balance: ";
    cin >> balance;
    cout << "Enter your daily withdrawal limit: ";
    cin >> dailyLimit;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;

    if (amount<=balance){
        if (amount<=dailyLimit){
            if (amount%100==0){
                cout<<"Withdrawal of Rs."<<amount<<" is successful."<<endl;
            }
            else{
                cout<<"Withdrawal amount must be in multiples of 100."<<endl;
            }
        }
        else{
            cout<<"Withdrawal amount exceeds daily limit of Rs."<<dailyLimit<<"."<<endl;
        }
    }
    else{
        cout<<"Insufficient balance. Your account balance is Rs."<<balance<<"."<<endl;
    }
}