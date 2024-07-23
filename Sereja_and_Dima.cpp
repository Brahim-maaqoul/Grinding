#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int>v(n);
    int s = 0, d = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = n - 1;
    int k = 0;
    while(i <= j)
    {
        if(v[i] > v[j])
        {
            if(k % 2)
                d += v[i];
            else
                s += v[i];
            i++;
        }
        else
        {
            if(k % 2)
                d += v[j];
            else
                s += v[j];
            j--;
        }
        k++;
    }
    cout << s << " " << d << "\n";
}