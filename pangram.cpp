#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());
      for(int i=0;i<n;i++)
    {
       if(s[i]!=s[i+1])
        cnt++;
    }
    if(cnt == 26)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
