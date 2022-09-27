#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=4;i<n;i++)
    {
        if(i%2==0 || i%3==0)
          y= n-i;
         if((y%2==0 || y%3==0) && (n==(i+y))){
            cout<<i<<" "<<y;
            break;
         }





}
  return 0;
}
