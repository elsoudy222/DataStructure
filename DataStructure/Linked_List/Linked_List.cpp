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
        cout<<endl;
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
    //======================= (Append) ==========================//
    void Append(int newValue){
        
        if (isEmpty()) {
            insertFirst(newValue);
        }else{
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            Node* newNode = new Node(); // Create New Node.
            newNode->data = newValue;   // Initialize the New Node Data with newValue Enterd.
            temp->next = newNode;       // Meke the (temp->next) pointer point to the New Node.
            newNode->next = NULL;       // Make (newNode->next) point to NULL , Because its the last node in the list.
        }
    }
    //======================= (Delete) ==========================//
    void Delete(int item){
        
        if (isEmpty()) {
            cout<<"Sorry, The List is Empty , No Items to Delete.\n";
        }else if (isFound(item) == false) {
            cout<<"Sorry, The Item Not Founded.\n";
            return;
        }
        Node* deletePtr = head;
        if(head -> data == item){
           // Node* delPtr = head;
            head = head->next;
            delete deletePtr;
        }else{
            
            Node* prevPtr = NULL; 
            while (deletePtr -> data != item) {
                prevPtr = deletePtr;
                deletePtr = deletePtr -> next;
            }
            prevPtr -> next = deletePtr -> next;
            delete deletePtr;
        }
    }
};
