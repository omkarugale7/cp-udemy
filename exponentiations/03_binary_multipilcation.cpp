#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    while (b)
    {
        if (b & 1)
            ans += a, ans %= c;
        a += a;
        a %= c;
        b = b >> 1;
    }
    cout << ans << endl;
    return 0;
}