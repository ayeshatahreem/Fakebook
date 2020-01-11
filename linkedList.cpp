#include <iostream>
using namespace std;

class List 
{
private:
	struct Node
	{
		int data;
		Node *next;
		Node(const int _data, Node *_link)
		{
			data = _data;
			next = _link;
		}
	};
	int noofelements;
	Node *start;
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
	}
public:
	void DisplayList()
	{
		cout << "\nLIST :D\n";
		Node *point = start;
		for (int i = 0; i < noofelements; i++)
		{
			cout << point->data << endl;
			point = point->next;
		}
	}
List()
	{
		start = nullptr;
		noofelements = 0;
	}

	void Insert(const int& item)
	{

		if (noofelements == 0){
			Create(item);
			noofelements++;
		}
		else
		{
			Node *prev = preceedingNode(item);
			prev = new Node(item, prev);
			noofelements++;
		}
	}
};