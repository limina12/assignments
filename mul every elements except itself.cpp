#include <iostream>
using namespace std;

int main() {
	int n,i,product=1;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    product=product*a[i];
	}
	for(i=0;i<n;i++)
	{
	b[i]=(product/a[i]);
	cout<<b[i]<<" ";
	}return 0;
}
