/* Editor: Omkar Ugale
Time : . 22nd jan 2022 */
#include <bits/stdc++.h>
int Bst(int n)
{
   if (n <= 1)
      return 1;
   int ans = 0;
   for (int i = 1; i <= n; i++)
   {
      ans += Bst(i - 1) * Bst(n - i);
   }
   return ans;
}
using namespace std;
int main()
{
   int n;
   cin >> n;
   cout << Bst(n);
   return 0;
}