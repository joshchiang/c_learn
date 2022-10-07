#include <iostream>
using namespace std;

int main()
{
    int numInt = 15; // Integer (whole number without decimals)
    cout << numInt << endl;

    double numDobule = 12.99;   // Floating point number (with decimals)
    char charVar = 'c';         // Character
    string stringVar = "hello"; // String (text)
    bool boolVar = true;        // Boolean (true or false)
    // Add Variables Together
    // add string and number
    cout << "I am " << numInt << " years old." << charVar;

    int x = 5;
    int y = 6;
    int sum = x + y;

    cout << sum << endl;
    // Declare Multiple Variables
    int x1 = 5, y1 = 6, z1 = 50;
    cout << x1 + y1 + z1 << endl;
    // One Value to Multiple Variables
    int x2, y2, z2;
    x2 = y2 = z2 = 50;
    cout << x2 + y2 + z2 << endl;
    // Constants (unable to change)
    const int myNum = 15;

    return 0;
}
