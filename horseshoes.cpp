#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n = 4;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    set<int>s;
    for (int i = 0; i < 4; i++)
        s.insert(v[i]);
    cout << 4 - s.size() << "\n";
}