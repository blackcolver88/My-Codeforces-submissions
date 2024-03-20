/*Problem link :
https://codeforces.com/problemset/problem/1714/C
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        int n;
    cin>>n;
    if(n>45)
        cout<<-1<<endl;
    else
    {
        if(n<10)
            cout<<n<<endl;
        else
        {
            int m=9,k;
            k=n-10;
            if(0<=k && k<=7)
                cout<<m+10*(k+1)<<endl;
            else
            {
                k=n-18;
                if(0<=k&& k<=6)
                    cout<<m+(m-1)*10+(k+1)*100<<endl;
                else
                {
                    k=n-25;
                    if(0<=k && k<=5)
                        cout<<m+(m-1)*10+(m-2)*100+(k+1)*1000<<endl;
                    else
                    {
                       k=n-31;
                       if(0<=k&& k<=4)
                            cout<<m+(m-1)*10+(m-2)*100+(m-3)*1000+(k+1)*10000<<endl;
                       else
                       {
                        k=n-36;
                        if(0<=k&& k<=3)
                            cout<<m+(m-1)*10+(m-2)*100+(m-3)*1000+(m-4)*10000+(k+1)*100000<<endl;
                        else
                        {
                         k=n-40;
                         if(0<=k&& k<=2)
                            cout<<m+(m-1)*10+(m-2)*100+(m-3)*1000+(m-4)*10000+(m-5)*100000+(k+1)*1000000<<endl;
                         else
                         {
                            k=n-43;
                            if(0<=k && k<=1)
                                cout<<m+(m-1)*10+(m-2)*100+(m-3)*1000+(m-4)*10000+(m-5)*100000+(m-6)*1000000+(k+1)*10000000<<endl;
                            else
                                cout<<123456789<<endl;
                         }
                        }
                       } 
                    }
                }
            }

        }
    }
    }
    return 0;
}
//accepted