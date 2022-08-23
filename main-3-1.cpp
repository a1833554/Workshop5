#include <string>
#include <iostream>

extern int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){




int *arr1 ;
int *arr2 ; 

arr1 = readNumbers();
arr2 = readNumbers();

if(equalsArray(arr1,arr2,10) == 1){
    std::cout<< "true"<<std::endl;
}else{
    std::cout<<"false"<<std::endl;


}
    delete[] arr1;
    delete[] arr2;
}