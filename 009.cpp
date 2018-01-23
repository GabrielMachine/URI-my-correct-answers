#include<iostream>
#include<iomanip>

using namespace std;
int main(){

//data
string nome;
double salary,tot;
double total;

//input

getline(cin, nome);
cin>>salary;
cin>>tot;

total= (tot*0.15)+salary;
//output


cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<"\n";

return 0;
}
