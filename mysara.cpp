/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
ll power[35];
ll a[100005];
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<35;i++)
    {
        if(i==0)
        {
            power[i]=1;
        }
        else
        {
            power[i]= (power[i-1]*2)%MODM;
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll res=1,check=0;
        for(int i=1;i<n;i++)
        {
            if((a[i]&a[i-1])!=a[i-1])
            {
                check=1;
                i=n;
                break;
            }
            else
            {
                res=(res*power[__builtin_popcount(a[i-1])])%MODM;
            }
        }
        if(check==1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<res<<endl;
        }
    }
	return 0;
}
