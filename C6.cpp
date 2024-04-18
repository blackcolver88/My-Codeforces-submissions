/*Problem link :
https://codeforces.com/contest/1921/problem/A
*/
#include <bits/stdc++.h>
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
    long long n,m,a,b=0;
    cin>>n>>m>>a;
    if(n%a!=0)
      b+=(n/a)+1;
    else
      b+=n/a;
    if(m%a==0)
      b*=m/a;
    else
      b*=((m/a)+1);
    cout<<b<<endl;
   return 0;
}
//accepted