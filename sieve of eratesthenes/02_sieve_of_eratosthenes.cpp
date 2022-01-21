#include <iostream>

using namespace std;
typedef long long ll;
void primefact(int n)
{
    ll spf[n] = {0};
    for (ll i = 2; i <= n; i++)
    {
        if (spf[i] == 0)
        {
            for (ll j = i * i; j <= n; j += i)
            {

                spf[j] = i;
            }
        }
    }
    for (ll i = 2; i <= n; i++)
    {
        if (!spf[i])
            cout << i << " ";
    }
}
int main()
{
    ll n;
    cin >> n;
    primefact(n);
    return 0;
}