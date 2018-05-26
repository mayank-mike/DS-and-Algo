#include <bits/stdc++.h>

#define ford(itr,start,end) for(int itr=start;itr<end;itr++)
#define forr(itr,start,end) for(int itr=start;itr>=end;itr--)
typedef long long ll;
using namespace std;

vector<int> a;

int paritition(int,int);
void quicksort(int,int);
void swap(int x,int y)
{
	
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}



int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	
	ford(i,0,n)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	
	quicksort(0,n);
	
	ford(i,0,n)
		cout<<a[i]<<'\t';
		
	cout<<endl;
	
	return 0;
}

int paritition(int p,int r)
{
	int x=a[r-1];
	int i=p-1;
	ford(j,p,r-1)
	{
		if(a[j]<=x)
		{
			i=i+1;
			swap(i,j);
		}
	}
	swap(i+1,r-1);
	return i+1;
	
}

void quicksort(int p,int r)
{
	if(p<r)
	{
		int q=paritition(p,r);
		quicksort(p,q-1);
		quicksort(q+1,r);
	}
}

