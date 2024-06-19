#include <iostream>
#include "Linked_List/Linked_List.cpp"
using namespace std;

/// ==================== Linked List Implementation:- ===============================
int main (){
   
    LinkedList list;
    
    if (list.isEmpty()) {
        cout<<"The List is Empty.\n";
    }else{
        cout<<"The List Contains : "<< list.counter()<<endl;
    }
    int item;
    cout<<"Enter Item to isert in the list: ";
    cin>>item;
    list.insertFirst(item);
    list.display();
    cout<<"\nEnter Item to isert in the list: ";
    cin>>item;
    list.insertFirst(item);
    list.display();
    cout<<"\nEnter Item to isert in the list: ";
    cin>>item;
    list.insertFirst(item);
    list.display();
    cout<<"\nEnter Item to isert in the list: ";
    cin>>item;
    list.insertFirst(item);
    list.display();
    
    //cout<<"\nEnter Item to Search in the list: ";
//    cin>>item;
//    if (list.isFound(item)) {
//        cout <<"true";
//    }else{
//        cout <<"false";
//    }
    
    cout<<"\nEnter Item and Value to Insert in the list: \n";
    int value;
    cin>> item;
    cin>> value;
    list.insertBefor(item, value);
    list.display();
    
    
    
    
    return 0;
};


















/// ==================== Array Implementation:- ===============================
/*int main() {
    
    int newArrSize;
    cout<<"ARRAY ADT DEMO !!"<<endl;
    cout<<"Enter Array Size: ";
    cin>> newArrSize;
    Array myArray(newArrSize);
    myArray.Fill();
    cout<<"Array Size = "<< myArray.getSize()<<"\t\t"<<"Array Length = "<<myArray.getLength()<<endl;
    myArray.Display();
    cout<<"=================================================\n";

//===================== (Search) ===========================//
    int key; // this variable for search method.
    cout<<"Enter Value To Search : ";
    cin>> key;
    int index = myArray.Search(key);
    if (index == -1) {
        cout<< "Sorry, The Value Not Found In The Array! "<<index<<endl;
    }else{
        cout<< "The Value U Searced For In The Position : "<<index<<endl;
    };
    
    cout<<"=================================================\n";
//======================= (Append) ==========================//
    int newItem;
    cout<<"Enter The New Item : ";
    cin>>newItem;
    myArray.Append(newItem);
    myArray.Display();
    cout<<"=================================================\n";

//======================= (Insert) ==========================//
    int value;
    int index;
    cout<<"Enter Index And Value U Want To Add : \n";
    cin >> index ;
    cin >> value ;
    myArray.Insert(index, value);
    myArray.Display();
    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
    cout<<"=================================================\n";
    //======================= (Delete) ==========================//
    int delIndex;
    cout<<"Enter Index U Want To Delete : ";
    cin>> delIndex;
    myArray.Delete(delIndex);
    myArray.Display();
   //======================= (Enlarge) ==========================//
    int newSize;
    cout<<"Enter New Size Of Array : ";
    cin>>newSize;
    myArray.Enlarge(newSize);
    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
    myArray.Display();
    cout<<"=================================================\n";
    //======================= (Merge) ==========================//
    Array other(3);
    other.Fill();
    myArray.Merge(other);
    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
    myArray.Display();
    cout<<"=================================================\n";
    return 0;
}
*/
