#include <iostream>
#include <stack>
//  uses LIFO Last In First Out
using namespace std;

//uses top
void printStack(stack <int> input)
{
    while (!input.empty())
    {
        cout<<input.top()<<endl;
        input.pop();
    }
        
}
int main()
{
    stack <int> numbersStack;
    //common fuctions
    //push,pop,empty,size,top
    
    //push
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    //pop
    numbersStack.pop();

  /*  if (numbersStack.empty())// use of empty
    {
        cout << "Stack is empty" << endl;
        cout << "Stack size is: "<<numbersStack.size() << endl;//use of size
    }
    else
    {
        cout << "Stack is not empty";
    }*/
    printStack(numbersStack);
}
