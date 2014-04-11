#include"stack.h"
#include<algorithm>
using namespace std;

template<typename T>
Stack<T>::Stack(int stackcapacity):capacity(stackcapacity),number(0)
{
    if(capacity<1) throw "stack capacity error";
    stack=new T[capacity];
    top=-1;
    cout << "capacity="<<capacity<<endl;
}

template<typename T>
Stack<T>::~Stack()
{
    delete []stack;
}

template<typename T>
inline bool Stack<T>::IsEmpty() const
{
    return top==-1;
}

template<typename T>
inline T& Stack<T>::Top() const
{
    if(IsEmpty())   throw "stack is empty";
    return stack[Top];
}

template<typename T>
void Stack<T>::Push (const T& x)
{
    if (top==capacity-1)
    {
        ChangeSize1D(stack,capacity,2*capacity);
        capacity*=2;
    }
    number++;
    stack[++top]=x;
    cout <<"stack[top]="<< stack[top]<<endl;
}

template<typename T>
void ChangeSize1D(T*  &a, const int oldsize,const int newsize)
{
    if (newsize < 1) throw "newsize error";
    T* temp = new T[newsize];
    int number = min(oldsize,newsize);
    copy(a,a+number,temp);
    delete [] a;
    a = temp;
}


template<typename T>
void Stack<T>::Pop()
{
    if(IsEmpty()) throw "Stack is empty";
    stack[top--].~T();
    number--;
}


template<typename T>
void Stack<T>::ShowData()
{
    for(int i = 0;i<number;i++ )
    {
       cout<<stack[i]<<endl;
    }
}




