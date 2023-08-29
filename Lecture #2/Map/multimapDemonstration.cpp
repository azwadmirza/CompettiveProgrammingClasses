#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm; // Multimap with integer keys and string values
    mm.insert({1, "one"});
    mm.insert({2, "two"});
    mm.insert({2, "second"}); // Note: Multimap allows duplicate keys
    mm.insert({4, "four"});

    // Iterating through the multimap
    for (auto it : mm) {
        cout << it.first << ": " << it.second << endl;
    }
    cout << endl;

    // Erase elements from the multimap
    mm.erase(2);//erases both values for 2
    for (auto it : mm) {
        cout << it.first << ": " << it.second << endl;
    }
    cout << endl;

    mm.emplace(2, "two");
    mm.emplace(2, "second"); // Note: Multimap allows duplicate keys
    for (auto it : mm) {
        cout << it.first << ": " << it.second << endl;
    }
    cout << endl;

    //erase first occurence
    auto it2=mm.find(2);
    mm.erase(it2);
    for (auto it : mm) {
        cout << it.first << ": " << it.second << endl;
    }
    cout << endl;


    // Find key presence in the multimap
    if (mm.find(2) != mm.end()) {
        cout << "Key 2 is present in the multimap" << endl;
    } else {
        cout << "Key 2 is not present in the multimap" << endl;
    }

    // Erase using iterator
    auto it = mm.find(2);
    if (it != mm.end()) {
        mm.erase(it);
    }
    for (auto it : mm) {
        cout << it.first << ": " << it.second << " ";
    }
    cout << endl;

    // Check if a multimap is empty
    if (mm.empty()) {
        cout << "Multimap is empty" << endl;
    } else {
        cout << "Multimap is not empty" << endl;
    }

    // Size of the multimap
    cout << "Multimap size: " << mm.size() << endl;

    // Inserting pairs into the multimap
    mm.insert({5, "five"});
    mm.emplace(6, "six");
    for (auto it : mm) {
        cout << it.first << ": " << it.second << " ";
    }

    // Clear the multimap
    mm.clear();
    if (mm.empty()) {
        cout << "Multimap is empty" << endl;
    } else {
        cout << "Multimap is not empty" << endl;
    }

    return 0;
}
