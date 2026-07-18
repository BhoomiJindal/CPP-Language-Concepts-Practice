// Write a C++ program to check college admission eligibility based on the following criteria:
// 1. if stream is Science and PCM marks>90, print "Eligible for Engineering", else print "Not eligible for Engineering"
// 2. if stream is Commerce and Accounts marks>90, print "Eligible for Commerce", else print "Not eligible for Commerce"
// 3. else print "Choose a suitable course"

#include <iostream>
using namespace std;

int main(){
    string stream;
    float marks, physics, chemistry, mathematics, accounts;
    cout<<"Enter your stream (Science/Commerce/Arts): ";
    cin>>stream;

    if(stream=="Science"){
        cout<<"Enter your Physics marks: ";
        cin>>physics;
        cout<<"Enter your Chemistry marks: ";
        cin>>chemistry;
        cout<<"Enter your Mathematics marks: ";
        cin>>mathematics;
        marks = (physics + chemistry + mathematics) / 3;
        if(marks>90){
            cout<<"Eligible for Engineering"<<endl;
        }
        else{
            cout<<"Not eligible for Engineering"<<endl;
        }
    }
    else if(stream=="Commerce"){
        cout<<"Enter your Accounts marks: ";
        cin>>accounts;
        if(accounts>90){
            cout<<"Eligible for Commerce"<<endl;
        }
        else{
            cout<<"Not eligible for Commerce"<<endl;
        }
    }
    else{
        cout<<"Choose a suitable course"<<endl;
    }
    return 0;
}