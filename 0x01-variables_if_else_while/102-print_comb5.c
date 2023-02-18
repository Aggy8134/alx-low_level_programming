#include <stdio.h> 
  
 /** 
  *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01) 
  * 
  *Return: Always 0 (Success) 
  */ 
  
 int main(void) 
 {
         int p q; 

         for (p = o; p <= 98; p++) 
         {

         for (q = p + 1; q <= 99; q++) 
         {
         putchar((p / 10) + '0');
	 putchar ((p % 10) + '0');		 
         putchar (' '); 
         putchar ((q / 10) + '0');
	 putchar((q % 10) + '0');
         if (p == 98 && q == 99)
         continue;                {
	 putchar(','); 
         putchar(' ');
         } 
         } 
         putchar('\n'); 
  
         return (0); 
 
 }
