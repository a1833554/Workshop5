#include <string>
#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length) ;

int main(){




int *arr ;
arr = readNumbers();
int *reversearr;
reversearr = reverseArray(arr,10) ;
for (int i = 0; i<10; i++){
    std::cout<<reversearr[i]<<std::endl;
}
}