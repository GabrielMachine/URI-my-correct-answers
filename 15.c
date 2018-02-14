#include<stdio.h>
#include<math.h>
int main(){

  double x1,x2,y1,y2,result;
  scanf("%lf",&x1);
  scanf("%lf",&y1);
  scanf("%lf",&x2);
  scanf("%lf",&y2);
  x1=round(x1*10)/10;
  x2=round(x2*10)/10;
  y1=round(y1*10)/10;
  y2=round(y2*10)/10;
  result=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  printf("%.4f\n",result );


}
