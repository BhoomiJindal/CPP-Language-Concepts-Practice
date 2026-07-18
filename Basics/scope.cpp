#include <iostream>
using namespace std;
int x; //global variable (default value=0)
int main() {
    int x=10;
    int y; //local variable (default value=garbage value)
    cout << x << endl; //local variable holds precedence over global variable
    cout << ::x << endl; //global variable can be accessed using scope resolution operator
    cout << y << endl;
    return 0;
}