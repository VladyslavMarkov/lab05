#include <stdio.h>

int main()
{
   
   int a, b, i, max;
   
   a = 20;
   b = 1;
   i = 2;
   max = 2;
   
   do
   {
       b++;
       
       while(b%i != 0 && b%2 != 0 && b%3 != 0 && b%5 != 0 && b%7 != 0)
       {
           i++;
       }
       if(b == i && b > max)
       {
          max = b;      
       }      
   }
   while(a > b);
  
   
      return 0;
}
