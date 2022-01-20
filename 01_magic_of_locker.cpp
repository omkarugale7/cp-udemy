#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int n,ans= 1,m=1000000007;
    cin>>n;
    if (n==1)
    cout<<1<<endl;
    else 
    {
        if (n%3==0)
        {
            int rem = n/3;
             while (rem)
             {
                 ans = ((ans%m)*3)%m;
             }
             
        }
        else if (n%3==1)
        {
            ans =4;
        }
        
        
    }
    
    return 0;
}