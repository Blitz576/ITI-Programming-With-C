#include <iostream>

using namespace std;

struct Node{
 int id=0;
 string name="";

 Node *next=0 ;   ///for the next Node
 Node *previous=0; ///for the previous Node


};

struct Employee{
  int id=0;
  string name = "";

};

///
class LinkedList{
    Node *head; ///for the head element
    Node *tail; /// for the tail element

Node *searchById(int targetId) {
    Node *it = head; ///iterator

    while (it != nullptr) {
        if (it->id == targetId) {
            return it; ///found
        }
        it = it->next; /// move to the next node
    }
    return nullptr;
}


public:

    LinkedList(){
       head = 0; ///As zero in earlier versions of codeBlock refers to NULL
       tail = 0;
    }

    void appendNode(int id,string name){
       ///creating new element
       Node *element = new Node;
       element->id = id;
       element->name = name;

       ///if the list was empty
        if(head == nullptr){
            head = tail = element; ///first element
        }
        else{
            element->previous = tail;
            tail->next = element;
            tail = element; ///reached to the end
        }

    }
    Employee searchEmployeeById(int targetId){
       Node *selected = searchById(targetId);
       if(selected ==nullptr)
       {
        cout<<"data NOT Found "<<"\n";
       }
       Employee emp1;
       emp1.id= selected->id;
       emp1.name = selected->name;

       return emp1;
    }

   void deleteById(int targetId) {
    Node *targetNode = searchById(targetId);
    if (head == nullptr) {
        cout << "Can't remove because List is empty" << "\n";
        return;
    } else if (head == tail) {
        if (targetNode == nullptr) {
            cout << "Can't remove because data was not found" << "\n";
            return;
        } else {
            head = tail = nullptr;
        }
    } else if (targetNode == head) {
        head = targetNode->next;
        head->previous = nullptr; /// Update the previous pointer of the new head
    } else if (targetNode == tail) {
        tail = targetNode->previous;
        tail->next = nullptr; /// Update the next pointer of the new tail
    } else if (targetNode != nullptr) {
        targetNode->next->previous = targetNode->previous;
        targetNode->previous->next = targetNode->next;
    } else {
        cout << "Can't remove because data was not found" << "\n";
        return;
    }
    cout << "Deleted successfully" << "\n";
    delete targetNode;
}



    void insertAfter(int targetId, int newId, string newName) {
    Node *targetNode = searchById(targetId);
    Node *newElement = new Node;
    newElement->id = newId;
    newElement->name = newName;

    if (targetNode == nullptr) {
        cout << "Target node not found" << endl;
        return;
    }

    if (targetNode->next == nullptr || head == nullptr)
        appendNode(newId, newName);
    else {
        newElement->next = targetNode->next;
        newElement->previous = targetNode;
        targetNode->next->previous = newElement; /// update the previous pointer of the next element
        targetNode->next = newElement;
    }
}


    void displayAll(){
        Node * it = head;
        int i=1;
       while(it != nullptr)
       {

            cout<<"element number"<<i<<":";
            cout<<it->id<<","<<it->name<<"\n";
            i++ ; ///update the index
            it = it->next; ///update the iterator
       }

    }
};



int main()
{
    LinkedList myLi;
    myLi.appendNode(10,"ahmed");
    myLi.appendNode(20,"nagy");
    myLi.appendNode(30,"mohamed");
    myLi.appendNode(40,"mona");
    myLi.insertAfter(10,50,"mahmoud");
    myLi.deleteById(20);
    myLi.displayAll();
    return 0;
}
