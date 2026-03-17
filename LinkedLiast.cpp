#include<iostream>
#include<queue>
using namespace std;
class clsLinkedList
{
public:
    int Val = 0;
    clsLinkedList* node;
};

int main()
{
    clsLinkedList* Head;///
    /// this is calss in the type class this is oblects but the adderss is not
    clsLinkedList* Node1 = nullptr; // obj1
    clsLinkedList* Node2 = nullptr; // obj2
    clsLinkedList* Node3 = nullptr; // obj3
    ///  this is varibals in the heap  using class \clsLinkedL

    Node1 = new clsLinkedList();
    Node2 = new clsLinkedList();
    Node3 = new clsLinkedList();
    ///this is vals using pointer  
    Node1->Val = 1;
    Node2->Val = 2;
    Node3->Val = 3;

    ///  this is list for pointers 
    Node1->node = Node2;
    Node2->node = Node3;
    Node3->node = nullptr;

    Head = Node1;
    while (Head != nullptr)
    {
        cout << "Node : " << Head->Val << endl;
        Head = Head->node;
 
    }
    cout << "Pointer Address: " << &Node3->node << endl;///this is adderss this pointer  outside
    cout << "Points to: " << Node3->node << endl;/// htis is the pointer on this null  inside
    delete Head;
 /// Example 
 /*
 i Have a box this box insideit data  Quthoin ?? 

 the box outside it's have Adderss ... Lucky me to reach this I need Pointer of box outside lucky come in

  and I Rally inside the box inside it's have addersss  so and so 
 */

    system("pause>nullptr");
    return 0;
}