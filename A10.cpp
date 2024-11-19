/*Problem link :
https://codeforces.com/problemset/problem/266/B
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        int j=0;
        while(j<n)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
               s[j]='G'; 
               s[j+1]='B' ;
               j=j+2;
            }
            else
            {
                j++;
            }
        }
        j=0;
    } 
    std::cout<<s<<endl;     
    return 0;
}
//accepted
