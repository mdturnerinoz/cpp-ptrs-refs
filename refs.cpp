// Though references are fairly easy to understand and use, there are some points 
// take care of :
//
// * Do not initialize a reference variable with a constant value. This means int 
//   &var = 10 is not a valid initialization.
// * Do not return a reference from a function as the memory address that is 
//   referred by the reference variable would scope out once the function is done it?s execution.
// * Avoid using references to variables whose memory are dynamically allocated 
//   as it might create unnecessary confusion regarding the clean-up of that memory.
//

#include <iostream>

void swap(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    return;
}

int main(void)
{
   int a = 10;
   int b = 20;

   std::cout<< "\nrefs...";

   std::cout<< "\na = "<< a <<"\n"<<"b = "<<b<<"\n";

   swap(a,b);

   std::cout<< "After swap";
   std::cout<< "\na = "<< a <<"\n"<<"b = "<<b<<"\n\n";

   return 0;
}