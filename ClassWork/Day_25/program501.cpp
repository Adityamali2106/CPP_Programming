///////////////////////////////////////////////////////////////////////////////////
//      Final code of Queue using Genric Approach
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class Queuenode
{
    public:
        T data;
        Queuenode<T> *next;

        Queuenode(T no)
        {
            this -> data = no;
            this -> next = NULL;
        }
};

template <class T>
class Queue
{
    private :
        Queuenode<T> *frist;
        Queuenode<T> * last;
        int iCount;
    
    public :
        Queue();

        void enqueue(T);
        T dequeue();
        void Display();
        int Count();
};

template <class T>
Queue<T> :: Queue()
{
    cout<<"Queue gets created Succesfully\n";
    this -> frist = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

template <class T>
void Queue<T> :: enqueue(T no)
{
    Queuenode<T> *newn = NULL;

    newn = new Queuenode<T>(no);

    if ((this -> frist == NULL) && (this -> last == NULL))
    {
        this -> frist = newn;
        this -> last = newn;
    }
    else
    {
        this -> last -> next = newn;
        this -> last = this -> last -> next;
    }
    this -> iCount++;
}

template <class T>
T Queue<T> :: dequeue()
{
    T Value = 0;
    Queuenode<T> *temp = this -> frist;

    if ((this -> frist == NULL) && (this -> last == NULL))
    {
        cout<<"Queue is Empty \n";
        return -1;
    }

    Value = this -> frist -> data;

    if (this -> frist == this -> last)
    {
        delete frist;
        this -> frist = NULL;
        this -> last = NULL;
    }
    else
    {
        this -> frist = this -> frist -> next;
        delete temp;
    }

    this -> iCount--;

    return Value;
}

template <class T>
void Queue<T> :: Display()
{
    Queuenode<T> * temp = this -> frist;

    if ((this -> frist == NULL) && (this -> last == NULL))
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

template <class T>
int Queue<T> :: Count()
{
    return this -> iCount;
}

int main()
{
    Queue<int> *qobj = new Queue<int>();
    int iChoice = 0;
    int Value = 0;
    int iRet = 0;

    while (1)
    {
        cout<<"---------------------------------------------------------------------------\n";
        cout<<"-------------------------please Select the option--------------------------\n";
        cout<<"1: Insert new element into the queue\n";
        cout<<"2: Remove element from the queue\n";
        cout<<"3: Diaplay the Elements of the queue\n";
        cout<<"4: Count the number of element from the queue\n";
        cout<<"0: Exit the Application\n";
        cin>>iChoice;
        cout<<"---------------------------------------------------------------------------\n";
        
        switch (iChoice)
        {
            case 1:
                cout<<"Enter the Element that you want to enter : \n";
                cin>>Value;
                qobj -> enqueue(Value);
                cout<<"Elemnt gets inserted succesfully\n";
                break;
            case 2:
                iRet = qobj -> dequeue();
                if (iRet != -1)
                {
                    cout<<"Element remorved from queue is : "<<iRet<<"\n";
                }
                break;
            
            case 3:
                cout<<"Elements of the queue Are : \n";
                qobj -> Display();
                break;

            case 4:
                iRet = qobj->Count();
                cout<<"Number of elements in queue are : "<<iRet<<"\n";
                break;

            case 0:
                cout<<"Thank you for using our Application \n";
                delete qobj;
                break;

            default:
                cout<<"Plase enter the valid option\n";
                break;
        }   // End of switch
    }   // End of while
    
    return 0;
}   // End of main
