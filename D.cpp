/*Problem link :
https://codeforces.com/problemset/problem/1475/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long t;
  cin>>t;
  for(long long j=0;j<t;j++)
  {
    long long n;
    cin>>n;
    if(n%2==1 && n>1)
      cout<<"YES"<<endl;
    else 
    {
      while(n%2!=1)
      {
        n=n/2 ;
        if(n%2==1 && n>1)
        {
          cout<<"YES"<<endl;
          break;
        }
      }
    }
    if(n==1)
      cout<<"NO"<<endl;
  }
  return 0;
}
//accepted