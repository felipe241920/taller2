/*programa:taller #2
  autor:felipe heano
  fecha:19/02/2019
*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//funcion principal
int main() 
    {   
	int opcion=0,n=1;
    char op,cadena[10];
	//menu
	while(n!=0)
	{
		
    
	printf("********menu********\n\n");
    printf("1. sorpresa\n");
	printf("2. ciclo if\n");
	printf("3. ciclo while\n");
	printf("4. ciclo do while\n");
	printf("5. ciclo for\n");
	printf("6. vectores\n");
	scanf("%d",&opcion);
	system("cls");
	fflush(stdin);
	//diferentes opciones del menu
		switch(opcion)
	    {
		case 1:
			printf("********menu********\n\n");
			printf("a. palabra al reves\n");
			scanf("%c",&op);
			//casos especificos del menu anterior
			switch (op)
			{
				case 'a': 
				fflush(stdin);
				printf("ingrese palabra de 10 letras\n");
				gets(cadena);
				for(int i=9;i>=0;i--)
				{
				   printf("%c",cadena[i]);
				}
				break;
			}
				printf("\n");
				system ("pause");
				system("cls");
				fflush(stdin);
			   
		break;
		
		
		
		case 2: 
			printf("********menu********\n\n");
			printf("a. promedio de notas\n");
			scanf("%c",&op);
			switch (op)
			{
				case 'a': 
					
					float nt,nt2,nt3,prom;
					printf("Ingrese tres notas\n ");
					scanf("\n %f",&nt);
					scanf("\n %f",&nt2);
					scanf("\n %f",&nt3);
					prom=(nt+nt2+nt3)/3;
					printf("\n Promedio Notas %.2f",(nt+nt2+nt3)/3);
					if(prom>=3 && prom<=5){
				
						printf("\n APTO\n");
				
					}else if(prom>=0 && prom<3){
						printf("\n NO APTO\n");
				
					}
					else if(prom<0 || prom>5){
						printf("\n ERROR\n");
				
					}
					break;	
			}
			
				
	            system ("pause");
				system("cls");
				fflush(stdin);
		    
			 
		break;	
			
			
			
		case 3:	
			printf("********menu********\n\n");
			printf("a. numeros pares del 1 al 250\n");
			printf("b. suma de numeros impares del 1 al 50\n");
			scanf("%c",&op);
				switch (op)
				{
					case 'a': 
						{
						int i=1;
						printf("\n Numeros pares hasta el 250");
						while(i!=250)
						{
							i++;
							if(i%2==0)
							{
								printf("\n%d",i);
							}
						}
							system ("pause");
							system("cls");
							fflush(stdin);	
						}
					break;	
					case 'b':
						int d=1,sum=0;
							while(d!=50){
								d++;
								if(d%2==1){
									sum=sum+d;
								}	
						    }
							printf("\n La suma de los numeros impares hasta el 50 es: %d\n",sum);
							system ("pause");
							system("cls");
							fflush(stdin);
					break;
				}	
		break;				
				
				
				
		case 4:
			printf("********menu********\n\n");
			printf("a. numeros al cuadrado\n"); 
			scanf("%c",&op);
			switch (op)
			{
				case 'a':
					int num=0,sumcuad=0;
					char op;
					do{
						num=0;
						printf("\nIngrese un numero para elevarlo al cuadrado: ");
						scanf("%d",&num);
						printf("\nEl cuadrado de este numero es: %d",num*num);
						sumcuad=sumcuad+(num*num);
						printf("\nDesea introducir otro numero?[s/n]: \n");
						fflush(stdin);
						scanf("%c",&op);
					} 
					while(op=='s');
						printf("\nLa suma de los cuadrados calculados es : %d\n",sumcuad);
				    system ("pause");
			        system("cls");
			        fflush(stdin);
				break;
			}   				
		break;	
			
			
			
		case 5:
			printf("********menu********\n\n");
			printf("a. sacar la factorial de un numero\n");
			printf("b. solucionar una serie fibonacci\n");
			scanf("%c",&op);
			switch (op)
			{
			case 'a': 
			{
				int num,fact=1;
				printf("ingrese un numero para sacar su factorial: \n");
				scanf("%d",&num);
				if(num==0){
					printf("El factorial del numero que ingreso es : 1\n");
					}else{
						for(int i=1;i<=num;i++){
							fact=fact*i;
					
						}
						printf("El factorial del numero que ingreso es : %d\n",fact);
					}
				system ("pause");
				system("cls");
				fflush(stdin);	
			break;	
			}	
			case 'b':    
				int i, n, cont = 0;
				int a[100];
				a[0] = 0;
				a[1] = 1;
				printf("Ingrese numero a sacar fibonacci = ");
				scanf("%d",&n);
				for(i=1; i < n; i++){
					a[i+1] = a[i-1] + a[i];
				}
				for(i=0; i < n; i++){
					if (cont == 10){ 					
						cont = 0;           
					}
					printf("\n%d\n",a[i]);
					cont += 1; 
				}
				
				system ("pause");
				system("cls");
				fflush(stdin);
				break;
			}
		break;
			
			
			
		case 6:	
			printf("********menu********\n\n");
			printf("a. sacar media de 10 numeros\n");
			printf("b. 10 nombres al reves\n");
			scanf("%c",&op);
			switch (op)
			{
			case 'a':
				int v[9],suma;
				printf("Ingrese 10 numeros");
				for(int i=0;i<10;i++)
				{
					scanf("%d",&v[i]);
					suma+=v[i];
				}
				printf("la media de los numeros ingresados es %d",suma/10);
				system ("pause");
				system("cls");
				fflush(stdin);	
					break;	
			case 'b':
				char matris[10][5]; 
				printf("Ingrese 10 palabras con 5 caracteres \n"); 
				for(int i=0;i<=9;i++)
				{	fflush(stdin); 
					gets(matris[i]); 
					printf("\n"); 
				} 	
				printf("\n\nPalabras invertidas exitosamente \n\n"); 
				for(int i=0;i<=9;i++)
				{
					for(int e=4;e>=0;e--)
				
				{	
					fflush(stdin);
					printf("%c",matris[i][e]); 
				}
					printf("\n\n"); 
				}
				
				
				
				system ("pause");
				system("cls");
				fflush(stdin);
				break;
			}
			break;	
			
		}
	}
	return 0;
}

