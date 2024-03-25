/*Problem link :
https://codeforces.com/problemset/problem/598/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        
        long long sum = (n * (n + 1)) / 2;
        
        long long power_of_2 = 1;
        long long sum_of_powers_of_2 = 0;
        
        while (power_of_2 <= n) {
            sum_of_powers_of_2 += power_of_2;
            power_of_2 *= 2;
        }
        
        cout << sum - (2 * sum_of_powers_of_2) << endl;
    }
    return 0;
}
//accepted