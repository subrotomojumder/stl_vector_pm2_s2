#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> v1 = {5, 6, 7, 8};
    // v = v1;  // manual insert
    // cout << v[1];
    // v1.push_back(88);
    // v1.pop_back();

    // v1.insert(v1.begin() + 2, 100); // vector er maje kicu insert korte use korte hoi
    // v1.insert(v1.begin()+2, v.begin(), v.end()); // ekhane v1 e v insert hocce

    // v1.erase(v1.begin() + 2); // remove any element
    v1.erase(v1.begin() + 2, v1.end()); // remove multi elements
    for (int x : v1)
    {
        cout << x << " ";
    }
    return 0;
}