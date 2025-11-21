#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int min = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] + a[j] + j - i < min)
                {
                    min = a[i] + a[j] + j - i;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}