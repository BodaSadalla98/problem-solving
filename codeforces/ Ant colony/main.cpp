#include <iostream>
#include "bits/stdc++.h"
using namespace std;
const int N = 1e5 + 5;
int t, n;
int seg[4 * N], power[N];
map<int, vector<int>> mp;

void build(int p, int l, int r)
{
    if (l == r)
    {
        seg[p] = power[l];
        return;
    }
    build(2 * p, l, (l + r) / 2);
    build(2 * p + 1, (l + r) / 2 + 1, r);

    seg[p] = __gcd(seg[2 * p], seg[2 * p + 1]);
}

int get(int p, int l, int r, int a, int b)
{
    if (l >= a && r <= b)
        return seg[p];
    if (r < a || l > b)
        return 0;

    return __gcd(get(p * 2, l, (l + r) / 2, a, b), get(p * 2 + 1, (l + r) / 2 + 1, r, a, b));
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> power[i];
        mp[power[i]].push_back(i);
    }
    build(1, 0, n - 1);
    cin >> t;
    for (int i = 0, l, r; i < t; ++i)
    {
        cin >> l >> r;
        --l, --r;
        int gcd = get(1, 0, n - 1, l, r);

        auto t1 = lower_bound(mp[gcd].begin(), mp[gcd].end(), r);
        auto t2 = lower_bound(mp[gcd].begin(), mp[gcd].end(), l);
        int ocr = lower_bound(mp[gcd].begin(), mp[gcd].end(), r) - lower_bound(mp[gcd].begin(), mp[gcd].end(), l);

        cout << r - l + 1 - ocr << endl;
    }

    return 0;
}
