#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)

int main(int argc, char **argv)
{
	
	string x,y;
	cin>>x>>y;
	int m=x.length(),n=y.length();
	
	int lcw[m+1][n+1];
	lcw[m][n]=0;
	ford(i,0,m+1) lcw[i][n]=0;
	ford(i,0,n+1) lcw[m][i]=0;
	
	
	int maxi=-1;
		
	
	for(int i=m-1;i>=0;i--)
		for(int j=n-1;j>=0;j--)
		{
			if(x[i]==y[j])
				lcw[i][j]=lcw[i+1][j+1]+1;
			else
				lcw[i][j]=0;
				
			maxi=max(maxi,lcw[i][j]);
		}

	ford(i,0,m+1)
	{
		ford(j,0,n+1)
			cout<<lcw[i][j]<<' ';
			
		cout<<endl;
	}
	
	
	cout<<maxi<<endl;
	
	return 0;
}

