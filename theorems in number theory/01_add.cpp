/* Editor: Omkar Ugale
Time : . 19th jan 2022 */
#include <bits/stdc++.h>
using namespace std;
const int m = 7, z = 10;
int arr[z];
int powr(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b = b >> 1;
    }
    return ans;
}
int addm(int a, int b)
{
    return (a%m + b%m) % m;
}
int multm(int a, int b)
{
    return (a%m * b%m) % m;
}
int subm(int a, int b)
{
    return ((a - b) % m + m) % m;
}
int divm(int a, int b)
{
    return multm(a, powr(b, m - 1));
}
void factorials()
{
    arr[0] = 1;
    for (int i = 1; i < z; i++)
    {
        arr[i] = arr[i - 1] * i;
    }
}
int ncr(int n, int r)
{
    factorials();
    cout << arr[n] << " " << arr[n - r] << " " << arr[r] << endl;
    return divm(arr[n], multm(arr[n - r], arr[r]));
}
int main()
{
    int n, m;
    cin >> n >> m;
    // cout << addm(n, m) << endl;
    // cout << multm(n, m) << endl;
    // cout << subm(n, m) << endl;
    // cout << divm(n, m) << endl;
    // factorials();
    // cout<<arr[5];
    cout << ncr(n, m) << endl;
    return 0;
}