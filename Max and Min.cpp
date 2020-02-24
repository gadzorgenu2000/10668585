#include <stdio.h>  
#include <stdlib.h> 

void MaxMin(int a[], int low , int high, int max , int min){
	
	 int mid,max1,max2,min1,min2;  
	 if(high-low == 1)  { 
	 	if(a[low] > a[high])  {
		   max = a[low];  
		   min = a[high];  
		} else  {  
			max = a[high]; 
		    min = a[low];  
			} 
	   }  else if(low == high)  { 
	   		 min = max = a[low];  
		}  else if(low<high)  {
			 mid=(low+high)/2;  
			 MaxMin(a,low,mid,max1,min1);
			 MaxMin(a,mid+1,high,max2,min2);
			 if(max1 > max2)  
			 max = max1; 
			else max = max2;
		   
		if(min1 < min2)  
			min = min1;
		 else  
			 min = min2;  
	  } 
}

int main()  { 
	int arr[20],n,i;
	int Max=0,Min=0;  
	cout<<"Enter size";
	cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	MaxMin(arr,0, n-1,Max,Min);  
	cout<<"Max Element = "<<Max<<"Min Element = "<< Min<<endl;
	 return 0;  

 
 } 
