#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);\
    cin.tie(nullptr); \
    cout.tie(nullptr)

int main() {
    fastio;
    string str = "C++ strings are versatile and powerful.";

    // Accessing characters
    char ch = str[0];
    cout << "First character: " << ch << endl;

    //4th character
    cout<<str[2]<<endl;

    // Length of the string
    int length = str.length();
    cout << "Length: " << length << endl;

    // Searching
    int found = str.find("versatile");
    if (found != string::npos) {
        cout << "Substring found at position " << found << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    // Substring
    string substr = str.substr(4, 6); // "strings"
    cout << "Substring: " << substr << endl;

    // Inserting
    str.insert(10, "awesome ");
    cout << "After inserting: " << str << endl;

    // Erasing
    str.erase(0, 3);
    cout << "After erasing: " << str << endl;

    // Appending
    str.append(" C++ is fun!");
    cout << "After appending: " << str << endl;

    // Comparing
    string str2 = "C++ strings are versatile.";
    int compareResult = str.compare(str2);
    if (compareResult == 0) {
        cout << "Strings are equal" << endl;
    } else if (compareResult < 0) {
        cout << "str is less than str2" << endl;
    } else {
        cout << "str is greater than str2" << endl;
    }

    // Empty string check
    if (str.empty()) {
        cout << "str is empty" << endl;
    } else {
        cout << "str is not empty" << endl;
    }

    // Clear the string
    str.clear();
    if (str.empty()) {
        cout << "str is empty after clearing" << endl;
    }

    return 0;
}
