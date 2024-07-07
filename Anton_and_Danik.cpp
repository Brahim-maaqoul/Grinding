#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> v(n);
    int a = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton\n";
    else if (a < d)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
}