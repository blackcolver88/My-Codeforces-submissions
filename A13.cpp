/*Problem link :
https://codeforces.com/problemset/problem/1520/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j=1;
        cin>>n;
        string s,c="";
        cin>>s;
        c+=s[0];
        while(j<n)
        {
            if(c.find(s[j])==std::string::npos)
            {
                c+=s[j];
                j++;
            }
            else if(c.find(s[j])==(c.size()-1))
                j++;
            else if((c.find(s[j])!=(c.size()-1)) &&(c.find(s[j])!=std::string::npos))
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(j==n)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
//accepted