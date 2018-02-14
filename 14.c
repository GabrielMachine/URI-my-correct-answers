#include<stdio.h>
#include<math.h>
int main(){

  int dist;
  float gas,result;

  scanf("%d",&dist);
  scanf("%f",&gas);
  gas=round(gas*10)/10;
  result=dist/gas;
  printf("%.3f km/l\n",result );


}
