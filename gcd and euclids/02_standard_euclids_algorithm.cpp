/* Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>
using namespace std;
vector<int> Euclidgcdoo(int a, int b)
{
    if (b == 0)
        return {1, 0,a};
    vector<int> result = Euclidgcdoo(b, a % b);
    int xx = result[0];
    int yy = result[1];
    int gcd = result[2];
    int x = yy;
    int y = xx - (a / b) * yy;
    return {x, y,gcd};
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> result = Euclidgcdoo(a, b);
    cout << a << "*" << result[0] << " and sum of " << b << "*" << result[1] << " = " << a * result[0] + b * result[1] << endl;
    return 0;
}