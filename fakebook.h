#ifndef FAKEBOOK_H
#define FAKEBOOK_H

#include <iostream>
#include "linkedList.h"
using namespace std;

class fakebook
{ 
private:
    int num;
    List allusers;             //head pointer of node type           
   // node **friendInfo ;      //an array of pointers to the heads of linked lists

public:
	fakebook();
	void input();
	int returnNum();
	void loadUsers();
	~fakebook();
};



#endif