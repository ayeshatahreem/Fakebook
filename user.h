#ifndef USER_H
#define USER_H

#include <iostream>
//#include <string>
#include <fstream>

using namespace std;

class user
{
private:
	char name[10];
	int id;                                    //this is the id shown in the picture 
	char gender;
	int age;
	char location[10];                         // string location

public:
	user()
	{


	}

	user(int ID,char arr1[10],char arr2[10],char GENDER,int AGE)
	{
		for(int i=0;i<10;i++)
		{
			name[i]=arr1[i];
			location[i]=arr2[i];
		}
		id=ID;
		age=AGE;
		gender=GENDER;
	}

	void OutputName()
	{
		cout<<"Name: "<<name<<endl;
	}

	void Outputlocation()
	{
		cout<<"Location: "<<location<<endl;
	}

	void OutputAge()
	{
		cout<<"Age: "<<age<<endl;
	}

	void OutputGender()
	{
		cout<<"Gender: "<<gender<<endl;
	}

	void OutputID()
	{
		cout<<"ID: "<<id<<endl;
	}

	~user()
	{


	}
};
#endif