  #include<iostream>
using namespace std; 
int main (){
	float sum;
	float n1=0,n2=0;
	float resta;
	float multi,div,area;
	int e,n;
  float suma = 0, numero;
  
  cout<<"Eliga una opcion \n " ;
  cout<<"1.Suma \n " ;
   cout<<"2.Resta \n " ;
	 cout<<"3.Multplicacion \n " ;
	 cout<<"4.Division \n " ;
	 cout<<"5.Promedio \n " ;
	 cout<<"6.Area del circulo \n " ;
	 cout<<"7.Salir \n " ; 
	 cin>>e;
	 
switch (e){
	case 1: cout<<"Ingrese el primer numero entero: " ;
	cin>>n1;
	cout<<"Ingrese el segundo numero entero: " ;
	cin>>n2;
	suma = n1+n2;
	cout <<"la suma es: "<<suma<<"\n";
	break;
	
	case 2: cout<<"Ingrese el primer numero entero: " ;
	cin>>n1;
	cout<<"Ingrese el segundo numero entero: " ;
	cin>>n2;
		resta = n1-n2;
		cout <<"la resta es: "<<resta<<"\n";
		break;
		
		case 3: cout<<"Ingrese el primer numero entero: " ;
	cin>>n1;
	cout<<"Ingrese el segundo numero entero: " ;
	cin>>n2;
		multi = n1*n2;
		cout <<"la multiplicacion es: "<<multi<<"\n";
		break;
		
		case 4: cout<<"Ingrese el primer numero entero: " ;
	cin>>n1;
	cout<<"Ingrese el segundo numero entero: " ;
	cin>>n2;
		if (n2==0){
		cout<<"Error, division entre 0 \n";
	}
	else {
	div = n1/n2;
	cout <<"la division es: "<<div<<"\n";}
		break;

		case 5: cout << "Ingrese la cantidad de numeros : ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: la cantidad de números debe ser mayor que 0." << endl;
    }
		else{
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma += numero;
    }
  

    double promedio = suma / n;


    cout << "El promedio de los " << n << " numeros es: " << promedio << endl;
	}
		break;
	case 6: cout<<"Ingrese el radio del circulo: " ;
	cin>>n1;
	area = (n1*n1)*3.1416;
	cout <<"El area: "<<area<<"\n";
			break;
		case 7: cout<<"Salio del programa " ;
		default: "Sistema finalizado";
	
}
 return 0;
}

