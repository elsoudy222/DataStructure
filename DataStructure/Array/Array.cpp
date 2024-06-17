
#include <stdio.h>
#include <iostream>
using namespace std;

class Array{
private:
    int size;
    int length;
    int* items;
    
public:
    Array(int newArrSize){
        size = newArrSize;
        length = 0;
        items = new int[newArrSize];
    }
//======================= (Fill) ==========================//
    void Fill(){
        int num_of_items;
        cout<< "How Many Item Do You Want To Fill ? \n";
        cin>> num_of_items;
        if (num_of_items > size){
            cout<< "You Cannot exceed the array size. \n";
            return;
        }else{
            for (int i =0; i < num_of_items; i++) {
                cout<<"Enter Item Number "<< i <<" : ";
                cin>> items[i];
                length++;
            }
        }
    }
//======================= (Display) ==========================//
    void Display(){
        cout<<"Display Array Content\n";
        for (int i =0; i < length; i++) {
           // cout<< i <<"|";
            cout<< items[i] << "    ";
        }
        cout<<endl;
    }
    
//======================= (getSize) ==========================//
    int getSize(){
        return  size;
    }
//======================= (getLength) ==========================//
    int getLength(){
        return length;
    }
//======================= (Search) ==========================//
    int Search(int key){
        int index = -1;
        for (int i =0; i < length; i++) {
            if (items[i]== key) {
                index = i;
                break;
            }
        }
        return index;
    }
//======================= (Append) ==========================//
    void Append(int newItem){
        if (length < size) {
            items[length] = newItem;
            length++;
        }else{
            cout<< "The Array is Full Of Elements \n";
        }
    }
//======================= (Insert) ==========================//

    void Insert(int index, int value){
        if (index >=0 && index < size) {
            for (int i = length ; i> index; i--) {
                items[i] = items[i-1];
            }
            items[index] = value;
            length ++;
        }else{
            cout<<"ERROR!! Index Out Of Range. \n";
        }
    }
//======================= (Delete) ==========================//
    void Delete(int index){
        if (index >=0 && index < size) {
            for (int i = index; i < length -1; i++) {
                items[i] = items[i+1];
            }
            length--;
        }else{
            cout<<"ERROR!! Index Out Of Range. \n";
        }
    }
//======================= (Enlarge) ==========================//
//
    void Enlarge(int newSize){
        if (newSize <= size) {
            cout<<"You Must Enter Size Larger Than old array size.";
            return;
        }else{
            size = newSize;
            int* oldArray = items;
            items = new int[newSize];
            for (int i =0 ; i<length; i++) {
                items[i] = oldArray[i];
                 
            }
            delete[]oldArray;
            cout<<"The Old Array Deleted Successfuly."<<endl;
        }
    }
//======================= (Merge) ==========================//

    void Merge(Array other){
        int newSize = size + other.getSize();
        size = newSize;
        int* oldArray = items;
        items = new int[newSize];
        int i;
        for (i = 0 ; i< length; i++) {
            items[i] = oldArray[i];
        }
        delete [] oldArray;
        
        int j = i;
        for (int i = 0; i < other.getLength(); i++) {
            items[j++] = other.items[i];
            length++;
        }
    }
};
