#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << "The number you entered was: " << number << endl;
    cout << "The number in hexadecimal: 0x" << hex << number << endl;
    cout << "The number in octal: 0" << oct << number << endl;
    return 0;
}
