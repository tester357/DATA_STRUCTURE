#include<iostream>
using namespace std;
class vector {
public:
	int* arr = { nullptr };
	int size = 0;
	void set_size(int s) {
		size = s;
		arr = new int[size];
	}
	void set_value() {
		if (size <= 0)size = 1;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

	}
	void right_rotate() {
		int a = arr[size - 1];


		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}

		arr[0] = a;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}


	}
	void left_rotate() {
		int a = arr[0];

		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}

		arr[size - 1] = a;

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	void right_rotate_with_steps(int times)
	{
		times = times % size;
		for (int i = 0; i < times; i++)
		{
			int a = arr[size - 1];
			for (int j = size - 1; j > 0; --j)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = a;

		}
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	void pop(int index) {
		for (int i = 0; i < size; i++)
		{
			if (i != index)
			{
				cout << arr[i] << " ";
			}
			else
			{
				continue;
			}
		}
	}
	void find_transposition(int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				if (arr[i] == arr[0])
				{
					continue;
				}
				int a = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = a;


			}
			else {
				continue;
			}

		}
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	};
	


};
struct node {
	int data;
	node* next;
	node(int data) :data(data) {}


};
int main() {
	//vector v;
	//v.set_size(5);
	//v.set_value();
	////v.right_rotate_with_steps(2);
	////v.pop(2);
	//v.find_transposition(10);
			//create values
	
	node* node1 = new node(6);
	node* node2 = new node(8);
	node* node3 = new node(10);
	node* node4 = new node(15);
	//set
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next =  nullptr ;
	cout << node1->next->next->next->data<<"\n";
	cout << node2->next->next->data<<"\n";
	cout << node3->next->data << " \n";
	cout << node4->next->data << " \n";
}
