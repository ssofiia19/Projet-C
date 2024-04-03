#include <stdio.h>
#include "functions.h"

/*
int regions()
{
   int r[] = { 1,3,69,15,26};
    //int i[]={75,92,77,78,93};
      printf("%d\n",r[3]);
}

int display(){
  int i;
  for (i = 0; i < 6; i++) {
   //printf("%d\n", t[0]);
  }
}

int factorielle(int n){
if (n>0)
  return n*factorielle(n-1);
else
  return 1;
}

int somme(int n){
  int sum=0;
    while(n > 0){
        sum=sum+n;
        n--;
        printf("sum");
    }
    return sum;
}

void affich (int x){
  if((x) ==1)
    printf("%d: Equal\n",x);
  else
    printf("%d: not equal\n",x);
}

int equal(int a, int b)
{
 if (a == b) 
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

int age(int x)
{
 if (x >= 18) 
    return 1;
 else 
    return 0;
}
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void show_region(int region[])
{
    int x;
  
  for (x = 0; x<20; x++) {
    printf("%d\n", region[x]);
  }
  
}



int research(int region[20])
{
  int i;
  int x;
  printf("Type a number: \n");
  scanf("%d", &x);
  for (i=0; i<20; i++)
  {
    if (region[i]==x)
    {
        return  1;
    }
     
  }

  return 0;
}


int ajouter_dep(int region[])
{
    int value;
    int i;

  printf("Type a value to insert: \n");
  scanf("%d",&value); 

  for (i=0; i<20; i++)
  {
    if(region[i] == 0)
    {
      region[i] = value;
      return 1;
    }
  }
   return 0;   
 }




int suprimer_dep(int region[])
{
 int departm;
    int x;

  printf("Type a departement to delete: \n");
  scanf("%d",&departm); 

  for (x=0; x<20; x++)
  {
    if(departm == region[x]){
        printf("\n\n");
      region[x] = 0;
      return 1;
    }
  }
   return 0;   
}






 // for (i = 0; region[i]!='\0'; i++){
    // region[i+1] = region[x];
    // region[x]=value;
