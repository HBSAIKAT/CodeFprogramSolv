#include<bits/stdc++.h>

using namespace std;

int main()
{
  int A,B,gcd=1;
  cin>>A>>B;
  for(int i=1;i<=min(A,B);i++)
  {
      gcd*=i;
    }
    cout<<gcd<<endl;
    return 0;
}
