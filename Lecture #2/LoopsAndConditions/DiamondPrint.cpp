#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Print the upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        cout << string(n - i, ' ') << string(2 * i - 1, '#') << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        cout << string(n - i, ' ') << string(2 * i - 1, '#') << endl;
    }

    return 0;
}