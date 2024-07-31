#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    vector<int>v(4);
    for (int i = 0; i < 4; i++)
        cin >> v[i];
    string s;
    cin >> s;
    map<char, int>m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    cout << ((m['1'] * v[0]) + (m['2'] * v[1]) + (m['3'] * v[2]) + (m['4'] * v[3])) << "\n";
}