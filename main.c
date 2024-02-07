#include <stdio.h>


int age(int x)
{
 if (x >= 18) 
    return 1;
 else 
    return 0;
}

void affichage (int x)
{
  if(age(x) ==1)
    printf("%d: Majeur\n ", x);
  else
    printf("%d: Mineur\n ", x);
}

int main()
{
    affichage(age(18));
     
 }

