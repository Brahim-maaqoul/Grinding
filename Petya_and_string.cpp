#include <iostream>

using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;
    int a = 0, b = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            a++;
            break;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            b++;
            break;
        }
            
    }
    if (a > b)
        cout << "1\n";
    else if (a < b)
        cout << "-1\n";
    else
        cout << "0\n";   
}