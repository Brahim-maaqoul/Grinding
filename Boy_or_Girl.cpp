#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s;
    map<char, int> m;

    cin >> s;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    cout << (m.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << "\n";
}