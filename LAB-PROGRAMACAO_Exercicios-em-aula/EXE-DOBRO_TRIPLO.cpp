#include <iostream>

using namespace std;

int main(){
    double number;
    
    cout<<"Digite um n�mero: "<<endl;
    
    cin>>number;
    
    if(number>0){
           cout<<"O dobro do seu n�mero � = "<<number*2<<endl;
    } else {
           cout<<"O triplo do seu n�mero � = "<<number*3<<endl;
           }
    return 0;
}
