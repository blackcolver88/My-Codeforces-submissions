/*Problem link :
https://codeforces.com/problemset/problem/266/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,j=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]==s[i+1])
        j++;
  }
  cout<<j<<endl;
  return 0;
}
//accepted