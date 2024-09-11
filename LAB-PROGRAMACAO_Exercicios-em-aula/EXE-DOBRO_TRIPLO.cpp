#include <iostream>

using namespace std;

int main(){
    double number;
    
    cout<<"Digite um número: "<<endl;
    
    cin>>number;
    
    if(number>0){
           cout<<"O dobro do seu número é = "<<number*2<<endl;
    } else {
           cout<<"O triplo do seu número é = "<<number*3<<endl;
           }
    return 0;
}
