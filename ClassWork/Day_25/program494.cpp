///////////////////////////////////////////////////////////////////////////////////
//      Final code of Stack using Genric Approach
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class Stacknode
{
    public:
        T data;
        Stacknode<T> *next;

        Stacknode(T no)
        {
            this -> data = no;
            this -> next = NULL;
        }
};

template <class T>
class Stack
{
    private :
        Stacknode<T> *frist;
        int iCount;
    
    public :
        Stack();

        void push(T);
        T pop();
        T peep();
        void Display();
        int Count();
};

template <class T>
Stack<T> :: Stack()
{
    cout<<"Stack gets created Succesfully\n";
    this -> frist = NULL;
    this -> iCount = 0;
}

template <class T>
void Stack<T> :: push(T no)
{
    Stacknode<T> *newn = NULL;

    newn = new Stacknode<T>(no);
    
    newn -> next = this ->frist;
    this -> frist = newn;

    this -> iCount++;
}

template <class T>
T Stack<T> :: pop()
{
    T Value = 0;
    Stacknode<T> *temp = this -> frist;

    if (this -> frist == NULL)
    {
        cout<<"Stack is Empty \n";
        return -1;
    }

    Value = this -> frist -> data;
    
    this -> frist = this -> frist -> next;
    delete temp;

    this -> iCount--;

    return Value;
}

template <class T>
T Stack<T> :: peep()
{
    T Value = 0;

    if (this -> frist == NULL)
    {
        cout<<"Stack is Empty \n";
        return -1;
    }

    Value = this -> frist -> data; 
    return Value;
}

template <class T>
void Stack<T> :: Display()
{
    Stacknode<T> * temp = this -> frist;

    if (this -> frist == NULL)
    {
        cout<<"Stack Is Empty\n";
        return;
    }

    while (temp != NULL)
    {
        cout<<"|\t"<<temp -> data<<"\t |\n";
        temp =temp -> next;
    }
}

template <class T>
int Stack<T> :: Count()
{
    return this -> iCount;
}

int main()
{
    Stack<char> *sobj = new Stack<char>();

    sobj -> push('A');
    sobj -> push('B');
    sobj -> push('C');
    sobj -> push('D');

    sobj -> Display();
 
    cout<<"Number of Elements in stack are : "<<sobj-> Count()<<"\n";

    cout<<"Return value of pip is : "<<sobj->peep()<<"\n";

    sobj -> Display();

    cout<<"Number of Elements in stack are : "<<sobj-> Count()<<"\n";

    cout<<"Poped Element is : "<<sobj -> pop()<<"\n";

    sobj -> Display();

    cout<<"Number of Elements in stack are : "<<sobj-> Count()<<"\n";

    cout<<"Poped Element is : "<<sobj -> pop()<<"\n";

    sobj -> Display();

    cout<<"Number of Elements in stack are : "<<sobj-> Count()<<"\n";

    sobj -> push('E');

    sobj -> Display();

    cout<<"Number of Elements in stack are : "<<sobj-> Count()<<"\n";

    delete sobj;
    return 0;
}
