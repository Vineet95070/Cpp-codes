#include <iostream>
#include <string>
using namespace std;

class first
{
	int book_no;
	string book_name;
	
	public :
		getdata()
		{
			cout<<"Enert the Book Name : ";
            getline(cin, book_name);
			cout<<"Enter the Book Number : ";
			cin>>book_no;
		}
		public :
			
		putdata()
		{
			cout<<"\n\tName : "<<book_name<<endl;
			cout<<"\tBook No : "<<book_no<<endl;
		}
};

class second
{
	char auther[10], publisher[10];
	
	public :
		getname()
		{
			cout<<"Enter the Auther Name : ";
			cin>>auther;
			cout<<"Enter the Publisher Name : ";
			cin>>publisher;
		}
		
	public :
	   showdata()
	   {
	        cout<<"\tAuther Name : "<<auther<<endl;
			cout<<"\tPublisher : "<<publisher<<endl;	
	   }	
		
};
class third
{
	int year, pgs;
	public :
		get()
		{
			cout<<"Enter the Number of Pages : ";
			cin>>pgs;
			cout<<"Enter the Year of Publising : ";
			cin>>year;
		}
	public :
	    put()
		{
			cout<<"\tNumber of Pages : "<<pgs<<endl;
			cout<<"\tPublished in : "<<year<<endl;OOOO
		}	
};

int main()
{
	
	first b1[2];
	second  b2[2];
	third b3[2];
	
	for(int i=1; i<=1; i++)
	{
		b1[i].getdata();
		b2[i].getname();
		b3[i].get();
	}
	for(int i=1; i<=1; i++)
	{
		b1[i].putdata();
		b2[i].showdata();
		b3[i].put();
	}	
return 0;	
}
