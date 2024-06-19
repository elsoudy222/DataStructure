#include <stdio.h>
#include <iostream>

using namespace std;

// Single Element In The LinkedList
class Node{
public:
    int data;
    Node* next;
};


// The Main LinkedList That contains all Nodes.
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
        cout<<"================================================================="<<endl;
        cout<<"************************** (Linked List) ************************"<<endl;
        cout<<"================================================================="<<endl;
    };
    
    bool isEmpty(){
        return (head == NULL);
    }
//======================= (Insert First) ==========================//
    
    void insertFirst(int newValue){
        Node* newnode = new Node();
        newnode-> data = newValue;
        if (isEmpty()) {
            newnode -> next = NULL;
            head = newnode;
        }else{
            
            newnode->next = head;
            head = newnode;
        }
    }
//======================= (Display) ==========================//
    
    void display(){
        Node* temp = head;
        while (temp != NULL) {
            cout<< temp->data << "  ";
            temp = temp->next;
        }
    }
//======================= (Counter) ==========================//
        
        int counter(){
            int counter = 0;
            Node* temp = head;
            while (temp != NULL) {
                counter++;
                temp = temp->next;
            }
            return counter;
        }
//======================= (Is Found) ==========================//
            
            bool isFound(int searchKey){
                bool found = false;
                Node* temp = head;
                while (temp != NULL) {
                    if (temp->data == searchKey) {
                        found = true;
                        break;
                    }
                    temp = temp->next;
                }
                return found;
            }
    //======================= (Insert Befor) ==========================//
    void insertBefor(int item, int newValue){
        if (isEmpty())
            insertFirst(newValue);
         if (isFound(item)){
            Node* newNode = new Node();
            newNode-> data = newValue;
            Node* temp = head;
            while (temp != NULL && temp ->next->data != item) {
                temp = temp->next;
            }
            newNode->next = temp-> next;
             temp->next = newNode;
        }else{
            cout<<"Sorry, The item is not found. \n";
        }
    }
};
