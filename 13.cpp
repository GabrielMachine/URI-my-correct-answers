#include<iostream>
#include<cmath>

using namespace std;

int maior(int x,int y){

return (x+y+abs(x-y))/2;

}
int main(){

int a,b,c,d,e;
cin>>a;
cin>>b;
cin>>c;
d=maior(a,b);
e=maior(c,d);
cout<<e<<" eh o maior"<<"\n";
}
