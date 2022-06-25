#include <iostream>
#include <string>
using namespace std;

class student
{
	string roll, name;
	public :
		get()
		{
			cout<<"Enter the Name : ";
            getline(cin, name);
    
            cout<<"Enter Roll : ";
            getline(cin, roll);
		}
		put()
		{
			cout<<"\n\tName : "<<name<<endl;
			cout<<"\tRoll No : "<<roll<<endl;
		}
	
};

class exam
{
    public :
	int marks, age, m1,m2, m3, m4, m5, m6, t;
	string name;
	float per, sgpa; 
	
	getmarks()
	{
	cout<<"\n\n\tEnter the Student End term marks out of '100' : "<<endl;
	   	    cout<<"\t201 - Discrete Maths : ";
	   	    cin>>m1;
	   	    cout<<"\t202 - Object Orienterd Programming in C++ : ";
	   	    cin>>m2;
	   	    cout<<"\t203 - EVS : ";
	   	    cin>>m3;
	   	    cout<<"\t204 - Operating System : ";
	   	    cin>>m4;
	   	    cout<<"\t205 - DBMS : ";
	   	    cin>>m5;
	   	    cout<<"\t206 - Seminar : ";
	   	    cin>>m6;
	   	    
	   	    t = m1+m2+m3+m4+m5+m6;
	   	    per = (m1+m2+m3+m4+m5+m6)/6;
        	sgpa = per/10;
        	
	   	    cout<<"t = "<<t<<endl;
	        cout<<"\n\n\n\tPercentage : "<<per<<"%"<<endl;
	        cout<<"\tSGPA : "<<sgpa;
    }
};

class result:public exam
{
	public:
	result()
	{	
        	
//	        cout<<"t = "<<t<<endl;
//	        cout<<"\n\n\n\tPercentage : "<<per<<"%"<<endl;
//	        cout<<"\tSGPA : "<<sgpa;
    }
};

int main(){
	
	student s1;
	exam s2;
	s1.get();
	s1.put();
	s2.getmarks();
	result s3;
return 0;	
}
