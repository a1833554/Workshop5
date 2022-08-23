#include <string>
#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers,int length) ;

int main(){




int *arr ;
arr = readNumbers();
printNumbers(arr, 10);

//for(int i = 0; i < 10; i++){
//std::cout<<*(arr+i)<<std::endl;
//}

}