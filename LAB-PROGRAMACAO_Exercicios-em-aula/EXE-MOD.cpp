#include <iostream>

using namespace std;

int main(){
    
    //Declara��o de variaveis
    int num, mod;
    
    //Pedido de inser��o de dados ao usuario
    cout<<"Digite um n�mero positivo"<<endl;
    
    //Inserindo o n�mero
    cin>>num;
    
    //Calculo do modulo
    mod=num%2;
    
    //Condicional
    if(mod==0){
      cout<<"O n�mero digitado � par!";
    } else{
      cout<<"O n�mero digitado � impar!";
    }
    
    //ALTERNATIVA
    /*
    cout<<((num%2==0)?2"PAR":"impar")<<endl;
    */
    
    return 0;
}
