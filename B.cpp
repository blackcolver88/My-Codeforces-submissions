/*Problem link :
https://codeforces.com/problemset/problem/617/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long t;
  cin>>t;
  for(long long i=0;i<t;i++)
  {
    long long n,a=0;
    cin>>n;
    vector<long long> v;
    for(long long j=0;j<n;j++)
    {
        long long b;
        cin>>b;
        v.push_back(b);
    }
    for(long long j=0;j<n;j++)
    {
        if(v[j]<10 && v[j+1]<10 && v[j]>v[j+1] && j!=n-1)
        {
            cout<<"NO"<<endl;
            a=1;
            break;
        }
        else if(v[j]>10 && v[j+1]>10 && v[j]>v[j+1] && j!=n-1)
        {
            cout<<"NO"<<endl;
            a=1;
            break;
        }
        else
        {
            if(j==0 &&v[j]>10 && v[j+1]<10 && v.size()!=1)
            {
                if((v[j]%10)>v[j+1])
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
            }
            else if(j==n-1 && v[j]>10 && v[j-1]<10 && v.size()!=1)
            {
                if((v[j]/10)<v[j-1])
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
            }
            else if(j>=1 && v[j]>10 && v[j+1]<10 && j!=n-1)
            {
                if((v[j+1]<10 && (v[j]%10)>v[j+1]))
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
                else if((v[j+1]<10 && (v[j]%10)<v[j+1]))
                {
                    for(long long k=j-1;k>=0;k--)
                    {
                        if(v[k]<10)
                        {
                            if((v[j]/10)<v[k])
                            {
                                a=1;
                                cout<<"NO"<<endl;
                                break;
                            }
                        }
                        else if(v[k]>10)
                        {
                           if((v[j]/10)<(v[k]%10))
                            {
                                a=1;
                                cout<<"NO"<<endl;
                                break;
                            } 
                        }
                    }
                }
            }
        }
    }
    if(a==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a==1)
    {
        a=0;
    }
  }
  return 0;
}
//accepted