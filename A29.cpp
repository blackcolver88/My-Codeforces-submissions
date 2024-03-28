/*Problem link :
https://codeforces.com/contest/1950/problem/A
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a<b && b<c)
            cout<<"STAIR"<<endl;      
	    else if(a<b && b>c)
            cout<<"PEAK"<<endl;  
        else
            cout<<"NONE"<<endl;
    }
    return 0;
}
//accepted