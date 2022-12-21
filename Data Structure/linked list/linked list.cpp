#include <iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	node* next;
};
node* head = NULL;

void insertNode(int value);
void display();
void insertBeg(int value);
void deleteBeg();
void deleteEnd();
int count();
void InsertAtPos(int item, int pos);
void DeleteAtPos(int pos);
int main()
{
	
	int x;
	cout << " * **Menu for linked list operations ***\n"
		<<"1.Insert Front\n"
		<<"2.Insert End\n"
		<<"3.Delete Front\n"
		<<"4.Delete End\n"
		<<"5.Display\n"
		<<"6.Node Count\n"
		<<"7.Insert To Position \n"
		<<"8.Delete From Position\n"
		<<"9.Clear Screen\n"
		<<"10.Exit\n";
	
	while (1) {
		cin >> x;
		if (x == 1) {
			int item;
			cout << "what do you want to insert?\n";
			cin >> item;
			insertBeg(item);
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 2) {
			int item;
			cout << "what do you want to insert?\n";
			cin >> item;
			insertNode(item);
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 3) {
			deleteBeg();
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 4) {
			deleteEnd(); 
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 5) {
			display();
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 6) {
			count();
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 7) {
			int p,n;
			cout << "Enter the value you want to insert:\n";
			cin >> n;
			cout << "enter position you want to insert into:\n";
			cin >> p;
			InsertAtPos(n, p);
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 8) {
			int p;
			cout << "enter position you want to delete from:\n";
			cin >> p;
			DeleteAtPos(p);
			cout << "Done Choose Something Else:\n";
		}
		else if (x == 9) {
			system("CLS");
		}
		else if (x == 10) {
			break;
		}
		else {
			cout << "choose another number:\n";
		}

	}

}
void insertNode(int value) {
	node* newNode, * last;
	newNode = new node;
	newNode->data = value;
	if (head == NULL) {
		head = newNode;
		newNode->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = newNode;
		newNode->next = NULL;
	}
}
void display() {
	node* currentNode;
	if (head == NULL) {
		cout << "linked list is empty\n";

	}
	else {
		currentNode = head;
		while (currentNode != NULL) {
			cout << currentNode->data << "\t";
			currentNode = currentNode->next;
		}
	}
	cout << endl;
}
void insertBeg(int value) {
	node* new_node = new node;
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}
void deleteBeg() {
	if (head == NULL) {
		cout << "linked list is empty.\n";
	}
	else {
		node* first_node = head;
		head = first_node->next;
		delete(first_node);
	}
}
void deleteEnd() {
	if (head == NULL) {
		cout << "linked list is empty.\n";
	}
	else if (head->next == NULL) {
		delete(head);
		head = NULL;
	}
	else {
		node* ptr = head;
		while (ptr->next->next != NULL) {
			ptr = ptr->next;
		}
		delete(ptr->next);
		ptr->next = NULL;
	}
}
int count() {
	int counter = 0;
	if (head == NULL) {
		cout << "linked list is empty.\n";
	}
	else {
		node* n = head;
		while (n != NULL) {
			counter++;
			n = n->next;
		}
	}
	cout << "number of nodes = " << counter << endl;
	return counter;
}
void InsertAtPos(int item, int pos) {
	if (pos == 1)
		insertBeg(item);
	else if (pos > 1 && pos <= count()) {
		node* n = new node;
		n->data = item;
		n->next = NULL;
		node *t, * p;
		t = head;
		p = t;
		int i = 1;
		while (i < pos) {
			p = t;
			t = t->next;
			i++;
		}
		p->next = n;
		t = t->next;

	}
	else
		cout << "invalid position \n";
}
void DeleteAtPos(int pos) {

	if (pos == 1)
		deleteBeg();
	else if (pos > 1 && pos <= count()) {
		node* t, * p;
		t = head;
		p = t;
		int i = 1;
		while (i < pos) {
			p = t;
			t = t->next;
			i++;
		}
		cout << "data at deleted node is " << t->data << endl;
		p->next = t->next;
		delete t;


	}
	else
		cout << "invalid position\n";
}
