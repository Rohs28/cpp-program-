#include<iostream>
using namespace std;
int main()
{
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;


	if(age>=13 && age<=19)
	{
		cout<<"Person is a teenager\n";
	}
	else if(age>= 50)
	{
		cout<<"Person is a senior citizen\n";
		
	}
	else{ cout<<"Person is not a teenager\n";
	}

	if(age>=18)
	{
		cout<<"Personl is eligible for voting"<<endl;
	}
	else
	{
		cout<<"Person is not eligible for voting"<<endl;
	}

	return 0;
}
	
}
