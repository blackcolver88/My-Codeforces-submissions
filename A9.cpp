/*Problem link :
https://codeforces.com/contest/1944/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long t;
  cin>>t;
  for(long i=0;i<t;i++)
  {
    long n, k, j = 0, a = 0, b = 0, d = 0;
    cin>>n>>k;
    d = (n * (n - 1)) / 2;
    if(k==0)
        cout<<n<<endl;
    else
    {
    if(k>=n-1)
        cout<<1<<endl;
    else
    {
        cout<<n<<endl;
    }   
    }
  }
  
  return 0;
}
//accepted