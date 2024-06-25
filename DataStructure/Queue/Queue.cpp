

#include <stdio.h>
#include <iostream>
using namespace std;



class QueueNode{
public:
    int data;
    QueueNode* next;
    
    QueueNode(){
        data = 0;
        next = NULL;
    }
};
class Queue{
public:
    QueueNode* front;
    QueueNode* rear;
    
    Queue(){
        front = rear = NULL;
    }
    
    //======================= (isEmpty) ==========================//
    bool isEmpty(){
        if (front == NULL) {
            return  true;
        }else{
            return false;
        }
    }
    //======================= (Enqueue) ==========================//
    void Enqueue(int item){
        
        QueueNode* newNode = new QueueNode(); // Create New Node to add to Queue.
        newNode->data = item;                 // Initialize the New Node Data with newValue Enterd.
        
        if (isEmpty()) {
            
            front = rear = newNode; // Make the front and rear pointer, point to the new node because the queue is empty.
            
        }else{
            rear -> next = newNode; // make the rear->next point to the newNode because it's the new last node.
            rear = newNode;
        }
    }
    //======================= (Dequeue) ==========================//
    void Dequeue(){
        if (isEmpty()) {
            cout<<"The Queue is empty, there is no item to remove. \n";
        }else if (front == rear){
            delete front;
            front = rear = NULL;
        }else{
            QueueNode* deletePtr = front;
            front = front->next;
            delete deletePtr;
        }
    }
    //======================= (Display) ==========================//
    void Display(){
        if (isEmpty()) {
      cout<<"The Queue is empty, there is no item to remove. \n";
        }
        QueueNode* temp = front;
        while (temp != NULL) {
            cout<< temp ->data << "     ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
    //======================= (isFound) ==========================//
    bool isFound(int item){
        bool found = false;
        QueueNode* temp = front;
        while (temp != NULL) {
            if (temp->data == item) {
                found = true;
            }
            temp = temp->next;
        }
        return found;
    }

    //======================= (getFront) ==========================//
    int getFront(){
        return front->data;
    }   
    //======================= (getRear) ==========================//
    int getRear(){
        return rear->data;
    }
    //======================= (Clear) ==========================//
    
    void Clear(){
        while (!isEmpty()) {
            Dequeue();
        }
    }
};
