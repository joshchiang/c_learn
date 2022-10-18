#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout << "Type test";
    cin >> x;
    cout << "you type:" << x;
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;
    return 0;
}