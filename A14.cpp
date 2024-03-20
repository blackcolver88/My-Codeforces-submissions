/*Problem link :
https://codeforces.com/problemset/problem/1551/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n,m,k;
        cin>>n;
        m=n/3;
        k=n%3;
        if(k==0 || k==1)
            cout<<k+m<<" "<<m<<endl;
        else if (k==2 )
            cout<<(n-2)/3<<" "<<((n-2)/3)+1<<endl;
    }
    return 0;
}
//accepted