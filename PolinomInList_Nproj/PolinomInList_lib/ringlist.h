#pragma once
 
#include <cstring>
#include <iostream>

using namespace std;

template <typename T>
class Monom {
	double cf;
	unsigned int abc;
};

template <typename T>
class Link {
public:
	T data;
	Link* pNext;
};

template <typename T>
class RingList {
private:
	Link<T> *head, *current;
public:
	RingList();
	RingList(const RingList<T> &l1);
	~RingList();
	void Reset() { current = head; }
	bool IsEnded();
	Link* GetNext() { current = current->pNext; }
	void InsertToTail(const T& d); // ������� � �����
	void Insert(const T& d); // ������� � ������������� ������
	void Sequencing(); // ��������������
	RingList Merge(const RingList<T> &l1); // ������� 2-�� ������� � 3-��
};