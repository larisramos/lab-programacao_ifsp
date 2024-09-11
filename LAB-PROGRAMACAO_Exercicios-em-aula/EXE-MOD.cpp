#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variaveis
    int num, mod;
    
    //Pedido de inserção de dados ao usuario
    cout<<"Digite um número positivo"<<endl;
    
    //Inserindo o número
    cin>>num;
    
    //Calculo do modulo
    mod=num%2;
    
    //Condicional
    if(mod==0){
      cout<<"O número digitado é par!";
    } else{
      cout<<"O número digitado é impar!";
    }
    
    //ALTERNATIVA
    /*
    cout<<((num%2==0)?2"PAR":"impar")<<endl;
    */
    
    return 0;
}
