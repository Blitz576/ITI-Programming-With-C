#include <iostream>

using namespace std;

struct Node{
    int id;
    Node *left= nullptr;
    Node * right= nullptr;
};

class Tree{
   Node *root;

    Node* findParent(int id) {
        Node* it = root;
        Node* parent = nullptr; /// Initialize parent as nullptr

        while (it != nullptr) {
            parent = it; /// Update parent before moving to the next level

            if (id <= it->id) {
                it = it->left; /// Go to the left
            } else {
                it = it->right; /// Go to the right
            }
        }

    return parent;
}

   void traverse(Node *temp){
      if(temp == nullptr)
        return ;
      traverse(temp->left);
      cout<<"Node is"<<temp->id<<"\n";
      traverse(temp->right);
   }
 public:
   Tree(){
     root = nullptr;
   }

 void append(int id){
     ///creating new element
     Node * newElement = new Node;
     newElement->id= id;
     if(root == nullptr)
     {
         root = newElement; ///the first element
     }
     else {
        Node * parent = findParent(id);
        if(id<= parent->id)
            parent->left = newElement;
        else if(id>parent->id){
            parent->right = newElement;
        }
     }
 }

 void printAll(){
     if(root == nullptr)
     {
         cout<<"my tree is empty"<<"\n";
         return ;
     }
     traverse(root);
 }
};



int main()
{
    Tree t1;
    t1.append(100);
    t1.append(50);
    t1.append(70);
    t1.append(60);
    t1.append(80);
    t1.append(30);
    t1.append(40);
    t1.printAll();
    return 0;
}
