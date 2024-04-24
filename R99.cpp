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
    int n,b=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if((s[0]=='+' && s[1]=='+') || (s[1]=='+' && s[2]=='+') )
            b++;
        else if((s[0]=='-' && s[1]=='-') || (s[1]=='-' && s[2]=='-') )
            b--;
    }
    cout<<b<<endl;
   return 0;
}
//accepted