#include<stdio.h>
int main(){
    
    float pi=3.14159,tri,circ,trap,quad,ret;
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    tri=a*c/2.0;
    circ=pi*c*c;
    trap=(a+b)*c/2.0;
    quad=b*b;
    ret=a*b;
    printf("TRIANGULO: %.3f\n",tri);
    printf("CIRCULO: %.3f\n",circ);
    printf("TRAPEZIO: %.3f\n",trap);
    printf("QUADRADO: %.3f\n",quad);
    printf("RETANGULO: %.3f\n",ret);

	return 0;
}
