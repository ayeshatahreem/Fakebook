#include <iostream>
#include "fakebook.h"
#include "user.h"
#include <fstream>
using namespace std;

fakebook::fakebook()
{


}

void fakebook::input()
{
	
	cout<<"Enter the number of users as given in your file"<<endl;
	cin>>num;
}

int fakebook::returnNum()
{
	return num;
}

void fakebook::loadUsers()
{
	ifstream fin;
	fin.open("allusers.txt");
	while(!fin.eof())
	{
		int id;
		cout<<"Enter ID Number of your users: ";
		cin>>id;
		cout<<endl;
		allusers.Insert(id);

		char temp;
		char arr[10];
		char city[10];
		fin>>temp;
		int i=0;
		for( ;temp!='#';i++)
		{
			arr[i]=temp;
			fin>>temp;
		}

		arr[i]='\0';
		fin>>temp;
		int k=0;
		for( ;temp!='#';k++)
		{
			city[k]=temp;
			fin>>temp;
		}
		city[k]='\0';

		fin>>temp;
		char gender;
		gender=temp;
		fin>>temp;
		fin>>temp;
		fin>>temp;

		user obj(1,arr,city,gender,9);

		obj.OutputID();
		obj.OutputName();
		obj.Outputlocation();
		obj.OutputGender();
		obj.OutputAge();
	
	}
	fin.close();
}	 

fakebook::~fakebook()
{

}