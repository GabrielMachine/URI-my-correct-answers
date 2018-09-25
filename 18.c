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
    printf("%f\n",r1);
       





    //printing
/*
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
*/
  }

}
