#pragma once
#include"clsDblLinkedList.h"

template<class T>

class clsMyQueue
{
private:
	clsDblLinkedList <T> _MyList;

public:

	void push(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		int pos = _MyList.Size() - 1;
		return _MyList.GetItem(pos);
	}

	void Print()
	{
		_MyList.PrintList();
	}
};

