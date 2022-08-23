#include <string>
#include <iostream>


int *readNumbers(){

   int *arr; 
   arr = new int[10];
   for (int i = 0; i < 10; i++){
     std::cin>>arr[i];

   }
   return arr;
}

int *reverseArray(int *numbers1,int length){
int *arr2;
arr2 = new int[10];
for(int i = 0; i < length; i++){
    arr2[i] = numbers1[length-i-1];

}
return arr2;
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