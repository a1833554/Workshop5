#include <string>
#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){




int *arr ;
arr = readNumbers();
int *reversearr;
reversearr = reverseArray(arr,10) ;

if(equalsArray(arr,reversearr,10) == 1){
    std::cout<< "true"<<std::endl;
}else{
    std::cout<<"false"<<std::endl;


}
    delete[] arr;
    delete[] reversearr;


}