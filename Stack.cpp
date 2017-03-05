#include <iostream>

using namespace std;

class Stack {
	class Node {
	public:
		int data; 
		Node *next; 
	
		Node(int d) {
			data = d; 
			next = NULL; 
		}
	};

public:
	Node *top; 

	Stack() {
		top = NULL; 
	}

	bool isEmpty(); 
	void push(int d); 
	int pop(); 
	int peek();
};

bool Stack::isEmpty() {
	if (top == NULL)
		return true;
}

void Stack::push(int d) {
	Node *newNode = new Node(d); 

	if (top == NULL) {
		top = newNode; 
	}
	else {
		newNode->next = top; 
		top = newNode; 
	}
}

int Stack::pop() {
	if (top == NULL)
		return -1;
	else {
		int data = top->data;
		top = top->next; 
		return data;
	}
}

int Stack::peek() {
	if (top == NULL)
		return -1; 
	else
		return top->data; 
}

int main() {
	Stack *ourStack = new Stack(); 

	if (ourStack->isEmpty())
		cout << "Stack is Empty" << endl; 

	ourStack->push(1); 
	ourStack->push(2);
	ourStack->push(3);

	std::cout << "Top of our Stack = " << ourStack->peek() << std::endl; 
	ourStack->pop();

	std::cout << "Top of our Stack = " << ourStack->peek() << std::endl; 
	ourStack->pop();

	std::cout << "Top of our Stack = " << ourStack->peek() << std::endl; 
	ourStack->pop();

	std::cout << "Top of our Stack = " << ourStack->peek() << std::endl; 

	return 0;
}