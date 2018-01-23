#include<iostream>
#include<iomanip>

using namespace std;
int main(){

//data
int hour, number;
float salary,total;

//input

cin>>number;
cin>>hour;
cin>>salary;

total= hour*salary;
//output

cout<<"NUMBER = "<<number<<"\n";
cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<total<<"\n";

return 0;
}
