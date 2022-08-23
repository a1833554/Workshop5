
#include <string>
#include <iostream>
using namespace std;

int *readNumbers(){

   int *arr; 
   arr = new int[10];
   for (int i = 0; i < 10; i++){
    cout<< "Enter Number: ";
     cin>>arr[i];

   }
   return arr;
}

void hexDigits(int *numbers,int length){
    for (int i = 0; i < length; i++){
switch (numbers[i]){
case 1:
::cout<<i<<" "<<numbers[i]<<" 1"<<endl;
break;
case 2:
cout<<i<<" "<<numbers[i]<<" 2"<<endl;
break;
case 3:
cout<<i<<" "<<numbers[i]<<" 3"<<endl;
break;
case 4:
cout<<i<<" "<<numbers[i]<<" 4"<<endl;
break;
case 5:
cout<<i<<" "<<numbers[i]<<" 5"<<endl;
break;
case 6:
cout<<i<<" "<<numbers[i]<<" 6"<<endl;
break;
case 7:
cout<<i<<" "<<numbers[i]<<" 7"<<endl;
break;
case 8:
cout<<i<<" "<<numbers[i]<<" 8"<<endl;
break;
case 9:
cout<<i<<" "<<numbers[i]<<" 9"<<endl;
break;
case 10:
cout<<i<<" "<<numbers[i]<<" A"<<endl;
case 11:
cout<<i<<" "<<numbers[i]<<" B"<<endl;
break;
case 12:
cout<<i<<" "<<numbers[i]<<" C"<<endl;
break;
case 13:
cout<<i<<" "<<numbers[i]<<" D"<<endl;
break;
case 14:
cout<<i<<" "<<numbers[i]<<" E"<<endl;
break;
case 15:
cout<<i<<" "<<numbers[i]<<" F"<<endl;
break;

default:
cout<<i<<" "<<numbers[i]<<" Not a Hex"<<endl;


}
}
}

