#include <iostream>

using namespace std;

int main(){
	
	//Declaracao de variaveis
	double media;
	
	// Pedir para usuario informar uma media
	cout <<"Informar o valor da media"<<endl;
	
	//O usuario vai informar media
	cin>>media;
	
	/*Se o aluno tiver media maior ou igual a 6 o aluno estara aprovado
	Caso contrario, estara reprovado!
	*/

	/*
	if(media>=6){
		cout<<"Aprovado"<<endl;	
	} else{
		cout<<"Reprovado"<<endl;
	}
	*/
	
	if (media <2){
		cout<<"Nota E";
	} else if (media>=2 && media<5){
		cout<<"Nota D";
	} else if (media>=5 && media<7) {
		cout<<"Nota C";
	} else if (media>=7 && media<9){
		cout<<"Nota B";
	} else if (media>=9){
		cout<<"Nota A";
	}
	
	return 0;
}


