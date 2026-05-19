#include<iostream>
using namespace std;

#pragma pack(1)
class Queuenode
{
    public:
        int data;
        Queuenode *next;

        Queuenode(int no)
        {
            this -> data = no;
            this -> next = NULL;
        }
};

class Queue
{
    private :
        Queuenode *frist;
        int iCount;
    
    public :
        Queue();

        void enqueue(int);     // InsertLast
        int dequeue();         // DeleteFirst
        void Display();
        int Count();
};

Queue :: Queue()
{
    cout<<"Queue gets created Succesfully\n";
    this -> frist = NULL;
    this -> iCount = 0;
}

void Queue :: enqueue(int no)
{
    Queuenode *newn = NULL;
    Queuenode *temp = NULL;

    newn = new Queuenode(no);

    if (this -> frist == NULL)
    {
        this -> frist = newn;
    }
    else
    {
        temp = this -> frist;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        
        temp -> next = newn;
    }

    this -> iCount++;
}

int Queue :: dequeue()
{
    int Value = 0;
    Queuenode *temp = this -> frist;

    if (this -> frist == NULL)
    {
        cout<<"Queue is Empty \n";
        return -1;
    }

    Value = this -> frist -> data;
    
    this -> frist = this -> frist -> next;
    delete temp;

    this -> iCount--;

    return Value;
}

void Queue :: Display()
{
    Queuenode * temp = this -> frist;

    if (this -> frist == NULL)
    {
        cout<<"Queue Is Empty\n";
        return;
    }

    while (temp != NULL)
    {
        cout<<"| "<<temp -> data<<" | - ";
        temp =temp -> next;
    }

    cout<<"\n";
}

int Queue :: Count()
{
    return this -> iCount;
}

int main()
{
    Queue *qobj = new Queue();

    qobj -> enqueue(11);
    qobj -> enqueue(21);
    qobj -> enqueue(51);
    qobj -> enqueue(101);

    qobj -> Display();
 
    cout<<"Number of Elements in Queue are : "<<qobj-> Count()<<"\n";

    cout<<"Removed Element is : "<<qobj -> dequeue()<<"\n";

    qobj -> Display();

    cout<<"Number of Elements in Queue are : "<<qobj-> Count()<<"\n";

    cout<<"Removed Element is : "<<qobj -> dequeue()<<"\n";

    qobj -> Display();

    cout<<"Number of Elements in Queue are : "<<qobj-> Count()<<"\n";

    qobj -> enqueue(121);

    qobj -> Display();

    cout<<"Number of Elements in Queue are : "<<qobj-> Count()<<"\n";

    delete qobj;
    return 0;
}
