#include <stdio.h>
#include <iostream>
using namespace std;

class StackNode{
public:
    int data;
    StackNode* next;
    
    StackNode(){
        data = 0;
        next = NULL;
    }
};
class Stack{
    StackNode* top;
public:
    Stack(){
        top = NULL;
    }
    
    bool isEmpty(){
        return (top == NULL);
    }
    //======================= (Push) ==========================//
    void push(int item){
        StackNode* newNode = new StackNode();
        newNode -> data = item;
        if (isEmpty()) {
            newNode-> next = NULL;
            top = newNode;
        }else{
            newNode -> next = top;
            top = newNode;
        }
    }
    //======================= (Pop) ==========================//
    int pop(){
        int value;
        StackNode* deletedPtr = top;
        value = top -> data;
        top = top -> next;
        delete deletedPtr;
        return value;
    }
    
    //======================= (Display) ==========================//
    void display(){
        StackNode* temp = top;
        while (temp != NULL) {
            cout<< temp->data << "  ";
            temp = temp->next;
        }
        cout<<endl;
    } 
    //======================= (Count) ==========================//
    int Count(){
        int counter = 0;
        StackNode* temp = top;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    
    //======================= (Peek) ==========================//
    int peek() {
            if (top == NULL) {
                cout << "Stack is Empty";
                return -1;
            } else {
                return top->data;
            }
        }
    
    //======================= (Is Found) ==========================//

    bool isFound(int item){
        bool found = false;
        StackNode* temp = top;
        while (temp != NULL) {
            if (temp->data == item) {
                found = true;
            }
            temp = temp->next;
        }
        return found;
    }
    
};
