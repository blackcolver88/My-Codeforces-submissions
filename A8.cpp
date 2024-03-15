/*Problem link :
https://codeforces.com/problemset/problem/617/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long t;
  cin>>t;
  char a='A',b='B' ;
  for(long long i=0;i<t;i++)
  {
    long long n;
    string s="";
    cin>>n;
    if(n%2==0)
    {
        cout<<"YES"<<endl;
        if(n==2)
        {
            cout<<"MM"<<endl;
        }
        else if(n==4)
        {
            cout<<"AABB"<<endl;
        }
        else if(n==6)
        {
            cout<<"AABBAA"<<endl;
        }
        else if(n>6)
        {
            for(int i=0; i<n/4;i++)
            {
                s+=a;
                s+=a;
                s+=b;
                s+=b;
            }
        }
        if(n%4==2 && n!=6 && n!=2)
        {
            s+=a;
            s+=a;
        }
        cout<<s<<endl;
    }
    else if(n%2==1)
        cout<<"NO"<<endl;
  }
  return 0;
}
//accepted