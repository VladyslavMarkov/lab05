#include <stdio.h>

int main()
{
   
   int a, b, i, max;//Задаємо діапозон та макісмальне число
   
   a = 20;
   b = 1;
   i = 2;
   max = 2;
   
   while(a > b)//Запуск циклу для перевірки чисел у встановленому діапазоні
   {
       b++;
       
       while(b%i != 0 && b%2 != 0 && b%3 != 0 && b%5 != 0 && b%7 != 0) //Запуск циклу для того, щоб дізнатися число просте чи ні
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
