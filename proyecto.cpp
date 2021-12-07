#include "rut.h"
#define nArticulos 20

struct dato
{
	int clave;
	char articulo[40];
	int cant;
	float precio;
};

//elementos globales

//ficheros para cada sucursal
FILE* Asucursal1;
FILE* Asucursal2;
FILE* Asucursal3;
FILE* Asucursal4;

//vectores de 20 articulos para cada sucursal
struct dato sucursal1[nArticulos], sucursal2[nArticulos], sucursal3[nArticulos], sucursal4[nArticulos];

int cargarData(){
	//var locales
	int nDato=-1;
	int i=0, j;
	int control=1;
	
	char linea[80];
	char aux[25];
	
	int control2=0;
	
	//------------------------------------sucursal 1
	Asucursal1=fopen("sucursal1.txt", "rt"); 
	
	if(Asucursal1==NULL){
    	le("Error al cargar los datos de la sucursal 1\n");
	}else{
	
		while (!feof(Asucursal1)) { 
		
			i=0;
			nDato++;
			memset(aux, 0, 25);	
			control=1;
		
	        fgets(linea, 80, Asucursal1); 
	        
	        if (!feof(Asucursal1)) {
		
	        	while(linea[i]!='\n'){
		        		
	        		aux[j]=linea[i];
	        		
	        		j++;
	        		
	        		if(control==1 && linea[i]==','){
	        			sucursal1[nDato].clave=atoi(aux);
	        			control++;
	        			
	        			memset(aux, 0, 25);	
	        			j=0;
					}else if(control==2 && linea[i]==','){
	    				strcpy(sucursal1[nDato].articulo, aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
	    				
					}else if(control==3 && linea[i]==','){
	    				sucursal1[nDato].cant=atoi(aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
					i++;
								
					if(linea[i]=='\n'){
	    				sucursal1[nDato].precio=atof(aux);
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
				}
				
			}
	           	
	    }
		le("Datos de la sucursal 1 cargados CORRECTAMENTE\n"); 
		control2++;
	}
    
	fclose(Asucursal1);
	
	//------------------------------------sucursal 2
	Asucursal2=fopen("sucursal2.txt", "rt"); 
	nDato=-1;
	if(Asucursal2==NULL){
    	le("Error al cargar los datos de la sucursal 2\n");
	}else{
	
		while (!feof(Asucursal2)) { 
		
			i=0;
			nDato++;
			memset(aux, 0, 25);	
			control=1;
		
	        fgets(linea, 80, Asucursal2); 
	        
	        if (!feof(Asucursal2)) {
		
	        	while(linea[i]!='\n'){
		        		
	        		aux[j]=linea[i];
	        		
	        		j++;
	        		
	        		if(control==1 && linea[i]==','){
	        			sucursal2[nDato].clave=atoi(aux);
	        			control++;
	        			
	        			memset(aux, 0, 25);	
	        			j=0;
					}else if(control==2 && linea[i]==','){
	    				strcpy(sucursal2[nDato].articulo, aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
	    				
					}else if(control==3 && linea[i]==','){
	    				sucursal2[nDato].cant=atoi(aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
					i++;
								
					if(linea[i]=='\n'){
	    				sucursal2[nDato].precio=atof(aux);
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
				}
				
			}
	           	
	    }
		le("Datos de la sucursal 2 cargados CORRECTAMENTE\n"); 
		control2++;
	}
    
	fclose(Asucursal2);
	
	//------------------------------------sucursal 3
	Asucursal3=fopen("sucursal3.txt", "rt"); 
	nDato=-1;
	if(Asucursal3==NULL){
    	le("Error al cargar los datos de la sucursal 3\n");
	}else{
	
		while (!feof(Asucursal3)) { 
		
			i=0;
			nDato++;
			memset(aux, 0, 25);	
			control=1;
		
	        fgets(linea, 80, Asucursal3); 
	        
	        if (!feof(Asucursal3)) {
		
	        	while(linea[i]!='\n'){
		        		
	        		aux[j]=linea[i];
	        		
	        		j++;
	        		
	        		if(control==1 && linea[i]==','){
	        			sucursal3[nDato].clave=atoi(aux);
	        			control++;
	        			
	        			memset(aux, 0, 25);	
	        			j=0;
					}else if(control==2 && linea[i]==','){
	    				strcpy(sucursal3[nDato].articulo, aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
	    				
					}else if(control==3 && linea[i]==','){
	    				sucursal3[nDato].cant=atoi(aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
					i++;
								
					if(linea[i]=='\n'){
	    				sucursal3[nDato].precio=atof(aux);
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
				}
				
			}
	           	
	    }
		le("Datos de la sucursal 3 cargados CORRECTAMENTE\n"); 
		control2++;
	}
    
	fclose(Asucursal3);
	
	//------------------------------------sucursal 4
	Asucursal4=fopen("sucursal4.txt", "rt"); 
	nDato=-1;
	if(Asucursal4==NULL){
    	le("Error al cargar los datos de la sucursal 4\n");
	}else{
	
		while (!feof(Asucursal4)) { 
		
			i=0;
			nDato++;
			memset(aux, 0, 25);	
			control=1;
		
	        fgets(linea, 80, Asucursal4); 
	        
	        if (!feof(Asucursal4)) {
		
	        	while(linea[i]!='\n'){
		        		
	        		aux[j]=linea[i];
	        		
	        		j++;
	        		
	        		if(control==1 && linea[i]==','){
	        			sucursal4[nDato].clave=atoi(aux);
	        			control++;
	        			
	        			memset(aux, 0, 25);	
	        			j=0;
					}else if(control==2 && linea[i]==','){
	    				strcpy(sucursal4[nDato].articulo, aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
	    				
					}else if(control==3 && linea[i]==','){
	    				sucursal4[nDato].cant=atoi(aux);
	    				control++;
	    				
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
					i++;
								
					if(linea[i]=='\n'){
	    				sucursal4[nDato].precio=atof(aux);
	    				memset(aux, 0, 25);	
	    				j=0;
					}
					
				}
				
			}
	           	
	    }
		le("Datos de la sucursal 4 cargados CORRECTAMENTE\n"); 
		control2++;
	}
    
	fclose(Asucursal4);
	system("pause");
	
	if(control2==4){
		return 1;
	}else 
		return 0;
}

void infoSucursalDeseada(){
	//var locales
	int opc=0;
	int i=0;
	
	do{
		//submenu
		lim();
		xy(0,10); le("Sub Menu de Informacion por Sucursal\n\n");
		le("*Ingrese 1 Para ver informacion de la sucursal 1\n\n");
		le("*Ingrese 2 Para ver informacion de la sucursal 2\n\n");
		le("*Ingrese 3 Para ver informacion de la sucursal 3\n\n");
		le("*Ingrese 4 Para ver informacion de la sucursal 4\n\n");
		le("*Ingrese 0 Para Para volver al menu principal\n");
		opc=ci("\n->");
		
		lim();
		
		switch(opc){
			case 0:{
				le("Volviendo al menu principal...");
				break;
			}
			
			case 1:{
				xy(0,20); le("Datos Sucursal 1");
				for(i=0;i<nArticulos;i++){
					
					li("\n\nclave: ",sucursal1[i].clave);
					le("\n");
					le(sucursal1[i].articulo);
					li("\ncantidad: ",sucursal1[i].cant);
					lf("\nprecio: ",sucursal1[i].precio);
					
				}
				system("pause");
				break;
			}
			
			case 2:{
				xy(0,20); le("Datos Sucursal 2");
				for(i=0;i<nArticulos;i++){
					
					li("\n\nclave: ",sucursal2[i].clave);
					le("\n");
					le(sucursal2[i].articulo);
					li("\ncantidad: ",sucursal2[i].cant);
					lf("\nprecio: ",sucursal2[i].precio);
					
				}
				system("pause");
				break;
			}
			
			case 3:{
				xy(0,20); le("Datos Sucursal 3");
				for(i=0;i<nArticulos;i++){
					
					li("\n\nclave: ",sucursal3[i].clave);
					le("\n");
					le(sucursal3[i].articulo);
					li("\ncantidad: ",sucursal3[i].cant);
					lf("\nprecio: ",sucursal3[i].precio);
					
				}
				system("pause");
				break;
			}
			
			case 4:{
				xy(0,20); le("Datos Sucursal 4");
				for(i=0;i<nArticulos;i++){
					
					li("\n\nclave: ",sucursal4[i].clave);
					le("\n");
					le(sucursal4[i].articulo);
					li("\ncantidad: ",sucursal4[i].cant);
					lf("\nprecio: ",sucursal4[i].precio);
					
				}
				system("pause");
				break;
			}
			
			default:{
				le("Parametro no valido!!");
				system("pause");
				break;
			}
		}
			
	}while(opc!=0);
}

void ventaTotalPorSucursal(){
	//var locales
	int opc=0;
	int i=0;
	
	float acum=0;
	
	do{
		//submenu
		lim();
		acum=0;
		xy(0,10); le("Sub Menu de Venta Total por Sucursal\n\n");
		le("*Ingrese 1 Para ver Venta Total de la sucursal 1\n\n");
		le("*Ingrese 2 Para ver Venta Total de la sucursal 2\n\n");
		le("*Ingrese 3 Para ver Venta Total de la sucursal 3\n\n");
		le("*Ingrese 4 Para ver Venta Total de la sucursal 4\n\n");
		le("*Ingrese 0 Para Para volver al menu principal\n");
		opc=ci("\n->");
		
		lim();
		
		switch(opc){
			case 0:{
				le("Volviendo al menu principal...");
				break;
			}
			
			case 1:{
				xy(0,20); le("Venta Total Sucursal 1\n\n");
				for(i=0;i<nArticulos;i++){
					
					acum+=sucursal1[i].cant*sucursal1[i].precio;
					
				}
				
				lf("Cantidad Total: ",acum);
				le("\n");
				system("pause");
				break;
			}
			
			case 2:{
				xy(0,20); le("Venta Total Sucursal 2\n\n");
				for(i=0;i<nArticulos;i++){
					
					acum+=sucursal2[i].cant*sucursal2[i].precio;
					
				}
				
				lf("Cantidad Total: ",acum);
				le("\n");
				system("pause");
				break;
			}
			
			case 3:{
				xy(0,20); le("Venta Total Sucursal 3\n\n");
				for(i=0;i<nArticulos;i++){
					
					acum+=sucursal3[i].cant*sucursal3[i].precio;
					
				}
				
				lf("Cantidad Total: ",acum);
				le("\n");
				system("pause");
				break;
			}
			
			case 4:{
				xy(0,20); le("Venta Total Sucursal 4\n\n");
				for(i=0;i<nArticulos;i++){
					
					acum+=sucursal4[i].cant*sucursal4[i].precio;
					
				}
				
				lf("Cantidad Total: ",acum);
				le("\n");
				system("pause");
				break;
			}
			
			default:{
				le("Parametro no valido!!");
				system("pause");
				break;
			}
		}
			
	}while(opc!=0);
}

void ventaMayorMenorPorSucursal(){
	//var locales
	int opc=0;
	int i=0;
	
	int posMe=0;
	int posMa=0;
	
	float mayor=0, menor=99999;
	float dato=0;
	
	do{
		//submenu
		lim();
		xy(0,10); le("Sub Menu de Venta Mayor/Menor por cada Sucursal\n\n");
		le("*Ingrese 1 Para ver Venta Mayor/Menor de la sucursal 1\n\n");
		le("*Ingrese 2 Para ver Venta Mayor/Menor de la sucursal 2\n\n");
		le("*Ingrese 3 Para ver Venta Mayor/Menor de la sucursal 3\n\n");
		le("*Ingrese 4 Para ver Venta Mayor/Menor de la sucursal 4\n\n");
		le("*Ingrese 0 Para Para volver al menu principal\n");
		opc=ci("\n->");
		
		lim();
		
		switch(opc){
			case 0:{
				le("Volviendo al menu principal...");
				break;
			}
			
			case 1:{
				posMe=0;
				posMa=0;
	
				mayor=0;
				menor=99999;
				dato=0;
				
				xy(0,20); le("Venta Mayor/Menor Sucursal 1\n\n");
				for(i=0;i<nArticulos;i++){
					
					dato=sucursal1[i].cant*sucursal1[i].precio;
					
					if(dato<menor){
						menor=dato;
						posMe=i;
					}
					
					if(dato>mayor){
						mayor=dato;
						posMa=i;
					}
					
				}
				
				xy(2,18); le("Producto que tuvo menor ingreso\n");
				lf("\n*Cantidad Total: ",menor);
				
				li("\n*clave: ",sucursal1[posMe].clave);
				le("\n*Articulo: ");
				le(sucursal1[posMe].articulo);
				li("\n*Cantidad total vendidas: ",sucursal1[posMe].cant);
				lf("\n*Precio por unidad: ",sucursal1[posMe].precio);
				le("\n");
				
				xy(11,18); le("Producto que tuvo mayor ingreso\n");
				lf("\n*Cantidad Total: ",mayor);
				
				li("\n*clave: ",sucursal1[posMa].clave);
				le("\n*Articulo: ");
				le(sucursal1[posMa].articulo);
				li("\n*Cantidad total vendidas: ",sucursal1[posMa].cant);
				lf("\n*Precio por unidad: ",sucursal1[posMa].precio);
				le("\n");
				system("pause");
				break;
			}
			
			case 2:{
				posMe=0;
				posMa=0;
	
				mayor=0;
				menor=99999;
				dato=0;
		
				xy(0,20); le("Venta Mayor/Menor Sucursal 2\n\n");
				for(i=0;i<nArticulos;i++){
					
					dato=sucursal2[i].cant*sucursal2[i].precio;
					
					if(dato<menor){
						menor=dato;
						posMe=i;
					}
					
					if(dato>mayor){
						mayor=dato;
						posMa=i;
					}
					
				}
				
				xy(2,18); le("Producto que tuvo menor ingreso\n");
				lf("\n*Cantidad Total: ",menor);
				
				li("\n*clave: ",sucursal2[posMe].clave);
				le("\n*Articulo: ");
				le(sucursal2[posMe].articulo);
				li("\n*Cantidad total vendidas: ",sucursal2[posMe].cant);
				lf("\n*Precio por unidad: ",sucursal2[posMe].precio);
				le("\n");
				
				xy(11,18); le("Producto que tuvo mayor ingreso\n");
				lf("\n*Cantidad Total: ",mayor);
				
				li("\n*clave: ",sucursal2[posMa].clave);
				le("\n*Articulo: ");
				le(sucursal2[posMa].articulo);
				li("\n*Cantidad total vendidas: ",sucursal2[posMa].cant);
				lf("\n*Precio por unidad: ",sucursal2[posMa].precio);
				le("\n");
				system("pause");
				break;
			}
			
			case 3:{
				posMe=0;
				posMa=0;
	
				mayor=0;
				menor=99999;
				dato=0;
		
				xy(0,20); le("Venta Mayor/Menor Sucursal 3\n\n");
				for(i=0;i<nArticulos;i++){
					
					dato=sucursal3[i].cant*sucursal3[i].precio;
					
					if(dato<menor){
						menor=dato;
						posMe=i;
					}
					
					if(dato>mayor){
						mayor=dato;
						posMa=i;
					}
					
				}
				
				xy(2,18); le("Producto que tuvo menor ingreso\n");
				lf("\n*Cantidad Total: ",menor);
				
				li("\n*clave: ",sucursal3[posMe].clave);
				le("\n*Articulo: ");
				le(sucursal3[posMe].articulo);
				li("\n*Cantidad total vendidas: ",sucursal3[posMe].cant);
				lf("\n*Precio por unidad: ",sucursal3[posMe].precio);
				le("\n");
				
				xy(11,18); le("Producto que tuvo mayor ingreso\n");
				lf("\n*Cantidad Total: ",mayor);
				
				li("\n*clave: ",sucursal3[posMa].clave);
				le("\n*Articulo: ");
				le(sucursal3[posMa].articulo);
				li("\n*Cantidad total vendidas: ",sucursal3[posMa].cant);
				lf("\n*Precio por unidad: ",sucursal3[posMa].precio);
				le("\n");
				system("pause");
				break;
			}
			
			case 4:{
				posMe=0;
				posMa=0;
	
				mayor=0;
				menor=99999;
				dato=0;
		
				xy(0,20); le("Venta Mayor/Menor Sucursal 4\n\n");
				for(i=0;i<nArticulos;i++){
					
					dato=sucursal4[i].cant*sucursal4[i].precio;
					
					if(dato<menor){
						menor=dato;
						posMe=i;
					}
					
					if(dato>mayor){
						mayor=dato;
						posMa=i;
					}
					
				}
				
				xy(2,18); le("Producto que tuvo menor ingreso\n");
				lf("\n*Cantidad Total: ",menor);
				
				li("\n*clave: ",sucursal4[posMe].clave);
				le("\n*Articulo: ");
				le(sucursal4[posMe].articulo);
				li("\n*Cantidad total vendidas: ",sucursal4[posMe].cant);
				lf("\n*Precio por unidad: ",sucursal4[posMe].precio);
				le("\n");
				
				xy(11,18); le("Producto que tuvo mayor ingreso\n");
				lf("\n*Cantidad Total: ",mayor);
				
				li("\n*clave: ",sucursal4[posMa].clave);
				le("\n*Articulo: ");
				le(sucursal4[posMa].articulo);
				li("\n*Cantidad total vendidas: ",sucursal4[posMa].cant);
				lf("\n*Precio por unidad: ",sucursal4[posMa].precio);
				le("\n");
				system("pause");
				break;
			}
			
			default:{
				le("Parametro no valido!!");
				system("pause");
				break;
			}
		}
			
	}while(opc!=0);
}

void ventasTotales(){
	//var totales
	float vTotales=0;
	float acum=0;
	
	int i=0;
	
	xy(0,20); le("Venta Total de todas las Sucursales\n\n");
	
	//sumar ventas de la sucursal 1
	for(i=0;i<nArticulos;i++){
					
		acum+=sucursal1[i].cant*sucursal1[i].precio;
		
	}
	
	vTotales+=acum;
	
	acum=0;
	
	//sumar ventas de la sucursal 2
	for(i=0;i<nArticulos;i++){
					
		acum+=sucursal2[i].cant*sucursal2[i].precio;
		
	}
	
	vTotales+=acum;
	
	acum=0;
	
	//sumar ventas de la sucursal 3
	for(i=0;i<nArticulos;i++){
					
		acum+=sucursal3[i].cant*sucursal3[i].precio;
		
	}
	
	vTotales+=acum;
	
	acum=0;
	
	//sumar ventas de la sucursal 4
	for(i=0;i<nArticulos;i++){
					
		acum+=sucursal4[i].cant*sucursal4[i].precio;
		
	}
	
	vTotales+=acum;
	
	acum=0;
	
	lf("Cantidad Total: ",vTotales);
	le("\n");
	system("pause");
}

void ventasMayorMenorTodasSucursales(){
	//var locales
	int opc=0;
	int i=0;
	
	int posMe=0;
	int posMa=0;
	
	float mayor=0, menor=99999;
	float dato=0;
	
	float menorTotal=99999;
	float mayorTotal=0;
	
	int sucursalMe=0;
	int sucursalMa=0;
	
	int posMeTotal=0;
	int posMaTotal=0;
	
	system("cls");
	xy(0,10); le("Venta Mayor/Menor de todas las Sucursales\n\n");

	posMe=0;
	posMa=0;

	mayor=0;
	menor=99999;
	dato=0;
	
	//menor y mayor da la sucursal 1

	for(i=0;i<nArticulos;i++){
		
		dato=sucursal1[i].cant*sucursal1[i].precio;
		
		if(dato<menor){
			menor=dato;
			posMe=i;
		}
		
		if(dato>mayor){
			mayor=dato;
			posMa=i;
		}
		
	}
	
	if(menor<menorTotal){
		menorTotal=menor;
		sucursalMe=1;
		posMeTotal=posMe;
	}
	
	if(mayor>mayorTotal){
		mayorTotal=mayor;
		sucursalMa=1;
		posMaTotal=posMa;
	}
	
	//menor y mayor da la sucursal 2
	posMe=0;
	posMa=0;

	mayor=0;
	menor=99999;
	dato=0;

	for(i=0;i<nArticulos;i++){
		
		dato=sucursal2[i].cant*sucursal2[i].precio;
		
		if(dato<menor){
			menor=dato;
			posMe=i;
		}
		
		if(dato>mayor){
			mayor=dato;
			posMa=i;
		}
		
	}
	
	if(menor<menorTotal){
		menorTotal=menor;
		sucursalMe=2;
		posMeTotal=posMe;
	}
	
	if(mayor>mayorTotal){
		mayorTotal=mayor;
		sucursalMa=2;
		posMaTotal=posMa;
	}

	//menor y mayor da la sucursal 3

	posMe=0;
	posMa=0;

	mayor=0;
	menor=99999;
	dato=0;

	for(i=0;i<nArticulos;i++){
		
		dato=sucursal3[i].cant*sucursal3[i].precio;
		
		if(dato<menor){
			menor=dato;
			posMe=i;
		}
		
		if(dato>mayor){
			mayor=dato;
			posMa=i;
		}
		
	}
	
	if(menor<menorTotal){
		menorTotal=menor;
		sucursalMe=3;
		posMeTotal=posMe;
	}
	
	if(mayor>mayorTotal){
		mayorTotal=mayor;
		sucursalMa=3;
		posMaTotal=posMa;
	}
	
	//menor y mayor da la sucursal 4

	posMe=0;
	posMa=0;

	mayor=0;
	menor=99999;
	dato=0;

	for(i=0;i<nArticulos;i++){
		
		dato=sucursal4[i].cant*sucursal4[i].precio;
		
		if(dato<menor){
			menor=dato;
			posMe=i;
		}
		
		if(dato>mayor){
			mayor=dato;
			posMa=i;
		}
		
	}
	
	if(menor<menorTotal){
		menorTotal=menor;
		sucursalMe=4;
		posMeTotal=posMe;
	}
	
	if(mayor>mayorTotal){
		mayorTotal=mayor;
		sucursalMa=4;
		posMaTotal=posMa;
	}
	
	//salida

	//menor
	if(sucursalMe==1){
		xy(2,18); le("Producto que tuvo menor ingreso SUCURSAL 1\n");
		lf("\n*Cantidad Total: ",menorTotal);
	
		li("\n*clave: ",sucursal1[posMeTotal].clave);
		le("\n*Articulo: ");
		le(sucursal1[posMeTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal1[posMeTotal].cant);
		lf("\n*Precio por unidad: ",sucursal1[posMeTotal].precio);
		le("\n");

	}
	else if(sucursalMe==2){
		xy(2,18); le("Producto que tuvo menor ingreso SUCURSAL 2\n");
		lf("\n*Cantidad Total: ",menorTotal);
	
		li("\n*clave: ",sucursal2[posMeTotal].clave);
		le("\n*Articulo: ");
		le(sucursal2[posMeTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal2[posMeTotal].cant);
		lf("\n*Precio por unidad: ",sucursal2[posMeTotal].precio);
		le("\n");
		
	}else if(sucursalMe==3){
		xy(2,18); le("Producto que tuvo menor ingreso SUCURSAL 3\n");
		lf("\n*Cantidad Total: ",menorTotal);
	
		li("\n*clave: ",sucursal3[posMeTotal].clave);
		le("\n*Articulo: ");
		le(sucursal3[posMeTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal3[posMeTotal].cant);
		lf("\n*Precio por unidad: ",sucursal3[posMeTotal].precio);
		le("\n");
	
	}else if(sucursalMe==4){
		xy(2,18); le("Producto que tuvo menor ingreso SUCURSAL 4\n");
		lf("\n*Cantidad Total: ",menorTotal);
	
		li("\n*clave: ",sucursal4[posMeTotal].clave);
		le("\n*Articulo: ");
		le(sucursal4[posMeTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal4[posMeTotal].cant);
		lf("\n*Precio por unidad: ",sucursal4[posMeTotal].precio);
		le("\n");
		
	}
	
	//mayor
	if(sucursalMa==1){
		xy(11,18); le("Producto que tuvo mayor ingreso SUCURSAL 1\n");
		lf("\n*Cantidad Total: ",mayorTotal);
		
		li("\n*clave: ",sucursal1[posMaTotal].clave);
		le("\n*Articulo: ");
		le(sucursal1[posMaTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal1[posMaTotal].cant);
		lf("\n*Precio por unidad: ",sucursal1[posMaTotal].precio);
		le("\n");
		
	}else if(sucursalMa==2){	
		xy(11,18); le("Producto que tuvo mayor ingreso SUCURSAL 2\n");
		lf("\n*Cantidad Total: ",mayorTotal);
		
		li("\n*clave: ",sucursal2[posMaTotal].clave);
		le("\n*Articulo: ");
		le(sucursal2[posMaTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal2[posMaTotal].cant);
		lf("\n*Precio por unidad: ",sucursal2[posMaTotal].precio);
		le("\n");
	}else if(sucursalMa==3){
		xy(11,18); le("Producto que tuvo mayor ingreso SUCURSAL 3\n");
		lf("\n*Cantidad Total: ",mayorTotal);
		
		li("\n*clave: ",sucursal3[posMaTotal].clave);
		le("\n*Articulo: ");
		le(sucursal3[posMaTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal3[posMaTotal].cant);
		lf("\n*Precio por unidad: ",sucursal3[posMaTotal].precio);
		le("\n");
	}else if(sucursalMa==4){
		xy(11,18); le("Producto que tuvo mayor ingreso SUCURSAL 4\n");
		lf("\n*Cantidad Total: ",mayorTotal);
		
		li("\n*clave: ",sucursal4[posMaTotal].clave);
		le("\n*Articulo: ");
		le(sucursal4[posMaTotal].articulo);
		li("\n*Cantidad total vendidas: ",sucursal4[posMaTotal].cant);
		lf("\n*Precio por unidad: ",sucursal4[posMaTotal].precio);
		le("\n");
	}
	
	system("pause");

}

int main() {

	int salir=0;
	int opc=0;
	
	int datosCargados=0;
	
	do{
		//menu principal
		lim();
		xy(0,24); le("Electronic");
		xy(2,2); le("*Ingrese 1 para Cargar data (leer los 4 archivos)");
		xy(4,2); le("*Ingrese 2 para Imprimir la informacion de la sucursal deseada");
		xy(6,2); le("*Ingrese 3 para Obtener la venta total de cada sucursal");
		xy(8,2); le("*Ingrese 4 para Ver la venta mayor/menor de cada sucursal");
		xy(10,2); le("*Ingrese 5 para Ver las ventas totales de todas las sucursales");
		xy(12,2); le("*Ingrese 6 para Ver las ventas mayores y menores de todas las sucursales");
		xy(14,2); opc=ci("*Ingrese 0 para Salir del sistema\n\n->");
		
		lim();
		
		switch(opc){
			case 0:{
				le("Saliendo...");
				salir=1;
				break;
			}
			
			case 1:{
				datosCargados=cargarData();
				break;
			}
			
			case 2:{
				if(datosCargados==1){
					infoSucursalDeseada();
				}		
				else{
					le("Error!, 1 o mas archivos no fueron cargados correctamente (Revisar la opcion 1 del menu principal)\n");
					system("pause");
				}
				break;
			}
			
			case 3:{
				if(datosCargados==1)
					ventaTotalPorSucursal();
				else{
					le("Error!, 1 o mas archivos no fueron cargados correctamente (Revisar la opcion 1 del menu principal)\n");
					system("pause");
				}
				break;
			}
			
			case 4:{
				if(datosCargados==1)
					ventaMayorMenorPorSucursal();
				else{
					le("Error!, 1 o mas archivos no fueron cargados correctamente (Revisar la opcion 1 del menu principal)\n");
					system("pause");
				}
				break;
			}
			
			case 5:{
				if(datosCargados==1)
					ventasTotales();
				else{
					le("Error!, 1 o mas archivos no fueron cargados correctamente (Revisar la opcion 1 del menu principal)\n");
					system("pause");
				}
				break;
			}
			
			case 6:{
				if(datosCargados==1)
					ventasMayorMenorTodasSucursales();
				else{
					le("Error!, 1 o mas archivos no fueron cargados correctamente (Revisar la opcion 1 del menu principal)\n");
					system("pause");
				}
				break;
			}
			
			default:{
				le("Parametro no valido!!");
				system("pause");
				break;
			}
		}
	} while(salir!=1);
	
	return 0;
}

