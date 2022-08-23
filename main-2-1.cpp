#include <iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length) ;

int main(){
int *numbers;



int *arr ;
arr = readNumbers();
hexDigits(arr, 10);
}