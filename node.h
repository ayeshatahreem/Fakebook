#ifndef NODE_H
#define NODE_H

#include"user.h"

class node
{

private:
	int data;
	user *puser;
	node *next;

public:
	node();
	void setData(int);
	void setNext(node *);
	int getData();
	node *getNext();
	void set_user(user *a);
	user *get_user();
	~node();

};


#endif