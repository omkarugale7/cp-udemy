#include <iostream>

using namespace std;
void primefact(int n, int m)
{
    int spf[100] = {0};
    for (int i = 2; i <= m; i++)
    {
        if (spf[i] == 0)
        {
            for (int j = i * i; j <= m; j += i)
            {
                spf[j] = i;
            }
        }
    }
    int k = 0;
    for (int i = 2; i <= m; i++)
    {
        if (!spf[i])
            cout << i << " ";
    }
    cout << endl;
    for (int i = 2; i <= m; i++)
    {
        if (!spf[i])
            k++;
        spf[i] = k;
    }
    cout << spf[m] - spf[n-1]  << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    primefact(n, m);
    return 0;
}