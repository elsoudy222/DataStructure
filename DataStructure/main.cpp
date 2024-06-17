#include <iostream>
#include "Array/Array.cpp"
using namespace std;





int main() {
    

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
//    int key; // this variable for search method.
//    cout<<"Enter Value To Search : ";
//    cin>> key;
//    int index = myArray.Search(key);
//    if (index == -1) {
//        cout<< "Sorry, The Value Not Found In The Array! "<<index<<endl;
//    }else{
//        cout<< "The Value U Searced For In The Position : "<<index<<endl;
//    };
    
 //   cout<<"=================================================\n";
//======================= (Append) ==========================//
//    int newItem;
//    cout<<"Enter The New Item : ";
//    cin>>newItem;
//    myArray.Append(newItem);
//    myArray.Display();
//    cout<<"=================================================\n";

//======================= (Insert) ==========================//
//    int value;
//    int index;
//    cout<<"Enter Index And Value U Want To Add : \n";
//    cin >> index ;
//    cin >> value ;
//    myArray.Insert(index, value);
//    myArray.Display();
//    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
    cout<<"=================================================\n";
    //======================= (Delete) ==========================//
//    int delIndex;
//    cout<<"Enter Index U Want To Delete : ";
//    cin>> delIndex;
//    myArray.Delete(delIndex);
//    myArray.Display();
   //======================= (Enlarge) ==========================//
//    int newSize;
//    cout<<"Enter New Size Of Array : ";
//    cin>>newSize;
//    myArray.Enlarge(newSize);
//    cout<<"(Array Size) = "<< myArray.getSize()<<"\t\t"<<"(Array Length) = "<<myArray.getLength()<<endl;
//    myArray.Display();
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


//#include <iostream>
//using namespace std;
//
//// Linked-List :-
//struct Node {
//    int data;
//    Node* next;
//};
//
//void printList(Node* n) {
//    while (n != nullptr) {
//        cout << n->data << " ";
//        n = n->next;
//    }
//    cout<<endl;
//}
//
//int main() {
//    Node* head = nullptr;
//    Node* second = nullptr;
//    Node* third = nullptr;
//
//    head = new Node();
//    second = new Node();
//    third = new Node();
//
//    head->data = 1;
//    head->next = second;
//
//    second->data = 2;
//    second->next = third;
//
//    third->data = 3;
//    third->next = nullptr;
//
//    printList(head);
//
//    return 0;
//}
