#include<iostream> 
using namespace std;

int main()
{
	int n,c;
	cout<<"Enter the length of an array:";
	cin>>n;
	cout<<"Enter the element to compare:";
	cin>>c;
	int arr[n];
	cout<<"Enter the array Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int greater=0,lesser=0,same=0;
    for(int i=0;i<n;i++)
    {
    	if(arr[i]<c)
    	lesser++;
    	else if(arr[i]>c)
    	greater++;
    	else
    	same++;
	}
	int g=greater;
	int l=lesser;
	int s=same;
if(g==l)
{
	cout<<"Array length:"<<g+l+same;
}
else
{
for(int k=1;k<=n;k++)    //for window size
	{
	   for(int i=0;i<n-k+1;i++)   //1-2 2-3 single increament
	  {  
		for(int j=i;j<i+k;j++)   //for printing the subarray
		{
			if(arr[j+i]<c)
			{  
				l--;
			}
			else if(arr[j+i]>c)
			{
				g--;
			}
			else  
			{ 
				continue;
			}
		}
		if(l==g)
			{ 
			 	cout<<"Subarray length:"<<l+g+same;
				break;
			}
	   g=greater;
       l=lesser;
	   }
	   if(l==g)
	  {
	  	break;
	  }
    }	
}	
}
