#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, ans = 1;
    cin >> a >> b;
    while (b)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b = b >> 1;
    }
    cout << ans << endl;

    return 0;
}