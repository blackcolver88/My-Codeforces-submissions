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
    sort(v.begin(),v.end());
    for (int num : v) 
            cout << num << " ";
        cout << endl;   
    
    return 0;
}
//accepted