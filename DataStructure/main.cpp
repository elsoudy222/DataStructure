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
    
    void Display(){
        cout<<"Display Array Content\n";
        for (int i =0; i < length; i++) {
            cout<< items[i] << "    ";
        }
        cout<<endl;
    }
    
    int getSize(){
        return  size;
    }
    int getLength(){
        return length;
    }
    
};




int main() {
    int arrSize;
    cout<<"ARRAY ADT DEMO !!"<<endl;
    cout<<"Enter Array Size: ";
    cin>>arrSize;
    ArrayDemo myArray(arrSize);
    myArray.Fill();
    myArray.Display();
    myArray.getSize();
    myArray.getLength();
    
    return 0;
}
