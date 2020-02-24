#include<iostream>

using namespace std;

template <class T>
void Lsearch(T *a, T key, int n)
{

	for(int i=0;i<n;i++)
	{
		if(a[i]== key)
	{
		cout<<" Element found at index "<<(i)<<endl;
		return;
	}
	}
	cout<<" Element not Found";
}



int main()
{

	int arr[10],key,n;
	cout<<"Enter size of the array"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<(i+1)<<endl;
		cin>>arr[i];
	}	
	cout<<" Enter an element to be search: ";
	cin>>key;

	Lsearch(arr,key,10);

	return 0;
}
