#include <iostream>
using namespace std;
class taxx
{
	float tax, am, per;
	
	public :
		
		taxx()
		{
			cout<<"Enter the Amount in rs : ";
			cin>>am;
			
			if(am<10000)
			{
				per = 5;
			}
			else if(am>10000 && am<100000)
			{
				per = 8;
			}
			else if(am>100000)
			{
				per = 8.5;
			}
		
		tax = am*per/100;
		cout<<"\n\tTax : "<<tax<<"rs";
		
		}
	
	
};

int main()
{
	taxx a1;
}
