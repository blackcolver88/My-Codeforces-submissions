/*Problem link :
https://codeforces.com/contest/1955/problem/A
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
    sll a, b, c, d , e,f ;
    cin>>a>>b>>c>>d;
    e=max(a*3/10, a-(a/250)*c);
    f=max(b*3/10, b-(b/250)*d);
    if(e>f)
        cout<<"Misha"<<endl;
    else if(e==f)
        cout<<"Tie"<<endl;
    else
        cout<<"Vasya"<<endl;
   return 0;
}
//accepted