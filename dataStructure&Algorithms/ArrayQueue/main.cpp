#include<iostream>

using namespace std;

class Queue{
    int rear;
    int size;
    int *arr;

public:
    Queue(int _size = 5){
        size = _size;
        arr = new int[size];
        rear = 0;
    }
    void enQueue(int item){
        if(rear == size){
            cout<<"Queue is Full"<<endl;
            return;
        }
        arr[rear++] = item;
    }
    void deQueue(){
        if(rear == 0){
            cout<<"Queue is Empty";
            return;
        }
        cout<<"deleted data was "<< arr[0]<<"\n";
        for (int i = 0; i < rear; i++) {
            arr[i] = arr[i + 1];
        }
        rear--;
    }

};

int main(){
  Queue myQueue;
  myQueue.enQueue(10);

  myQueue.enQueue(20);
  myQueue.enQueue(30);
  myQueue.deQueue();
}
