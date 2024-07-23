#include <iostream>

using namespace std;

int main()
{
    int n;
    int j = 0;
    cin >> n;
    if (n == 1)
    {
        cout << n << "\n";
        return 0;
    }
    int k = 0, res = 0;
    while (j < n)
    {
        int i;
        cin >> i;
        if (i != k)
            res++;
        k = i;
        j++;
    }
    cout << res << "\n";
}