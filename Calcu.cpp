  #include<iostream>
using namespace std; //evito agregar el std a todos los cin y cout
int main (){
	float suma;
	float n1=0,n2=0;
	float resta;
	float multi,div;
	
	cout<<"Ingrese el primer numero entero: " ;
	cin>>n1;
	cout<<"Ingrese el segundo numero entero: " ;
	cin>>n2;
	
	suma = n1+n2;
	resta = n1-n2;
	multi = n1*n2;
	if (n2==0){
		cout<<"Error, division entre 0 \n";
		cout <<"la suma es: "<<suma<<"\n";
	cout <<"la resta es: "<<resta<<"\n";
	cout <<"la multiplicacion es:"<<multi<<"\n";
	}// if
	else {
	div = n1/n2;
	cout <<"la suma es: "<<suma<<"\n";
	cout <<"la resta es: "<<resta<<"\n";
	cout <<"la multiplicacion es:"<<multi<<"\n";
	cout <<"la division es: "<<div<<"\n";
}
return 0;
}
