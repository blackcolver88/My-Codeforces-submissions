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
    long int i=0,j=0;
    while (i < s.length()) {
        std::string s2 = s.substr(i, 3);
        if (s2 == "WUB") 
        {
            s.erase(i,1);
            s.erase(i,1);
            s[i]=' ';
            i++;
        } 
        else {
            i++;
        }
    }
      while (j < s.length()) {
        string s2 = s.substr(i, 3);
        s2.erase(0, s2.find_first_not_of(" "));
        s2.erase(s2.find_last_not_of(" ") + 1);

        if (s2 == "  ") {
            s.erase(i, 2);
        } else {
            j++;
        }
    }

    cout<<s<<endl;
    return 0;
}
//accepted