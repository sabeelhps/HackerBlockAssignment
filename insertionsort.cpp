#include<iostream>
using namespace std;
int main()
{
	long long int size, arr[50], i, j, temp;
	cin>>size;
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<endl;
	}
    cout<<endl;
	return 0;
}