// only valid if no. of digits are same
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a, b;
    int i = 0, z = 0, carry = 1;
    bool hai_kya = false;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans = "";
    for (i = 0; i < max(a.size(), b.size()); i++)
    {
        z = (a[i] - '0') + (b[i] - '0');
        if (hai_kya)
            z += 1;
        if (z > 9)
        {
            ans.append(to_string(z % 10));
            hai_kya = true;
        }
        else
        {
            ans.append(to_string(z % 10));
            hai_kya = false;
        }
    }
    if (i == max(a.size(), b.size())  && z > 9)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}