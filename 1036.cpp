#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
    
    double a,b,c,delta,R1,R2;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    delta = pow(b,2.0) - 4.0*a*c;
    if(delta < 0.0 || a == 0.0){
        std::cout << "Impossivel calcular"<<"\n";
    }
    else{
        R1 = (-b+sqrt(delta))/(2*a);
        R2 = (-b-sqrt(delta))/(2*a);
        std::cout << "R1 = " << std:: fixed << std::setprecision(5) << R1 << "\n";
        std::cout << "R2 = " << std::fixed <<std::setprecision(5) << R2 << "\n";
    }
    return 0;
}
