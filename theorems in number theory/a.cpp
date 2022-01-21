/* Editor: Omkar Ugale
Time : . 19th jan 2022 */
#include <bits/stdc++.h>
using namespace std;
const int n = 1e4;
vector<int> prime;
void sieve()
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
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
            prime.push_back(i);
    }
}
int totient(int k, vector<int> factors)
{
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
    sieve();
    for (int i = 1; i < a; i++)
    {
        vector<int> answers;
        for (int j = 0; j < prime.size(); j++)
        {
            if (prime[j] > i)
                break;
            if (i % prime[j] == 0)
            {
                answers.push_back(prime[i]);
                // i /= prime[i];
            }
        }
        cout << i << " " << totient(i, answers) << endl;
    }
    return 0;
}