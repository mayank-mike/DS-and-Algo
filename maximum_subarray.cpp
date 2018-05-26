#include <bits/stdc++.h>

#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)
typedef long long ll;

using namespace std;

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	ford(i,0,n) cin>>a[i];
	
	//maximum subarray solution
	int best=0,sum=0;
	ford(i,0,n)
	{
		sum=max(a[i],sum+a[i]);
		best=max(best,sum);
	}
	cout<<"maximum subarray sum="<<best<<endl;
	return 0;
}

