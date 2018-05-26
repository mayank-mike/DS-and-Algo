#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	
	string x,y;
	cin>>x>>y;
	int m=x.length(),n=y.length();
	
	int lcs[m+1][n+1];
	lcs[m][n]=0;
	ford(i,0,m+1) lcs[i][n]=0;
	ford(i,0,n+1) lcs[m][i]=0;
	
	for(int i=m-1;i>=0;i--)
		for(int j=n-1;j>=0;j--)
		{
			if(x[i]==y[j])
				lcs[i][j]=1+lcs[i+1][j+1];
			else
				lcs[i][j]=max (lcs[i+1][j],lcs[i][j+1]);
		}
		
	ford(i,0,m+1)
	{
		ford(j,0,n+1)
			cout<<lcs[i][j]<<' ';
			
		cout<<endl;
	}	
		
	cout<<lcs[0][0];
	
	return 0;
}

