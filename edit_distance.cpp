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
	
	int edit[m+1][n+1];
	edit[m][n]=0;
	for(int i=m-1;i>=0;i--) edit[i][n]=m-i;
	for(int i=n-1;i>=0;i--) edit[m][i]=n-i;
	
	for(int i=m-1;i>=0;i--)
		for(int j=n-1;j>=0;j--)
		{
			if(x[i]==y[j])	
				edit[i][j]=edit[i+1][j+1];
			else
				edit[i][j]=1+min(edit[i+1][j],min(edit[i+1][j+1],edit[i][j+1]));
			
		}
	
	
	ford(i,0,m+1)
	{
		ford(j,0,n+1)
			cout<<edit[i][j]<<' ';
			
		cout<<endl;
	}
	
	cout<<edit[0][0]<<endl;
	
	return 0;
}

