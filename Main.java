import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner lector = new Scanner(System.in);
		
		int n1,n2;
		boolean MCD = false;
		
		while (true ){
		    System.out.println("En una frutería quieren colocar aguacates y peras en bandejas iguales, sin mezclar las frutas y sin que sobre ninguna. ");
		    System.out.println("Ingrese el número de aguacates : ");
		    n1 = lector.nextInt();
		    System.out.println("Ingrese el número de peras: ");
		    n2 = lector.nextInt();
		    
		    if(n1 > 0 && n2 > 0 && n1 != n2){
		        
		        if(n1>n2){
		            int aux = n1;
		            n1 = n2;
		            n2 = aux;
		        }
		        int i = n1;
		        
		     while( !MCD && i >= 1){
		         
		         if (n1 % i == 0 && n2 % i == 0){
		             
		             System.out.println("El número de bandejas es:" + i );
		             MCD = true;
		         }
		         else{
		             
		             i--;
		         }
		  
		        
		      
		    }
		    
		
	}
}
}
}
