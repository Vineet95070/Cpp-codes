#include <iostream>
#include <string>
using namespace std;

class student 
{
	string name, roll;
	int m1, m2, m3, max, min, obt;
	
	public : 
	    get()
	    {
	   	    cout<<"Enter the Name : ";
	   	    getline(cin, name);
	   	    cout<<"Enter the Roll_No : ";
	   	    getline(cin, roll);
	   	    cout<<"\nEnte the Marks :";
	   	    cout<<"201 : ";
	   	    cin>>m1;
	   	    cout<<"202 : ";
	   	    cin>>m2;
	   	    cout<<"203 : ";
	   	    cin>>m3;
	    }
	    check()
	    {
	    	if(m1>m2 && m1>m3)
	    	{
	    		cout<<"201 Have maximum marks :";
			}
			else if(m2>m1 && m2>m3)
			{
				cout<<"202 have grater marks :";
			}
			else
			{
				cout<<"203 Have maximum marks :";
			}
		}
	    
};

int main(){
	
	student s1;
	s1.get();
	s1.check();
	
return 0;	
}
