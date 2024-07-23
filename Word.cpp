#include <iostream>
#include <algorithm>

using namespace std;

int asciitolower(char in) {
    
    return tolower(in);
}

int asciitoupper(char in) {
    
    return toupper(in);
}

int main()
{
    string s;
    
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            a++;
        else
            b++;
    }
    if (a <= b)
    {
        transform(s.begin(), s.end(), s.begin(),
            asciitolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(),
            asciitoupper);
    }
    cout << s << "\n";
}