#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int res = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a <= h)
            res += 1;
        else
            res += 2;
    }
    cout << res << endl;
    return 0;
}