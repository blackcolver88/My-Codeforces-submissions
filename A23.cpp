/*Problem link :
https://codeforces.com/problemset/problem/405/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long n;
    vector<int> v,w;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    while(!(v.empty()))
    {
        auto min=min_element(v.begin(),v.end());
        w.push_back(*min);
        v.erase(min);
    }
    for (int num : w) 
            cout << num << " ";
        cout << endl;   
    
    return 0;
}
//accepted