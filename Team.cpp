#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        int one = 0;
        int array[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> array[i];
            if (array[i] == 1)
                one++; 
        }
        if (one >= 2)
            res++;
    }
    cout << res << "\n";
}