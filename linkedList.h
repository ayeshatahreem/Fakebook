#ifndef List_H
#define List_H

#include <iostream>
#include "user.h"

using namespace std;

class List
{
private:
	struct Node
	{
		int data;
		Node *next;
		user *puser;
		Node()
		{
			next = nullptr;
		}
		Node(const int _data, Node *_next)
		{
			data = _data;
			next = _next;
		}
	};
	int noofelements;
	Node *start;
	Node *Tail;
	Node* preceedingNode(const int& item)
	{
		Node* curr = start, *prev = start;
		while (curr && curr->data < item)
		{
			prev = curr;
			curr = curr->next;
		}
		return prev;
	}
	bool isEmpty()
	{
		return(noofelements == 0);
	}
	void Create(const int& item)
	{
		Node *temp = new Node(item, nullptr);
		start = temp;
		Tail = temp;
	}

public:
	void DisplayList()
	{
		cout << "\n\tOUTPUT LIST :D\n";
		Node *point = start;
		for (int i = 0; i < noofelements; i++)
		{
			cout << point->data << endl;
			point = point->next;
		}
	}

	List(List& obj)
	{
		if (obj.noofelements != 0)
		{
			Node* point = obj.start->next;
			this->start = nullptr;
			this->noofelements = obj.noofelements;
			this->start = new Node(obj.start->data, nullptr);
			Tail = start;
			Node* prev = this->start;
			for (int i = 0; i < this->noofelements - 1; i++)
			{
				Node* ptr = new Node(point->data, nullptr);
				prev->next = ptr;
				Tail = ptr;
				prev = ptr;
				point = point->next;
			}
		}
		else
		{
			start = nullptr;
			noofelements = 0;
			Tail = nullptr;
		}
	}

	void clearList()
	{
	
	}

	List()
	{
		start = nullptr;
		noofelements = 0;
		Tail = nullptr;
	}

	void Insert(const int& item)
	{
		Node *prev = preceedingNode(item);
		if (noofelements == 0)
		{
			Create(item);
		}
		else if (prev == start && item<start->data)
		{
			Node *temp = new Node(item, start);
			start = temp;
		}
		else
		{
			prev->next = new Node(item, prev->next);
		}
		if (prev == Tail)
		{
			Tail = Tail->next;
		}
		noofelements++;
	}
	void InsertAtFront(const int& item)
	{
		if (noofelements == 0)
		{
			Create(item);
		}
		else
		{
			Node* ptr = new Node(item, start);
			start = ptr;
		}
		noofelements++;
	}
	
};

#endif