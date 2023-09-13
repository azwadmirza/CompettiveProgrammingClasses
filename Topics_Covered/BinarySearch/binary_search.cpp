#include <bits/stdc++.h>
using namespace std;

int main() {
    int value;
    cin>>value;
    vector<int> numbers = {10, 20, 30, 40, 50, 60};
    bool found = binary_search(numbers.begin(), numbers.end(), value);
    if (found) {
        cout << "Value "<<value<<" found in the sequence." << std::endl;
    } else {
        cout << "Value "<<value<<" not found in the sequence." << std::endl;
    }
    return 0;
}