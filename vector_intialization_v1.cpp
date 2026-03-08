#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type 1
    // vector<int> v(10); // type 2 with size
    // vector<int> v(10, -2); // type 3 with element value
    // vector<int> v2(v); // type 4 copying vector
    int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v3(a, a + 5); // type 5 copying from static array
    vector<int> v5 = {1, 2, 3, 4, 5};
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << v5.size() << endl;
    return 0;
}