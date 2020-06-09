#include <iostream>
#include <iomanip> 
#include<cmath>
using namespace std;
 
int main() {
 
    //pi and radius:
    double pi= 3.14159;
    double radius;
    cin>>radius;
    //Area:
    double area;
    area=pi*pow(radius,2);
    cout<<fixed<<setprecision(4)<<"A="<<area<<"\n";
 
    return 0;
}
