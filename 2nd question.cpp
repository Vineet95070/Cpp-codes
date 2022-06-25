#include <iostream>
using namespace std;

class pattern
{
	
	int n;
	
	public :
		
		Number()
		{
	        cout<<"Enter the Coloums of Pyramid : ";
	        cin>>n;
	
	        for(int i=1; i<=n; i++)
	        {
		        for(int j=1; j<=n; j++)
		        {
			       if(i>=j)
			      {
				    cout<<""<<j;
			      }
		        }
	            cout<<endl;
	        }
	
		}
		
		public :
			
			star()
			{
				cout<<"\n\n\n";
				
				for(int i=1; i<=n; i++)
            	{
            		for(int j=1; j<=2*n-1; j++)
		
	                	if(j>=n-(i-1) && j<=n+(i-1))
	                 	{
		                	cout<<"*";
	                	}
	                	else 
	                	{
	                 		cout<<" ";
                 		}
	
                    	cout<<endl;
               	}
		    }
	
};

int main()
{
	pattern p1;
	p1.Number();
	p1.star();
	
return 0;	
}
