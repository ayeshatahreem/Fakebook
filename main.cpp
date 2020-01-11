#include <iostream>
#include <fstream>

#include "user.h"
#include "linkedList.h"
#include "fakebook.h"

using namespace std;

void addFriend(int id1,int id2);
void removeFriend(int id1,int id2);
void deleteUser(int id);
void listAllfriends(string name);
void listAllMutualFriends(string name1, string name2);
void showThreeMostLikelyPeopleIknow(string name1); 
void printAllUsersBetweenAges(int agelow, int agehigh);
void printAllMalesBetweenAges(int agelow, int agehigh); 
void printAllFemalesBetweenAges(int agelow, int agehigh);

int main()
{
	fakebook fb;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"***********************WELCOME TO YOUR FAKEBOOK********************************"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	for(int i=1;i<=4;i++)
	{
		//fb.input();
		fb.loadUsers();
	}

	system("pause");
	return 0;
}


void addFriend(int id1,int id2)
{
	//it will take ids to two users and  make them friends of each other. 
}

void removeFriend(int id1,int id2)
{
	//it will take ids to two user and unfriend them. 
}

void deleteUser(int id)
{

	//it will delete the user with the given id from allusers, and also update the friendInfo structure. 
}

void listAllfriends(string name)
{
	//it will print the names of all the friends of the user with the given name

}

void listAllMutualFriends(string name1, string name2)
{
	// it will print all the mutual friends of the users with names name1 and name2. 
}

void showThreeMostLikelyPeopleIknow(string name1)
{
	//): it will print the names of three people who have the greatest number of mutual friends with the user with this name1, but who are not themselves friends of name1
}
void printAllUsersBetweenAges(int agelow, int agehigh)
{
	for(int i=0;i>=agelow && i<=agehigh;i++)
	{
		//prints the users between ages given in parameters. 
	}
}

void printAllMalesBetweenAges(int agelow, int agehigh)
{
	for(int i=0;i>=agelow && i<=agehigh;i++)
	{
		//prints the users between ages given in parameters. 
	}
}
void printAllFemalesBetweenAges(int agelow, int agehigh)
{
	for(int i=0;i>=agelow && i<=agehigh;i++)
	{
		//prints the users between ages given in parameters. 
	}

}