#include <iostream>
using namespace std;

int main()
{
	int user;
	
	char t1[15]="Discrete Maths", t2[15]="OOPS", t3[15]="EVS", t4[20]="Operating System", t5[10]="DBMS", t6[10]="Semenar";
	char a1[15]= "Chanda maam", a2[10]= "Rahul sir", a3[15]= "Shivom sir", a4[15]= "Himanshi maam", a5[15]= "Monica maam", a6[15]= "Sunidhi maam";
    int id1= 201, id2= 202, id3= 203, id4 = 204, id5 = 205, id6 = 206;
	int p1=199, p2=299, p3=399, p4=499, p5=599, p6=699; 
	
	cout<<"\tTo find Book via Book_id select '1' select '0' to Add some more books : select '2' for display the Libreary :"<<endl;
	cout<<"Enter Your Choice : ";
	cin>>user;
	
	if(user == 1)
	{
		int search(int );
	}
	else if(user == 2)
	{
//		display();
	}
	else if(user = 0)
	{
//		add();
	}
	else
	{
		cout<<"Invalid input !";
	}
	
	int id;
	cout<<"Enter the Book id : ";
	cin>>id;
	if(id==201)
	{
		cout<<"\n\n\tAuther : Chanda Maam"<<endl;
		cout<<"\tTitle : Discrete Maths"<<endl;
		cout<<"\tBook_id : 201"<<endl;
		cout<<"\tPrice : 199"<<endl;
	}
	else if(id==202)
	{
		cout<<"\n\n\tAuther : Rahul sir"<<endl;
		cout<<"\tTitle : OOP'S"<<endl;
		cout<<"\tBook_id : 202"<<endl;
		cout<<"\tPrice : 299"<<endl;
	}
	else if(id==203)
	{
		cout<<"\n\n\tAuther : ShivOm sir"<<endl;
		cout<<"\tTitle : EVS"<<endl;
		cout<<"\tBook_id : 203"<<endl;
		cout<<"\tPrice : 399"<<endl;
	}
	else if(id==204)
	{
		cout<<"\n\n\tAuther : Himanshi Agrawal"<<endl;
		cout<<"\tTitle : Operating System"<<endl;
		cout<<"\tBook_id : 204"<<endl;
		cout<<"\tPrice : 499"<<endl;
	}
	else if(id==205)
	{
		cout<<"\n\n\tAuther : Monica Maam"<<endl;
		cout<<"\tTitle : DBMS"<<endl;
		cout<<"\tBook_id : 205"<<endl;
		cout<<"\tPrice : 599"<<endl;
	}
	else if(id==206)
	{
		cout<<"\n\n\tAuther : Sunidhi maam"<<endl;
		cout<<"\tTitle : Semenar"<<endl;
		cout<<"\tBook_id : 206"<<endl;
		cout<<"\tPrice : 699"<<endl;
	}
	else
	cout<<"Invalid Input !";
	
return 0;
}
