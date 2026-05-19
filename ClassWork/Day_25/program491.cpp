#include<iostream>
using namespace std;

#pragma pack(1)
class Stacknode
{
    public:
        int data;
        Stacknode *next;

        Stacknode(int no)
        {
            this -> data = no;
            this -> next = NULL;
        }
};

class Stack
{
    private :
        Stacknode *frist;
        int iCount;
    
    public :
        Stack();

        void push(int);     // InsertFirst
        int pop();          // DeleteFirst
        int pip();
        void Display();
        int Count();

};

Stack :: Stack()
{
    this -> frist = NULL;
    this -> iCount = 0;
}

void Stack :: push(int no)
{

}

int Stack :: pop()
{
    return 0;
}

int Stack :: pip()
{
    return 0;
}

void Stack :: Display()
{

}

int Stack :: Count()
{
    return this -> iCount;
}

int main()
{
    Stack *sobj = new Stack();

    delete sobj;
    return 0;
}