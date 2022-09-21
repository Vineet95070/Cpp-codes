#include <iostream>
using namespace std;
int main(){
	
	int arr[5], rev[5], i, j=1;
	
	for(i=1; i<=5; i++)
	{
		cin>>arr[i];
	}
	for(i=5; i>=1; i--)
	{
		rev[j] = arr[i];
		
		j++;
	}
		
		for(j=1; j<=5; j++)
	{
		cout<<" "<<rev[j]<<endl;
	}
	

	
return 0;	
}
