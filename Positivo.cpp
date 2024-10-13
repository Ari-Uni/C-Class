#include<iostream>
using namespace std; //evito agregar el std a todos los cin y cout
int main (){
	float num=0;
	cout<<"Ingrese un numero: " ;
	cin>>num;
	if (num==0){
		cout<<"El numero  " <<num<<" es 0 \n";
		}
		else{
	if (num>0){
		cout<<"El numero  " <<num<<" es positivo \n";
		}
	else{
	cout<<"El numero " <<num<<" es negativo \n";
	}
	
		}
return 0;
}

