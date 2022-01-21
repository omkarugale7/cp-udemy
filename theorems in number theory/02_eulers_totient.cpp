/* Editor: Omkar Ugale
Time : . 19th jan 2022 */
#include <bits/stdc++.h>
const int n = 1e4;
using namespace std;
vector<int> sieve(int k)
{
    int arr[n];
    for (int i = 0; i <= n; i++)
        arr[i] = i;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j < n; j += i)
            {
                if (arr[j] == j)
                {
                    arr[j] = i;
                }
            }
        }
    }
    vector<int> prime;
    for (int i = 2; i <= k; i++)
    {
        if (arr[i] == i)
            prime.push_back(i);
    }
    vector<int> answers;
    for (int i = 0; i < prime.size(); i++)
    {
        if (k % prime[i] == 0)
        {
            answers.push_back(prime[i]);
            k /= prime[i];
        }
    }
    return answers;
}
int totient(int k)
{
    vector<int> factors = sieve(k);
    float ans = k;
    for (int i = 0; i < factors.size(); i++)
    {
        ans *= (float)(1.0 - 1.0 / (float)factors[i]);
    }
    return (int)ans;
}
int main()
{
    int a;
    cin >> a;

    for (int i = 1; i < a; i++)
    {
        cout << i << " " << totient(i) << endl;
    }

    return 0;
}