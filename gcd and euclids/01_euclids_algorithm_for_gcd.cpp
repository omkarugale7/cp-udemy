/* Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>
int Recursivegcd(int a, int b)
{

    if(!b)
    return a;
    return Recursivegcd(a,a%b);
}
int Recursive(int a, int b)
{

    while (b > 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Recursive(a,b) << endl;
    cout << Recursivegcd(a,b) << endl;

    return 0;
}