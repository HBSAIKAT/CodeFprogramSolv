#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;

    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];

    }
    int max=p[0];
    int min=p[0];
    for(int i=0;i<n;i++)
    {
         if(p[i]>max)
         {
             max=p[i];
             cnt++;
         }
      if(p[i]<min)
      {
          min=p[i];
          cnt++;
      }
    }
    cout<<cnt;

    return 0;
}
