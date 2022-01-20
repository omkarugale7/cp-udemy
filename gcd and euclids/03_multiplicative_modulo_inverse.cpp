/* Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>
using namespace std;
vector<int> Euclidgcdoo(int a, int b)
{
    if (b == 0)
        return {1, 0, a};
    vector<int> result = Euclidgcdoo(b, a % b);
    int xx = result[0];
    int yy = result[1];
    int gcd = result[2];
    int x = yy;
    int y = xx - (a / b) * yy;
    return {x, y, gcd};
}
int MMi(int a, int m)
{
    vector<int> v = Euclidgcdoo(a, m);

    if (v[2] != 1)
    {
        cout << "MMI dooes not exist" << endl;
        return -1;
    }
    else
        return ((v[0] % m + m) % m);
}
int main()
{
    int a, m;
    cin >> a >> m;
    cout << MMi(a, m) << endl; // this returns x which is multiplicative modulo inverse of a under modulo m
    return 0;
}