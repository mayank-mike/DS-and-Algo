#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)
int dp[100000001];
int p[11];
int k;
int rod_cut(int n)
{
	cout<<n<<endl;
	if(n==0)
		return 0;
	else if(dp[n])
		return dp[n];
	int ans=-1;
	for(int i=1;i<=n;i++)
		ans=max(ans,p[i]+rod_cut(n-i));
	dp[n]=ans;
	return ans;
}

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	p[1]=1,
	p[2]=5,
	p[3]=8,
	p[4]=9,
	p[5]=10,
	p[6]=17,
	p[7]=17,
	p[8]=20,
	p[9]=24,
	p[10]=30;
	
	int n;
	cin>>n;	
	cout<<endl<<rod_cut(n)<<endl;

	return 0;
}

