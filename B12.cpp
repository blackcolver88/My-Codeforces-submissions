/*Problem link :
https://codeforces.com/problemset/problem/1607/B
*/
#include <bits/stdc++.h>
#define l long
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector<long long>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sll t, x,n,a ;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
       cin>>x>>n;
       a=1; 
       if(n==0)
        cout<<x<<endl; 
       else if(x%2==0 && n%4==0)
        cout<<x<<endl;
       else if(x%2==0 && n%4==1)
        cout<<x-n<<endl; 
       else if(x%2==0 && n%4==2)
        cout<<x+1<<endl; 
       else if(x%2==0 && n%4==3)
        cout<<x+n+1<<endl; 
       else if(x%2!=0 && n%4==0)
        cout<<x<<endl;
       else if(x%2!=0 && n%4==1)
        cout<<x+n<<endl; 
       else if(x%2!=0 && n%4==2)
        cout<<x-1<<endl; 
       else if(x%2!=0 && n%4==3)
        cout<<x-(n+1)<<endl; 
      
    }
    return 0;
}
// accepted