#include <iostream>

using namespace std;

# define tam 5

int main(){
	int array[5];
	for(int i=0;i<tam;i++){
		cin>>array[i];
	}
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
