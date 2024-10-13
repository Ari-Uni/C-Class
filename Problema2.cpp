#include<iostream>
using namespace std;
int main (){
	int n=0,i=0,suma =0, multi =1;
	cout<<"Ingrese un numero: " ;
	cin>>n;
		if (n>10){
	  for( i=1; i<10;i++)
	multi=multi*i;
	cout<<" \n La multi es: "<<multi;
}
	 
	else{
	for(i=0; i<=n;i++)
	suma=suma+i;}
	 cout<<" \n La suma es: "<<suma;
		return 0;

}

