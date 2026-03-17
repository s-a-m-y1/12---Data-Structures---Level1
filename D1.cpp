#include<iostream>
using namespace std;
short readS()
{
	short s;
	cout << "enter  size :";
	cin >> s;
	return s;

}
void F1(short size)
{
	float* ptr;///this is pointer this pointer in the stack but the pointer on the heap date :)

	ptr =new float [size]; ///this is array dinamic this octher the index deinmic 1 index acter 1 adderss  but this in the heap ///

	cout << "Enter A sigemint this " << endl;

	for (int i = 0; i < size; ++i)//++i
	{
		cout << "Styudant : " << i + 1;
		cin >> *(ptr + i);
	}
	cout << "\n________________________________________" << endl;
	for (int h = 0; h < size; ++h)//++h
	{
		cout << " Studant "  << (h + 1)<<" : " << *(ptr + h) << endl;

	}
	cout << "\n________________________________________" << endl;


	delete []ptr;

		


	cout << "Done Delete:)";
	
}
int main()
{
	F1(readS());
	

}