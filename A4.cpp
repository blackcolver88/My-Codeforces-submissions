/*Problem link :
https://codeforces.com/problemset/problem/110/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin>>s;
  int m=s.size(),d=0;
  for(int i=0;i<m;i++)
  {
    if(s[i]=='4'||s[i]=='7')
        d++;
  }
  if(d==4 ||d==7)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
//accepted