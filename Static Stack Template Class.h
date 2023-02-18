#include <iostream>
using namespace std;

template <class T>

class Stack
{
private:
	T* stackArray;
	int capacity;
	int top;
public:
	Stack(int capacity); // The constructor.
	~Stack() { delete[] stackArray; } // The destructer.
	void push(T value); // To add a value.
	void pop(T& value); // Removes a value then returns it.
	bool isEmpty();
};

// Some static exceptions.
class Overflow {};
class Underflow {};

// Constructer...
template <class T>
Stack<T>::Stack(int capacity)
{
	this->capacity = capacity;
	stackArray = new T[capacity];
	top = 0;
}

// Add a value to the stack.
template <class T>
void Stack<T>::push(T value)
{
	//if (top == capacity) throw Stack<T>::Overflow();
	stackArray[top] = value;
	top++;
}

// Checking if stack is empty.
template <class T>
bool Stack<T>::isEmpty()
{
	if (top == 0)
		return true;
	else
		return false;
}

// Remove a value from the stack than return it.
template <class T>
void Stack<T>::pop(T& value)
{
	//if (isEmpty()) throw Stack<T>::Underflow();
	top--;
	value = stackArray[top];
}
