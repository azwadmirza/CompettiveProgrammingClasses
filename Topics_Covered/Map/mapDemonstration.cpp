#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m; // Map with integer keys and string values
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";

    // Iterating through the map
    for (auto it : m) {
        cout << it.first << ": " << it.second << " ";
    }
    cout << endl;

    // Erase elements from the map
    m.erase(1);
    for (auto it : m) {
        cout << it.first << ": " << it.second << " ";
    }
    cout << endl;

    // Check if a key is present in the map
    if (m.find(2) != m.end()) {
        cout << "Key 2 is present in the map" << endl;
    } else {
        cout << "Key 2 is not present in the map" << endl;
    }

    // Erase using iterator
    auto it = m.find(2);
    if (it != m.end()) {
        m.erase(it);
    }
    for (auto it : m) {
        cout << it.first << ": " << it.second << " ";
    }
    cout << endl;

    // Check if a map is empty
    if (m.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    // Size of the map
    cout << "Map size: " << m.size() << endl;

    //you can also insert pairs to the map
    m.insert({5, "five"});
    m.emplace(6, "six");
    for (auto it : m) {
        cout << it.first << ": " << it.second << " ";
    }


    // Clear the map
    m.clear();
    if (m.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    return 0;
}
