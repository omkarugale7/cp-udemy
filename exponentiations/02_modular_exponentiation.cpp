#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9 + 7;
int32_t main()
{
    long long int a, b, ans = 1;
    cin >> a >> b;
    while (b)
    {
        if (b & 1)
            ans *= a, ans %= mod;
        a *= a;
        a %= mod;
        b /= 2;
    }
    cout << ans << endl;

    return 0;
}