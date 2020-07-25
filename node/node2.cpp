#include <iostream>
using namespace std;
class node
{
public:
	int value;
	node *next;
	node()
	{
		value = 0;
		next = NULL;
	}
};
int main()
{	
	node *head,*curr;
	head = new node();
	head->next = NULL;
	head->value = 15;
	for (size_t i = 0; i < 10; i++)
	{
		curr = new node();
		curr->value = i;
		curr->next = head;
		head = curr;
	}
	cout << head->value << endl;
}