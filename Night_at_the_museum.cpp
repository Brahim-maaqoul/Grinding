#include <iostream>
#include <map>

using namespace std;

int main()
{
    
    int res = 0;
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res += min(abs((s[i] - 'a') - k), 26 - abs((s[i] - 'a') - k));
        k = s[i] - 'a';
    }
    cout << res << "\n";
}