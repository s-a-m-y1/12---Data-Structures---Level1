#include<iostream>
using namespace std;
class Node
{
 
   
   public:
    int Val =0 ;
    Node * Next ;
};

void  InsertAtBeginning1 ( Node* & Head , int Val )
{
     /// Step one Creaded New Object in type class Node this get Val but the pass pointer Adderss ////
    Node * New_Node_Heap = new Node();///this is New bject the object Give object adderss but heap
    New_Node_Heap->Val = Val;/// this is pass Val To object int the heap 
    New_Node_Heap->Next  = Head;// this pass New  Adderss object for Pramter of Head
    Head = New_Node_Heap; /// here Head live it's give Adderss This object because  pass New oject in the main 
}
Node * Find( Node*  Head  , int Val )
{
    while (Head!=nullptr)
    {
        if (Head->Val==Val)
        {
         return Head;
        }
        Head = Head->Next;
       
    }
    return nullptr;
}
void Print(Node *Head)
{
    while (Head != nullptr)
    {
    cout<<"\n========================================================"<<endl;
       cout<<"Node:"<<Head->Val<<endl;
    //    cout<<"The address of the indicator itself  "<<&Head->node<<endl;
    //    cout<<"The address at which the cursor is pointing: "<<Head->node<<endl;
       Head = Head->Next;
       cout<<"\n========================================================"<<endl;
    }
}


int main()
{
  Node * Insert = nullptr;
InsertAtBeginning1(Insert , 1);
InsertAtBeginning1(Insert , 2);
InsertAtBeginning1(Insert , 3);
InsertAtBeginning1(Insert ,4);
Print(Insert);

Node * Finder = Find(Insert , 2);
if (Finder!=nullptr)
{
    cout<<"Hello World : "<< Finder->Val<<endl;

}
else
{
    cout<<"NOt Found ): ";
}

    system("pause>null");
    return 0;
}