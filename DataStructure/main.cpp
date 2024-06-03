#include <iostream>

using namespace std;

class ArrayDemo{
private:
    int size;
    int length;
    int* items;
    
public:
    ArrayDemo(int newArrSize){
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
    
    
};




int main() {
    
    
    int arrSize;
    cout<<"ARRAY ADT DEMO !!"<<endl;
    cout<<"Enter Array Size: ";
    cin>>arrSize;
    ArrayDemo myArray(arrSize);
    myArray.Fill();
    cout<<"Array Size = "<< myArray.getSize()<<"\t\t"<<"Array Length = "<<myArray.getLength()<<endl;
    myArray.Display();
    
//===================== (Search) ===========================//
    int key; // this variable for search method.
    cout<<"Enter Value To Search : ";
    cin>> key;
    int index = myArray.Search(key);
    if (index == -1) {
        cout<< "Sorry, The Value Not Found In The Array !"<<index<<endl;
    }else{
        cout<< "The Value U Searced For In The Position : "<<index<<endl;
    };
//======================= (Append) ==========================//
    int newItem;
    cout<<"Enter The New Item : ";
    cin>>newItem;
    myArray.Append(newItem);
    myArray.Display();
//======================= (Insert) ==========================//
    int value;
    cout<<"Enter Index And Value U Want To Add : ";
    cin >> index ;
    cin >> value ;
    myArray.Insert(index, value);
    myArray.Display();
    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
    
    return 0;
}
