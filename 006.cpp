#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    
    //vars n_1,n_2,n_3,MEDIA:
    double n_1, n_2,n_3, MEDIA;
    cin>>n_1;
    cin>>n_2;
    cin>>n_3;
    MEDIA= (n_1*2+n_2*3+n_3*5)/10.0;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<MEDIA<<"\n";
 
    return 0;
}
