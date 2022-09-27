#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll a,b,diff,x,y,ans;
        cin>>a>>b;
         diff = abs(a-b);
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        x = a % diff;
        y = b % diff;
        if(x != y)
                cout<<0<<" "<<0<<endl;
        else{
            ans=min(diff-x,x);
            cout<<diff<<" "<<ans<<endl;
        }
    }
  return 0;
}

