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
        cout<<"Linked List Constructor."<<endl;
    };
    
    bool isEmpty(){
        return (head == NULL);
    }
//======================= () ==========================//
    
    void insertFirst(int newValue){
        Node* newNode;
        newNode -> data = newValue;
        if (isEmpty()) {
            
            newNode -> next = NULL;
            head = newNode;
        }else{
            
            newNode->next = head;
            head = newNode;
        }
    }
//======================= (Insert First) ==========================//
    
    
};
