#ifndef MYFIRST_HPP 
#define MYFIRST_HPP 
#include<iostream>
#include<stdio.h>
using namespace std;
template<typename T>
class Stack
{
public:
	Stack(int stackcapacity=10);
    ~Stack();
	bool IsEmpty() const;
	T& Top() const;
	void Push(const T& item);
	void Pop();
    void ShowData();
private:
	T* stack;
	int top;
	int capacity;
    int number;
};
#endif // MYFIRST_HPP
