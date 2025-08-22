#include <iostream>
#include <string>
using namespace std;

//sort the string in alphabetically order

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();

    // Bubble Sort on characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // swap
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "String after sorting characters: " << str << endl;
    return 0;
}
