/*Problem link :
https://codeforces.com/contest/1971/problem/C
*/
#include <bits/stdc++.h>
#define l long
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
    int t;
    int a,b,c,d,e,f;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int> v;
        cin>>a>>b>>c>>d;
        v.push_back(a);v.push_back(b);v.push_back(c);v.push_back(d);
        auto m= max_element(v.begin(),v.end());
        if(*m==a)
        {
            if(c>d)
            {
                e=c;
                f=d;
                if(b>f && b<e)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(d>c)
            {
                e=d;
                f=c;
                if(b>f && b<e)
                    cout<<"YES"<<endl;  
                else
                    cout<<"NO"<<endl;
            }
        }
        else if(*m==b)
        {
            if(c>d)
            {
                e=c;
                f=d;
                if(a>f && a<e)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(d>c)
            {
                e=d;
                f=c;
                if(a>f && a<e)
                    cout<<"YES"<<endl; 
                else
                    cout<<"NO"<<endl;
                     
            }
        }
        else if(*m==c)
        {
            if(a>b)
            {
                e=a;
                f=b;
                if(d>f && d<e)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(b>a)
            {
                e=b;
                f=a;
                if(d>f && d<e)
                    cout<<"YES"<<endl; 
                else
                    cout<<"NO"<<endl;
                     
            }
        }
        else if(*m==d)
        {
            if(a>b)
            {
                e=a;
                f=b;
                if(c>f && c<e)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(b>a)
            {
                e=b;
                f=a;
                if(c>f && c<e)
                    cout<<"YES"<<endl; 
                else
                    cout<<"NO"<<endl;
                     
            }
        }
    
    }
    return 0;
}
// accepted