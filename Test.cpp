#include<iostream>
#include<vector>
using namespace std;
void printAllPairs(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {         // اللوب الأم (بتمشي n مرات)
        for (int j = 0; j < n; j++) {     // اللوب البنت (بتمشي n مرات لكل لفة من الأم)
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}
/*
this is counter  this cuclater this oprthen  = 1+2+400+400 = 803
السايكل الي هتمش اولا ال n =size 
التاني هيهسيا ال لوب المتفيرا\
ثاثلن الوب الاوليه هتمي20 خطوا 
والثانيه همي 20 في كل لفه يعنش  ال i = 1 ال j=12334567الخ يبفي هنضري ال    
(20*20)=400
+كمان 400 عنبه طباعه بعمس 
*/
int main()
{
    vector<int>VInr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printAllPairs(VInr);
    system("pause>null");
    return 0;
}