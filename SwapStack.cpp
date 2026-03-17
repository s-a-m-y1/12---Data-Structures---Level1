#include<iostream>
#include<stack>
using namespace std;
stack<int>Stk1()
{
    stack < int > S1 ;
      S1.push(100);
      S1.push(200);
      S1.push(300);
      S1.push(400);
      S1.push(500);
      return S1;

}
stack<int>Stk2()
{
    stack< int > S2;
    S2.push(600);
    S2.push(700);
    S2.push(800);
    S2.push(900);
    S2.push(1000);
    return S2;

}
// void swaping()
// {
    
// }

void PrintReslt()
{
///Note: The swap does not affect the L Stark, but rather it affects it in the scope of the function.
    stack <int>Sw1 = Stk1();
    stack<int>Sw2 = Stk2();
    Sw1.swap(Sw2);

    while (!Sw1.empty()&&!Sw2.empty())
    {
      cout<<"I'm Stack One >>> " << Sw1.top()<<endl;///this is top elmant he is last psuh 
      Sw1.pop();///Note This manual 
      
      cout<<"I'm Stack Two >>> " << Sw2.top()<<endl;///this is top elmant he is last psuh 
      Sw2.pop();///Note This manual 
      
    }
    

}




int main()
{
    PrintReslt();
    system("pause>null");
    return 0;

}