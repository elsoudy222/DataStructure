#include <iostream>
#include "Linked_List/Linked_List.cpp"
#include "Queue/Queue.cpp"


using namespace std;






int main(){
    Queue queue;
    int item;
        for (int i = 0; i<= 4; i++) {
            cout<<"Please Enter Item ("<< i+1 << ") To Add to Stack : ";
            cin>> item;
            queue.Enqueue(item);
         }
    queue.Display();
    
//    queue.Dequeue();
//    queue.Display();
//    queue.Dequeue();
//    queue.Display();
    
    cout<<"Clear All Items : \n";
    queue.Clear();
    cout<<"Display After Clear: \n";
    queue.Display();
    
    
    return 0;
}


/// ==================== Stack Implementation:- ===============================
//int main(){
//    
//    Stack stack;
//    
//    
//    //==========================(Push)====================================
//    int item;
//    for (int i = 0; i<= 4; i++) {
//        cout<<"Please Enter Item ("<< i+1 << ") To Add to Stack : ";
//        cin>> item;
//        stack.push(item);
//        stack.display();
//        
//      }
//    cout<< "There is "<<stack.Count()<<" Items in the stack\n";
//    cout<<"====================================================\n";
//    
////==========================( Pop )====================================
//    
////    cout<< "Item "<<stack.pop()<<" Was Deleted Successfully.\n";
////    stack.display();
////    cout<< "There is "<<stack.Count()<<" Items in the stack\n";
//    cout<<"====================================================\n";
//    //==========================( Peek )====================================
//    cout<<"Top Item = "<< stack.peek()<<endl;
//    //==========================( Is Found )====================================
//    cout<<"Enter Item to search: ";
//    cin>>item;
//    if (stack.isFound(item) == true) {
//        cout<<"Item Founded.\n";
//    }else{
//        cout<<"Item Not Founded.\n";
//    }
//    
//    
//    return 0;
//}










/// ==================== Linked List Implementation:- ===============================
//int main (){
//
//    LinkedList list;
//
//    if (list.isEmpty()) {
//        cout<<"The List is Empty.\n";
//    }else{
//        cout<<"The List Contains : "<< list.counter()<<endl;
//    }
//    cout<<"====================================================\n";
//    // ==================== Insert First ===============================
//    int item;
//    for (int i = 0; i<= 4; i++) {
//        cout<<"Enter Item (" << i+1 <<") to isert in the list: ";
//        cin>>item;
//        list.insertFirst(item);
//        list.display();
//    }
//    cout<<"====================================================\n";
//    // ==================== Search ===============================
//    cout<<"\nEnter Item to Search in the list: ";
//    cin>>item;
//    if (list.isFound(item)) {
//        cout <<"true";
//    }else{
//        cout <<"false";
//    }
//    cout<<"====================================================\n";
//    // ==================== Insert Before ===============================
//    cout<<"Enter Item And Value to Insert in the list: \n";
//    int value;
//    cin>> item;
//    cin>> value;
//    list.insertBefor(item, value);
//    list.display();
//    cout<<"====================================================\n";
//    // ==================== Delete ===============================
//    cout<<"Enter Item to Delete from the list: ";
//    int deletedItem;
//    cin >> deletedItem;
//    list.Delete(deletedItem);
//    list.display();
//
//    return 0;
//};



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
