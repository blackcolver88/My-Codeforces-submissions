/*Problem link :
https://codeforces.com/problemset/problem/133/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    for(char c: s)
    {
        if(c<33 || c>126)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(s.find('H')==std::string::npos && s.find('Q')==std::string::npos && s.find('+')==std::string::npos && s.find('9')==std::string::npos )
        cout<<"NO"<<endl;
    else
    {
        if(s.find('+')==std::string::npos)
            cout<<"YES"<<endl;
        else
        {
            if(s.find('H')!=std::string::npos || s.find('Q')!=std::string::npos || s.find('9')!=std::string::npos )
                cout<<"YES"<<endl;
            else
            {
                int a=s.find('+');
                if(a+1!=s.size() || s[a+1]!='=' || s[a+1]!='+')
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
//accepted