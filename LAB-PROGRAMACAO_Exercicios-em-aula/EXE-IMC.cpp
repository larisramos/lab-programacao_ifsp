#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	//Declaracao de variaveis
	double imc, altura, peso;
	
	//Entrada da altura do usuario
	cout<<"Informe a sua altura"<<endl;
	
	cin>>altura;
	
	cout<<"Informe a sua peso"<<endl;
	
	cin>>peso;
	
	if(altura<=0 || peso<=0){
		cout<<"Numeros devem ser positivos!";
	} else{
		//Calculo IMC
		imc=peso/(altura*altura);
		
		if(imc<=18.5){
		cout<<"IMC = Abaixo do peso!";
		} else if(imc>18.5 && imc<=29.9){
			cout<<"IMC = Normal!";
		} else if (imc>=29.9 && imc<=34.9){
			cout<<"IMC = OBESIDADE I";
		}
	}
	return 0;
}


