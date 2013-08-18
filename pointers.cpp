/* 
 
  References and Pointers                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                       
  While going through last section, some one with good knowledge of pointers
  could ask that the same thing can be done through pointers also. If this
  is what struck your mind then you are correct. We can achieve the same
  through the use of pointers also but references are far more simplified
  than using pointers.
                                                                                                                                                                                                                                                                                                                       
  Though the fact is references are implemented internally in the language
  through pointers only but the sole purpose of bringing in references in
  C++ is to leave aside the confusion of pointers.                                                                                                                      
                                                                                                                                                                                                                                                                                                                       
  Here are some of the points that describe why using references is easier :                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                       
    References can be used like normal variables                                                                                                                                                                                                                                                                       
    Memory management of references left up to compiler                                                                                                                                                                                                                                                                
    Much cleaner and readable code                                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                                                       
  You can see the difference between readability and cleanliness of code in 
  the following example that swaps two variables using references and pointers 
  both.                                                                                                                                                           
 
*/


#include <iostream>

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

    return;
}

int main(void)
{
   int a = 10;
   int b = 20;

   std::cout<< "\npointers...";

   std::cout<< "\na = "<< a <<"\n"<<"b = "<<b<<"\n";

   swap(&a,&b);

   std::cout<< "After swap";
   std::cout<< "\na = "<< a <<"\n"<<"b = "<<b<<"\n\n";

   return 0;
}