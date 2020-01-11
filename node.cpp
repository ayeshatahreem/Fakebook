#include <iostream>
#include "node.h"
#include "linkedList.h"

using namespace std;

node::node()
{
	data=0;
	next=nullptr;
	puser=nullptr;
}

void node::setData(int a)
{
	data=a;
}

int node::getData()
{
	return data;
}

void node::setNext(node *p)
{
	next=p;
}

node* node::getNext()
{
	return next;
}

user* node::get_user()
{
	return puser;
}

void node::set_user(user *a)
{
	puser=a;
}

node::~node()
{
	delete[] next;
	delete [] puser;
}
