#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ans_bhetla = false;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        vector<int> subarray_sum;
        subarray_sum.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            subarray_sum.push_back(subarray_sum[i - 1] + v[i]);
            cout << subarray_sum[i] << " ";
        }
        vector<int> mod;
        for (int i = 0; i < n; i++)
        {
            int z = subarray_sum[i] % n;
            cout << z << " ";
            if (z == 0)
            {
                cout << i + 1 << endl;
                ans_bhetla = true;
                break;
            }
            mod.push_back(z);
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {

            if (m.find(mod[i]) != m.end())
            {
                int start = m[mod[i]];
                for (int j = start; j < i; j++)
                    cout << j << " ";
                cout << endl;
                break;
            }
            m[mod[i]] = i + 1;
        }
    }
    return 0;
}