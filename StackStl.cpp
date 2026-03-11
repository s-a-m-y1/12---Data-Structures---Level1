#include<iostream>
#include<stack>
using namespace std;

stack<int>StkSM()
{
    stack<int>StkS;
   /// Last In First Out :)
  StkS.push(1);///this is last // o(1) const
  StkS.push(2);///this is Scound o(1) const
  StkS.push(3);///this is First  o(1) const
  return StkS;
}
void Check()
{
    stack<int >S = StkSM();
    cout<<"Total Size IS > "<<S.size()<<endl;
    while (!S.empty()) /// O    (N)
    {
        cout<<S.top()<<endl;///this is He answers This last  3 but THis first (:   o(1) const
      S.pop();/// this Remove Eliment or  This Top ////  o(1) const
    }
}

int main()
{
     Check();
system("pause>null");
return 0;
}