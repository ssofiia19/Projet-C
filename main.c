#include <stdio.h>



//int research(int t[], )
int main(){
chose_region();
}


int regions()
{
   int r[] = { 1,3,69,15,26};
    //int i[]={75,92,77,78,93};
      printf("%d\n",r[3]);
}

void chose_region()
{
  int r[] = { 1,3,69,15,26};

    int x;
  
  for (x = 0; r[x]!='\0'; x++) {
    printf("%d\n", r[x]);
  }
  
 // for (i = 0; i < n; i++);
}
















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

////////////////////////////////////////////////////////////////


int equal(int a, int b)
{
 if (a == b) 
    return 1;
 else 
    return 0;
}

void affich (int x)
{
  if((x) ==1)
    printf("%d: Equal\n",x);
  else
    printf("%d: not equal\n",x);
}



///////////////////////////////////////////////////////////////////////::



int somme(int n){
  int sum=0;
    while(n > 0){
        sum=sum+n;
        n--;
        printf("sum");
    }
    return sum;
}

/////////////////////////////////////////////////////////////////////////////////////////////::
int factorielle(int n);


int factorielle(int n){
if (n>0)
  return n*factorielle(n-1);
else
  return 1;
}
///////////////////////////////////////////////////////////


//int main(){
//int t[12];
//t[0] = 2;
//t[1] = 3;
//t[2] = 4;
//t[3] = 5;
//printf("%d\n",t[2]);
//}

////////////////////////////////////////////////////////////////////////////







int display(){
  int i;
  for (i = 0; i < 6; i++) {
   // printf("%d\n", t[0]);
  }
}

////////////////////////////////////////////////////////////////////////////







