#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin>>N;
	
	while(N--)
	{
		int n,r=0,sum=0;
		cin>>n;
		
		int a[n];
		for(int i =0 ; i < n ; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		int mn=a[0];
		
		for(int i =0 ; i < n ;i++)
		{
			mn=min(mn,a[i]);
		}
		
		r=sum-(mn*n);
		
		cout<<"solve:"<<r<<endl;
	}
	
}
