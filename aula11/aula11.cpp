#include <iostream>

using namespace std;

#define tam 5

int pesquisaBinaria(int *array, int procurado){
	int li=0;
	int ls=tam-1;
	int meio,chute;
	while(li<=ls){
		meio=(li+ls)/2;
		chute=array[meio];
		if(chute==procurado)
			return meio;
		if(chute>procurado)
			ls=meio-1;
		else{
			li=meio+1;
		}
	}
	return -1;
}

int main(){
	int lista []={1,3,5,6,7};
	int procurado;
	cout<<"Digite o valor procurado: ";
	cin>>procurado;
	cout<<"Posicao: "<<pesquisaBinaria(lista,procurado)<<endl;
	return 0;
}
