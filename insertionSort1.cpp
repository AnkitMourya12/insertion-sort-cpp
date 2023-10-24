#include<iostream>
using namespace std;

int main()
{
	int i,j,k,N;
	cout<<"enter the size of array:"<<endl;
	cin>>N;
	int a[N];
	cout<<"enter the 5 element of array:"<<endl;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	cout<<"after sorting^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;;
	
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
