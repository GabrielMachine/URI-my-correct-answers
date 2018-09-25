#include<stdio.h>
#include<math.h>

int main(){

  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
  float valor,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
  printf("Digite o valor\n");
  scanf("%f", &valor);
  if(valor>=0 && valor<=1000000){

    n1=valor/100;
    r1=fmod(n1,100);
    n2=r1/50;
    r2=fmod(r1,50);
    n3=r2/20;
    r3=fmod(r2,20);
    n4=r3/10;
    r4=fmod(r3,10);
    n5=r4/5;
    r5=fmod(r4,5);
    n6=r5/2;
    r6=fmod(r5,2);







    //printing

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00 \n", n1 );
    printf("%d nota(s) de R$ 50.00 \n", n2 );
    printf("%d nota(s) de R$ 20.00 \n", n3 );
    printf("%d nota(s) de R$ 10.00 \n", n4 );
    printf("%d nota(s) de R$ 5.00 \n", n5 );
    printf("%d nota(s) de R$ 2.00 \n", n6 );
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00 \n", n7 );
    printf("%d moeda(s) de R$ 0.50 \n", n8 );
    printf("%d moeda(s) de R$ 0.25 \n", n9 );
    printf("%d moeda(s) de R$ 0.10 \n", n10 );
    printf("%d moeda(s) de R$ 0.05 \n", n11 );
    printf("%d moeda(s) de R$ 0.01 \n", n12 );
  }

}
