#include <iostream>

using namespace std;


struct Node{
  int id = -1;
  string name = "";
  Node *previous = nullptr;
};

struct StackNode{
  int id = -1;
  string name = "";
};

class Stack{
   Node *tail ;
public:

   Stack(){
     tail = nullptr;
   }

   void push(int id,string name){

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
      newElement->previous = tail;
      ///be the last element
      tail = newElement;
   }
   int pop(StackNode &mydata){
      if(tail == nullptr)
      {
        cout<<"the stack is empty we cannot delete"<<"\n";
        return 0;
      }
       Node *oldElement = tail;
       tail = oldElement->previous;
       StackNode dataReturned;
       ///putting data we want to return
       dataReturned.id = oldElement->id;
       dataReturned.name = oldElement->name;
       cout <<"sucessfully deleted"<<"\n";
       delete oldElement;
       mydata = dataReturned;
       return 1;
   }

   int isEmpty(){
      if(tail== nullptr)
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
    Stack myStack;
    myStack.push(10,"ahmed");
    myStack.push(20,"bassem");
    myStack.push(30,"morsy");
    StackNode sample;
    if(myStack.pop(sample))
    {

        cout<<"deleted data was : "<<sample.id<<" "<<sample.name<<"\n";
    }
    return 0;
}
