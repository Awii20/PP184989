#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   printf("Wpisz 2 liczby: ");
   scanf("%d %d", &a, &b);
   int kwadrat = (a+b) * (a+b);
   printf("%d", kwadrat);
   return 0;

}
