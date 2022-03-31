#include <stdio.h>

int main(void) {
  int a;
  int licznik=1;
  int liczba=2;
  printf("Wprowadź liczbę: ");
  scanf("%d", &a);
  while(liczba<a)
  {
    licznik+=1;
    liczba=liczba*2;
  }
    if (liczba==a)
    {
      printf("Liczbę 2 nalezy podnieść do potęgi %d",licznik);
    }
    else
    {
      printf("Liczby nie da zapisać się jako potęgę dwójki");
    }
    
  return 0;
}