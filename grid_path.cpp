#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	
	int a[n+1][m+1];
	ford(i,0,n+1) a[i][0]=1;
	ford(i,0,m+1) a[0][i]=1;
	
	ford(i,1,n+1)
		ford(j,1,m+1)
			a[i][j]=a[i-1][j]+a[i][j-1];
			
	cout<<a[n][m]; 
	
	
	return 0;
}

