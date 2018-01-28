#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){

double volume,pi=3.14159,r;

cin >> r;

volume=pow(r,3)*(4/3.0)*pi;

cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<"\n";
return 0;

}
