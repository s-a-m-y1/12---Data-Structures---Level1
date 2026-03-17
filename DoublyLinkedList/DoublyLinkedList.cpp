#include<iostream>
using namespace std;
class Node
{
public:
	char Val ;
	Node* Next;/// Before ))
	Node* Prev; /// After ))
};

void insertAtBeginning(Node*& Head, char Val)
{
	Node* NewNode = new Node();/// this is New Adderss in heap in ram but this point 
	/// step one pass val this objet 
	/// step two pass this node next hold on thhe head 
	/// step three the object this prev  point nulptr because it's first 
	NewNode->Val = Val;
	NewNode->Next = Head;///this fst
	NewNode->Prev = nullptr;
	if (Head!=nullptr)
	{
		Head->Prev = NewNode;
	}
	Head = NewNode;
}

Node* Find(Node* Head, char Search)
{
	Node* NewNode = Head;///Search
	while (Head!=nullptr)
	{
		if (Head->Val == Search)
		{
			return Head;
		}
			Head = Head->Next;
		
	}
	return nullptr;
}

void insertAtend(Node* & Head , char Add)
{
	Node* NewItem = new Node();

	NewItem->Val = Add;
	NewItem->Next = nullptr;

	if (Head == nullptr)
	{
		Head = NewItem;
		NewItem->Next = nullptr; 
		return;
	}

	Node* temp = Head;

	while (temp->Next!=nullptr)
	{
		temp = temp->Next;
	}

	temp->Next = NewItem;
	NewItem->Prev = temp;
	return;
}

void InsertAfter(Node*& head, char Val)
{
	Node* Insert = new Node();///new

	if (head == nullptr)	return;

	/// the head it's hold first Node ;
	Insert->Val = Val;
	Insert->Prev = head;
	Insert->Next = head->Next;

	if (head->Next != nullptr)
	{
		head->Next->Prev = Insert;
		//head->Next = Insert;
	}
	head->Next = Insert;

	//head = Insert;
		//return;
}

//void Delete_node(Node*&Head , Node*&nodeToDelete  )
//{
//	/// Ask him 
//	/// what this don't using head live here if (nodeToDelete->Next != nullptr) nodeToDelete->Next->Prev = nodeToDelete->Prev; and if (nodeToDelete->Prev != nullptr)nodeToDelete->Prev->Next = nodeToDelete->Next;
//
//	/// step one if the pramters is nullptr
//	///_____________________________________///
//	if (Head==nullptr||nodeToDelete==nullptr)return;
//	///Step Two if the NodeToDelete it's first 
//	///_______________________________________///
//	if (Head == nodeToDelete)Head = nodeToDelete->Next;
//	/// Step Three if this node it's Next Node It'S Nullptr
//	///________________________________________///
//	if (nodeToDelete->Next != nullptr) nodeToDelete->Next->Prev = nodeToDelete->Prev;
//	///Step Four if this node it's prev Node It'S Nullptr
//	///_________________________________________________///
//	if (nodeToDelete->Prev != nullptr)nodeToDelete->Prev->Next = nodeToDelete->Next;
//	///Step Five Deletye This Node in Momary & return  
//	///_____________________________________///
//	delete(nodeToDelete);///Note this delete using Adders
//	return;
//}

void Delete_node(Node*& Head)
{
	///step one pass find node at the head and finder hold on this
	Node* Finder = Head;
	/// step two check head
	if (Head == nullptr)return;
	///Step Two if the NodeToDelete it's first 
	if (Head->Next == nullptr && Head->Prev == nullptr)Head = Finder;
	/// What will happen is the same thing: I whisper and point directly through the finder
	if (Finder->Next != nullptr)Finder->Next->Prev = Finder->Prev;

	if (Finder->Prev != nullptr)Finder->Prev->Next = Finder->Next;
	delete(Finder);
	return;

	


}

void DeleteFirstNode(Node* &head)///record
{
	Node* del = head;
	if (head == nullptr)return;
	if (del!=nullptr)
	{
		del->Next->Prev = nullptr;
	}
	head = del->Next;///this holder next node this super support 
	delete(del);///note here del adderss thiss garbg data 
	return;
}

void DeleteLastNode(Node* &head)
{
	Node* Las = head;
	if (head == nullptr)return;
	while (Las->Next!=nullptr)
	{
		Las = Las->Next;
	}
	if (Las!=nullptr)
	{
		Las->Prev->Next = nullptr;
	}
	delete(Las);
	return;

}

void print(Node*head)
{
	system("Color 0A");
	Node* temp = head;
	while (temp!=nullptr)
	{
		cout << "(" << temp->Val << ")" << endl;
		temp = temp->Next;
	}


}
int main()
{

	Node* Head = nullptr;
	insertAtBeginning(Head, 's');
	insertAtBeginning(Head, 'a');
	insertAtBeginning(Head, 'm');
	insertAtBeginning(Head, 'y');
	//DeleteFirstNode(Head);
	//DeleteLastNode(Head);
	//print(Head);
	Node* Finder = Find(Head, 's');
	Delete_node(Finder);
	Node* Finder1 = Find(Head, 'm');
	Delete_node(Finder1);
	print(Head);

	system("pause>Null");
	return 0;
}