#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,i;
    double avg,sum=0.0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;
    }
    avg=sum/n;
    cout<<avg<<endl;
    return 0;
}

