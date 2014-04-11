#include "stack.h"
#include "stack.cpp"
#include <iostream>
using namespace std;

int main()
{
    Stack<int> stack(11);
    stack.Push(13);
    stack.ShowData();
    return 0;
}
