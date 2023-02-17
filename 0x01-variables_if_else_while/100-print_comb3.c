#include <stdio.h> 
  
 /** 
  *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01) 
  * 
  *Return: Always 0 (Success) 
  */ 
  
 int main(void) 
 {

	 int d, p;

	 for (d = '0'; d < '9'; d++)
	 {

	 for (p = d + 1; p <= '9';)
	 {
	 if (p != d)
	 {
	 putchar(d);
	 putchar(p);
	 if (d == '8' && p == '9')
	 continue;
	 putchar(',');
	 putchar(' ');
	 }
	 }
	 }
	 putchar('\n');
	 return (0);
}
