#include<iostream>
using namespace std;

void countdown(int n) {
    // 1. Base Case: امتى الدالة لازم توقف عشان ما تنزلش للأرقام السالبة للأبد؟
    if (n == 0) {
        return; 
    }   

    // 2. Action: اطبع الرقم الحالي
    cout << n << " ";

   countdown(n-1);
  
}
//السايكل الي بتحصل انو بيشيك علاالشرط الاول ولو متخققش بيقي الرقم مش 0 بيقي اطبع الرقم الجالي ز-1 وكده لجد ما ==0 
int main()
{
  countdown(20);
    system("pause>null");
return 0;
}      