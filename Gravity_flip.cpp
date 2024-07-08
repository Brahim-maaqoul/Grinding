#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

