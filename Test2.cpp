#include<iostream>
using namespace std;
char GetLastCharacter2(string S1)
{
if ( S1.length()!=0 )
{
return S1[S1.size()-1] ;
}
else
{
    return ')';
}
}
int main()
{
   cout<< GetLastCharacter2("samy")<<endl;
   system("pause>null");
    return 0;
}