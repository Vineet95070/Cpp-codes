#include <iostream>
#include<cstring>
using namespace std;

int main()
{

	char string1[100], string2[100];
              cout << "Enter the first string: "<<endl;
	cin >> string1;
              cout << "\nEnter the second string: " << endl;
              cin >> string2;
              cout << "\nAre both strings same: ";
	if (strcmp(string1, string2) == 0)
	{
		cout << "Yes";
	}
	else {
		cout << "No";
	}
            return 0; }
