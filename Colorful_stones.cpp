#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s, t;
    getline(cin,s);
    getline(cin, t);
    int j = 0, cp = 1;
    for (int i = 0; i < t.size(); i++)
    {
        while (j < s.size())
        {
            if (t[i] != s[j])
                break;
            else
            {
                j++;
                break;
            }
        }
    }
    cout << j + 1 << "\n";
}