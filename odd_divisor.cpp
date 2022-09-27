#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,div;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
         if(n & 1){
            cout<<"YES"<<endl;
        }
        else{
            int flag=0;
             div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1){
                //cout<<div<<endl;
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
    }
    return 0;
}
