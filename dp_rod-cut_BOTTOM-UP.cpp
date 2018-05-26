#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)
int r[10000001];
int p[11];

int rod_cut(int n)
{
	int count=0;
	ford(j,1,n+1){
		int ans=-1;
		ford(i,1,j+1){
			ans=max(ans,p[i]+r[j-i]);
			cout<<++count<<endl;
		}	
		r[j]=ans;
	}
	return r[n];
}

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	r[0]=0;
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

