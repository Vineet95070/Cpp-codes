#include <iostream>
using namespace std;

void swap(int x, int y);

int main(){
	
	int a, b;
	cout<<"Enter the Value or 'a' and 'b' : ";
	cin>>a>>b;
	
	cout<<"a = "<<a<<"\nb = "<<b<<endl;
	
	swap(a, b);
	
return 0;	
}

void swap(int x, int y)
{
	int tmp=x;
	x=y;
	y=tmp;
	
	cout<<"a = "<<x<<"\nb = "<<y;
}
