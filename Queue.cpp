#include<queue>
#include<iostream>
using  namespace std;

class QueueThis
{
public:

 queue<string>MQ()
   {
    queue<string > Qm;
    Qm.push("Samy");
    Qm.push("Hatem");
    Qm.push("Mostfa");
    Qm.push("Sleam");
    return Qm;
   }
   void Shwing()
   {
     queue<string>IQ = MQ(); 
     cout<<"\nSize:>>>" <<IQ .size(),"\n";
     cout<<"\nFront:>>>  " <<IQ.front(),"\n";/// 
     cout<<"\nBack:>>> " << IQ.back(),"\n";
     cout<<"\n==========={List}============"<<endl;
     while (!IQ.empty())///This
    {
        cout<<"I'M (: ( "<<IQ.front()<< " ) "<<endl;
       IQ.pop();
    }
    }
 };


int main()
{
QueueThis t;

    system("pause>null");
        return 0;

}