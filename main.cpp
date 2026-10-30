#include<iostream>
#include"clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue: \n";
	MyQueue.Print();

	cout << "\nQueue size: " << MyQueue.Size();
	cout << "\nQueue front: " << MyQueue.front();
	cout << "\nQueue back: " << MyQueue.back();

	MyQueue.pop();

	cout << "\nQueue after pop: \n";
	MyQueue.Print();
}