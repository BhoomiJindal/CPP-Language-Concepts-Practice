#include <iostream>
using namespace std;
int main() {
    string name; //variable declaration
    int age;
    cout << "Enter your name: "; //output
    cin >> name; //input
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
    return 0;
}