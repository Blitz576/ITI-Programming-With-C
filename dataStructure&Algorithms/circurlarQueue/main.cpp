#include <iostream>

using std::cin;
using std::cout;

class Queue{

    int rear,front,size;
    int *arr;

public:
    Queue(int _size = 5){
        size = _size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }

    int isEmpty (){
       if(front ==-1)
         return 1;
       else
        return 0;
    }
    int isFull(){
       if(((rear + 1) % size == front))
        return 1;
       else
        return 0;
    }
    void enQueue(int item){
        if(isFull())
        {
            cout<<"Queue is full"<<"\n";
            return ;
        }
        else {
           front += (front ==-1); ///update the front value
           rear =(rear+1)% size;
           arr[rear]=item;
        }

    }

    void deQueue(){
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<"\n";
            return ;
        }
        else {
            cout<<"deleted data was "<<arr[front];
             front= (front +1)%size;
            if(front == rear)
                front = -1 ; ///the queue is empty now
        }

    }


    ~Queue(){delete[] arr;}
};



int main()
{
    Queue myQueue;
    myQueue.deQueue();
    myQueue.enQueue(10);
    myQueue.enQueue(20);
    myQueue.enQueue(30);
    myQueue.enQueue(40);
    myQueue.enQueue(50);
    myQueue.enQueue(60);
    myQueue.deQueue();
    return 0;
}
