#include <stdio.h>

/*/
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

/*/

/*/int equal(int a, int b)
{
 if (a == b) 
    return 1;
 else 
    return 0;
}

void affich (int x)
{
  if(equal(x) ==1)
    printf("%d: Equal\n",x);
  else
    printf("%d: not equal\n",x);
}

int main()
{
    affich(equal(18, 18));
     
 }
 /*/



int somme(int n){
  int sum=0;
  int i = 0;
    while(i <= n){
        sum=sum+i;
        printf(" sum=%i | i = %i",sum,i);
        i++;
    }
    return sum;
}

int main(){
  int total = 0;
  total=somme(3);
  printf ("%i\n",total);
  
}

