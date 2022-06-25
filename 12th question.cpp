#include <iostream>
#include <math.h>
using namespace std;

class calculate
{
	int rad, l, a, b, area_square;
	float area_circle, area_triangle;
	public :
		fun(int a)
		{
			cout<<"\n\n\tArea = "<<a*a<<endl;
		}
		
	public :
	    fun(int l, int b)
		{
			cout<<"\tArea of Rectangle is : "<<l*b<<endl;
		}	
		
	public :
	    fun(float r)
		{
			cout<<"\tArea of Circle is : "<<3.14*r*r<<endl;
		}	
		
	public :
	    fun(float b, int h)
		{
			cout<<"\tArea of Triangle is : "<<0.5*b*h;
		}	
		
};

int main(){
	
	float radius, base;
	int side, length, bredth, hight;
	cout<<"Enter the side's of Square : ";
	cin>>side;
	cout<<"Enter the side's of Rectangle : ";
	cin>>length>>bredth;
	cout<<"Enter the Radius of Circle : ";
	cin>>radius;
	cout<<"Enter the Bredth and Hight of Triangle : ";
	cin>>hight>>base;
	
	calculate a1;
	a1.fun(side);	
	a1.fun(length, bredth);
	a1.fun(radius);
	a1.fun(base , hight);
	
return 0;	
}
