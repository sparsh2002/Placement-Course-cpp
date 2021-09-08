#include <iostream>
using namespace std;
 
//Swap function to swap 2 numbers
void swap(int *num1, int *num2) {
   int temp;
   //Copy the value of num1 to some temp variable
   temp = *num1;
 
   //Copy the value of num2 to num1
   *num1 = *num2;
 
   //Copy the value of num1 stored in temp to num2
   *num2 = temp;
}
 
int main() {
   
   int num1, num2;
 
   //Inputting 2 numbers from user
   cin>>num1 >> num2;
   //Passing the addresses of num1 and num2
   swap(&num1, &num2);
 
   //Printing the swapped values of num1 and num2
  cout << num1 << " "<< num2;
 
   return (0);
}
 