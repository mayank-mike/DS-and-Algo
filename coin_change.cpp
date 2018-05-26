#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)
int n,a[100000],target;

int dp(int target)
{
	if(target<0) return 10000000;
	if(target==0)	
	{  
		return 0;
	}
	
	int best=INT_MAX;
	for(int i=0;i<n;i++)
	{
		best=min(best,dp(target-a[i])+1);
	}
	
	return best;
	
}

int main(int argc, char **argv)
{
	//ios_base::sync_with_stdio(false); cin.tie(0);

	cout<<"enter number type of change :\n";
	cin>>n;
	cout<<"enter the denomination of coin :\n";
	ford(i,0,n) cin>>a[i];
	
	cout<<"enter the denomination for the change :\n";
	cin>>target;
	
	cout<<"best : "<<dp(target);
	
	return 0;
}

