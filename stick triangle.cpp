#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve(ll j)
{
    ll n, cnt=0;
    cin >> n;
    ll a[n];
    for(ll i=1; i<=n; i++)
        a[i-1]=i;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            for(ll k= j+1; k<n; k++)
            {
                if((a[i]+a[j]>=a[k] || a[i]+a[k]>=a[j] || a[k]+a[j]>=a[i]) || (a[i]+a[j]+a[k])==n)
                    cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
int main()
{
    fast;
    ll t;
    cin >> t;
    for(ll j=1; j<=t; j++)
        solve(j);
}
