#include <iostream>
using namespace std;

//convert an uppercase char to lowercase char

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert to lowercase
        cout << "Lowercase: " << ch << endl;
    } else {
        cout << "Not an uppercase character!" << endl;
    }

    return 0;
}
