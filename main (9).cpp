#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        ll t=n;
        cout<<t<<" ";
        }
        else{
            n=(n*1LL*3)+1;
            ll t=n;
            cout<<t<<" ";
        }
    }
    return 0;
}