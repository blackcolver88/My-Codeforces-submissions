/*Problem link :
https://codeforces.com/problemset/problem/281/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    char a=s[0];
    if(65<=a && a<=90)
        cout<<s<<endl;
    else if(97<=a && a<=122)
    {
        s[0]=toupper(s[0]);
        cout<<s<<endl;
    }
    return 0;
}
//accepted