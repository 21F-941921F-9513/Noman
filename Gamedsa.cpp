#include<iostream>
using namespace std;
class Queue
{
	struct QueueNode
	{
		int data;
		QueueNode* next;
	};
	QueueNode* front;
	QueueNode* rear;
	int count;
public:
	Queue()
	{
		front = NULL;
		rear = NULL;
    count=0;
	}
	bool isEmpty()
	{
		if (count == 0)              //true show that Queue is Full 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void Enqueue(char  d)
	{
		QueueNode* newnode = new QueueNode;
		newnode->data = d;
		newnode->next = NULL;
		if (isEmpty())
		{
			front = newnode;
			rear = newnode;
		}
		else
		{
			rear->next = newnode;
			rear = newnode;
		}
		count++;
    cout<<"The data of Node is "<<newnode->data<<endl;

	}
	void dequeue(char v )
	{
		QueueNode* temp;
		if (isEmpty())
		{
			cout << "Queue is Empty " << endl;
		}
		v = front->data;
		temp = front->next;
		delete temp;
		count--;
   cout<<"The data of front is "<<front->data<<endl;
	}
};
int main()
{
	Queue obj;
	obj.Enqueue('S');
	obj.Enqueue('S');
	obj.Enqueue('E');
	obj.Enqueue('E');
	obj.dequeue('S');
	obj.dequeue('E');

	system("pause");
}