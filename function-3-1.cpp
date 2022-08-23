

#include <string>
#include <iostream>


int *readNumbers(){

   int *arr; 
   arr = new int[10];
   for (int i = 0; i < 10; i++){
    std::cout<< "Enter Number "<< i <<": ";
     std::cin>>arr[i];

   }
   return arr;
}
bool equalsArray(int *numbers1,int *numbers2,int length){
int sum = 0;
for (int i = 0; i< length; i++){
    if (numbers1[i]==numbers2[i]){
        sum = sum + 1;
    }
}
if (sum == length){
    return true;
}else{
    return false;
}



}