/*Problem link :
https://codeforces.com/problemset/problem/617/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int x,i=0;
  cin>>x;
  if(x>5)
  {
    i+=(x/5);
    x=x-(x/5)*5;
    if(1<=x && x<=4)
        i++;
  }
  else if(1<=x && x<=5)
        i++;
  cout<<i<<endl;
  return 0;
}
//accepted