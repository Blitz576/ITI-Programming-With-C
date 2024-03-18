#include <iostream>

using namespace std;


struct Node{
  int id = -1;
  string name = "";
  Node *next = nullptr;
};

struct QueueNode{
  int id = -1;
  string name = "";
};

class Queue{
   Node * front;
   Node *rear ;
public:

   Queue(){
     front= nullptr;
     rear = nullptr;
   }

   void enQueue(int id,string name){

      if(isFull())
      {
          cout<<"sorry we can't add new element"<<"\n";
          return ;
      }
      ///creating new node
      Node *newElement = new Node;
      newElement->id = id;
      newElement->name= name;

      ///pushing the element
       if(front==nullptr)
       {
        front = rear = newElement;
       }
      else{
      rear->next = newElement;
      ///be the last element
      rear = newElement;
      }
   }
   int deQueue(QueueNode &mydata){
      if(front == nullptr)
      {
        cout<<"the queue is empty we cannot delete"<<"\n";
        return 0;
      }
       Node *oldElement = front;
       front = front->next;
       QueueNode dataReturned;
       ///putting data we want to return
       dataReturned.id = oldElement->id;
       dataReturned.name = oldElement->name;
       cout <<"sucessfully deleted"<<"\n";
       delete oldElement;
       mydata = dataReturned;
       return 1;
   }

   int isEmpty(){
      if(front == nullptr)
        return 1;
      else
        return 0;
   }

   int isFull(){
      Node *temp= new Node;
      if(temp == nullptr)
        return 1;
      else{
        delete temp;
        return 0;
      }
   }

};



int main()
{
    Queue myQueue;
    myQueue.enQueue(10,"ahmed");
    myQueue.enQueue(20,"bassem");
    myQueue.enQueue(30,"morsy");
    QueueNode sample;
    if(myQueue.deQueue(sample))
    {

        cout<<"deleted data was : "<<sample.id<<" "<<sample.name<<"\n";
    }
    return 0;
}
