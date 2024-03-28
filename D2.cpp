/*Problem link :
https://codeforces.com/contest/1950/problem/D
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int bd(int e) {
    while (e > 0) {
        int d = e % 10;
        if (d != 0 && d != 1) { 
            return 0;
        }
        e =e/10;
    }
    return 1; 
}
vector<long long> get_divisors(ll n) {
    vector<long long> di;
    long long i=1;
    while(i <= sqrt(n)) {
        if (n % i == 0) {
            di.push_back(i);
            if (i != n / i) {
                di.push_back(n / i);
            }
        }
        i++;
    }
    return di;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,n,p;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool test=true;
        cin>>n;
        if (bd(n)==1) {
            cout<<"YES"<<endl;
        }
        else
        {
            while(n > 1) {
            p = 0;
        vector<long long> v = get_divisors(n);
        sort(v.begin(),v.end());
        v.erase(v.begin());
        reverse(v.begin(), v.end());
        for(long i=0;i<v.size();i++) {
            if (bd(v[i])==1) {
                n /= v[i];
                p = 1;
                break;
            }
        }
        if (p == 0) {
            cout<<"NO"<<endl;
            test=false;
            break;
        }
    }
    if(test)
        cout<<"YES"<<endl;
    }
    }
    return 0;
}
//accepted