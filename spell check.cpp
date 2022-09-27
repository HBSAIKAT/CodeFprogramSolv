#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,l;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>l;
        cin>>s;
       if((l==5) && (s[0]=='T'||s[3]=='T'||s[4]=='T')&&(s[1]=='i'||s[4]=='i'||s[2]=='i')&&(s[0]=='m'||s[3]=='m'||s[2]=='m')&&(s[2]=='u'||s[3]=='u'||s[4]=='u')&&(s[4]=='r'||s[3]=='r'||s[1]=='r'))
        {
            cout<<"YES"<<"\n";
        }
      else
        cout<<"NO"<<"\n";

    }

    return 0;
}
