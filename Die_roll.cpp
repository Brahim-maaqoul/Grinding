#include <iostream>
#include <algorithm>

using namespace std;
int findGCD(int a, int b)
{
   if (b == 0)
      return a;
      return findGCD(b, a % b);
}
int main()
{
    int y, k;

    cin >> y >> k;
    int m = max(y, k);
    int s = 6 - m + 1;
    int g = findGCD(s, 6);

        cout << s / g << "/" << 6/g << endl;
    
}