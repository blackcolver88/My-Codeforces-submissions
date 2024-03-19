/*Problem link :
https://codeforces.com/problemset/problem/492/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,j=1,i=1;
    cin>>n;
    while(n>0)
    {
        n=n-i;
        if((i+j+1)>n)
            break;
        j++;
        i=i+j;
    }
    cout<<j<<endl;
    return 0;
}
//accepted