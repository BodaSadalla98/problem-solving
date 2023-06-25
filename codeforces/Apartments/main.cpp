#include <iostream>
#include "bits/stdc++.h"

/**

 25 30 40    k = 5
 35



**/
using namespace std;

int main()
{
    int n, m, k, idx = 0;
    cin >> n >> m >> k;
    int cnt = 0;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; ++i)
    {
        int min_value = max(a[i] - k, 0);
        auto it = lower_bound(b.begin() + idx, b.end(), min_value);

        if (it == b.end())
            break;

        if (*it <= a[i] + k)
        {
            cnt++;
            idx = it - b.begin() + 1;
        }
    }
    cout << cnt;
    return 0;
}
