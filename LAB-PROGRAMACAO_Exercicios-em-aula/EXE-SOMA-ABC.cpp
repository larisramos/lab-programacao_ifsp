#include <iostream>

using namespace std;

int main(){
    double numberA, numberB, numberC, soma;
    
    cout<<"Informe o primeiro valor"<<endl;
    
    cin>>numberA;
    
    cout<<"Informe o segundo valor"<<endl;
    cin>>numberB;
    
    cout<<"Informe o terceiro valor"<<endl;
    cin>>numberC;
    
    soma=numberA+numberB;
    
    if(soma>numberC){
               cout<<"A soma de A+B � maior que C! O valor da soma � ="<<soma;
    }else{
          cout<<"A soma de A+B � menor que C, o valor da soma � = "<<soma;
          }
    
    return 0;
}
