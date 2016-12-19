/*********************************************************************

** Author: Mike Peters

** Date: 11/05/2015

** Description: List class declarations

*********************************************************************/
#include <iostream>
using namespace std;

class List
{
	protected:
		struct Node
		{
			int number;
			Node *next;
			Node(int number1, Node *next1 = NULL)
			{
				number = number1;
				next = next1;
			}
		};
		Node *head;
	public:
		List(){ head = NULL; }
		~List();
		void add(int add);
		int remove();
		void display();
		int mainStack();
};


