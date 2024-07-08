#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if (a == b)
        cout << "1\n";
    else
    {
        int cp = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            cp++;
        }
        cout << cp << "\n";
    }
}