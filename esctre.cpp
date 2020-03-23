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
int solve()
{
	int h;
	cin >> h;
	int u, a;
	//find random leaf
	cout << "2 1 " << h << endl;
	cin >> u;
	for(int i=0;i<h; ++i) 
	{
		//repeat process to decrease distance
		cout<<"1 "<<u<<endl;
		cin>>a;
		cout<<"2 "<<u<<" "<<a<<endl;
		cin >> u;
	}
	//rprint answer
	cout<<"3 "<<u<<endl;
	cin>>a;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
