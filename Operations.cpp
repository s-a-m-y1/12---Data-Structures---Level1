#include<iostream>
#include<queue>
using namespace std;
class Node
{
public:
    int Val = 0;
    Node* node;
};

// Node* InsertAtBeginning(Node* &Head , int Val )
// {
//     Node* New_Node =new Node();
//     New_Node->node = Head;
//     New_Node->Val = Val;
//     // Head = New_Node;
//    return New_Node;
// }
void InsertAtBeginning1(Node* &Head , int Val )
{
    Node* New_Node =new Node();
    New_Node->node = Head;
    New_Node->Val = Val;
    Head = New_Node;
  
}
void Print(Node *Head)
{
    while (Head != nullptr)
    {
    cout<<"\n========================================================"<<endl;
       cout<<"Node:"<<Head->Val<<endl;
       cout<<"The address of the indicator itself  "<<&Head->node<<endl;
       cout<<"The address at which the cursor is pointing: "<<Head->node<<endl;
       Head = Head->node;
       cout<<"\n========================================================"<<endl;
    }
}
    int main()
    {
        Node* Head =nullptr;
        for (int i = 1; i < 10; i++)
        {
                InsertAtBeginning1(Head , i);
        }      
Print(Head);

system("pause>null");
return 0;
    }
    
