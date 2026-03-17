#include<iostream>
using namespace std;


void TDARRATS( int arr[3][3] ,   short Row  , short cols )
{
   
    int sum =0;
   for (int i = 0; i < Row; i++)
   {
    for (int j = 0; j < cols; j++)
    {
       sum+= arr[i][j];
    }
    
   }
   cout<<"Total "<< sum<<endl;
}


int main()
{//     r  c     1              2           3 


system("pause>null");
}