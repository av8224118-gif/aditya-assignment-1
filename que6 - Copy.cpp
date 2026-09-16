#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "vector elements: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << "\nsize = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;

    // front()
    cout << "First element = " << v.front() << endl;
    // back()
    cout << "last element = " << v.back() << endl;

    // at()
    cout << "Element at index 2 = " << v.at(2) << endl;

    // pop_back()
    v.pop_back();

    cout << "after pop_back():";
    for (int x : v)
    {
        cout << x << " ";
    }
    // insert()
    v.insert(v.begin() + 1, 15);

    cout << "\nafter insert():";
    for (int x : v)
    {
        cout << x << " ";
        
    }

    // erase()
    v.erase(v.begin() + 1);

    cout << "\nafter erase(): ";
    for (int x : v)
    {
        cout << x << " ";
    }  // empty()
    cout << "\nIs vector empty? " << (v.empty() ? "yes" : "no") << endl;

    // clear()
    v.clear();

    cout << "after clear(), size = " << v.size() << endl;

    return 0;

}