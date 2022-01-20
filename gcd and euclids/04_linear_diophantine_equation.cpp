/* Editor: Omkar Ugale
Time : .  17th jan 2022 */
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

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> result = Euclidgcdoo(a, b);
    if (!(c % result[2]))
        cout << "NO INTEGRAL ANSWER" << endl;
    else
    {
        int k = c / result[2];
        int x = k * result[0];
        int y = k * result[1];
        cout << x << " " << y << endl;
    }
    return 0;
}