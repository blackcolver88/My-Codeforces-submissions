/*Problem link :
https://codeforces.com/problemset/problem/337/A
*/
#include <iostream>
#include <string>
using namespace std;
void hello(int d) {
    for (int i = 0; i < 2 * d; ++i) {
        for (int j = 0; j < 2 * d; ++j) {
            if ((i / 2 + j / 2) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n;
        cin >> n;
        hello(n);
    }
    return 0;
}
//accepted