#include<iostream>
using namespace std;
int main()
{
	int arr[50], size, i, j, temp;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now the Reverse of the Array is : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
