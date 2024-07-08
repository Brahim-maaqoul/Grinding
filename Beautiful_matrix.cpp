#include <iostream>
#include <cmath>

using namespace std;

// int main()
// {
//     int arr[5][5];
//     int a = 0, b = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> arr[i][j];
//             if (arr[i][j] == 1)
//             {
//                 a = i;
//                 b = j;
//             }
//         }
//     }
//     cout << abs(a - 2) + abs(b - 2) << endl;
// }


int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int a; cin >> a;
            if (a == 1)
                cout << abs(i - 2) + abs(j - 2) << endl;
        }
    }
}