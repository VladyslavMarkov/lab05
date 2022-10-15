#include <stdio.h>

int main()
{
   int a, i, max;
   a = 20;
   i = 2;
   max = 2;
   
   for(int b = 2; a > b; b++)
 {      
     while(b%i != 0 && b%2 != 0 && b%3 != 0 && b%5 != 0 && b%7 != 0)
       {
           i++;
       }
       if(b == i && b > max)
       {
          max = b;      
       }      
     
 }
      return 0;
}
