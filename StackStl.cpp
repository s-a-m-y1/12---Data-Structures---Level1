#include<iostream>
#include<stack>
using namespace std;

stack<int>StkSM()
{
    stack<int>StkS;
   /// Last In First Out :)
  StkS.push(1);///this is last 
  StkS.push(2);///this is Scound
  StkS.push(3);///this is First 
  return StkS;
}
void Check()
{
    stack<int >S = StkSM();
    while (!S.empty())
    {
        cout<<S.top()<<endl;///this is He answers This last  3 but THis first (:
      S.pop();/// this Remove Eliment or Index This Top ////
    }
    

}
int main()
{
Check();
system("pause>null");
return 0;
}