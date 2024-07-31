#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int>v(n);
    stack<int>s;
    int res = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        while(v[i] > 0)
        {
            s.push(1);
            v[i]--;
        }
        if (v[i] < 0 && s.empty())
            res++;
        else if (v[i] < 0 && !s.empty())
        {
            s.pop();
            
        }
    }
    cout << res << "\n";
}