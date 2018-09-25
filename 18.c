#include<stdio.h>
#include<math.h>

int main(){

  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
  float valor,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
  printf("Digite o valor\n");
  scanf("%f", &valor);
  if(valor>=0 && valor<=1000000){

    n1=valor/100;
    r1=fmod(n1,100);







    //printing

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00 \n", n1 );
  }

}
