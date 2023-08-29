#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n); // this is static allocation of memory for vector
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // default initialization of vector

    vector<int> v; // this vector is initially empty and will grow dynamically

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // to get the size of vector, you can use
    cout << v.size() << endl;

    // to print the vector, you can use
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // similar to arrays mostly
    cout << "\n";

    // but you can also resize a vector to the size you want
    v.resize(100); // this will resize the vector to size 10
    cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    } // when you resize the elements that were previously there would not be removed, until or unless you resize to a smaller size
    cout<<"\n";


    v.resize(5); // this will resize the vector to size 5
    v.resize(10);
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    } // this will show that the elements that were intiially there has been removed, and prints 0s or nothing instead

    cout<<"\n";

    // you can also use the pop_back() function to remove the last element of the vector
    v.pop_back();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout<<"\n";

    // you can also use the clear() function to remove all the elements of the vector
    v.clear();
    cout << v.size() << endl;

    // you can also use the erase() function to remove a specific element of the vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
    arr.erase(arr.begin() + 2); // this will remove the 3rd element of the vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";

    // you can also use the insert() function to insert a specific element of the vector
    arr.insert(arr.begin() + 2, 10); // this will insert 10 at the 3rd position of the vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";

    // you can also assign a vector with default values and size from the start
    vector<int> v3(10, 5); // this will create a vector of size 10 with all elements initialized to 5
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout<<"\n";
    // you can also use assign to assign a vector values
    vector<int> v4;
    v4.assign(10, 5); // this will create a vector of size 10 with all elements initialized to 5
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout<<"\n";
    return 0;
}