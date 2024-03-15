/*Problem link :
https://codeforces.com/problemset/problem/791/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int a,b,i=0;
  cin>>a>>b;
  while(a<=b)
  {
    a=a*3;
    b=b*2;
    i++;
  }
  cout<<i<<endl;
  return 0;
}
//accepted