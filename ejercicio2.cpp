#include <iostream>

using namespace std;
float media(float[]);
void promedio(float[],float);

int main(){
	float estaturas[25],mediafinal=0;//guarada los 25 espacios de las estaturas
	
	for(int i=0;i<25;i++){
		cout<<i+1<<"ingrese su estatura:";
		cin>>estaturas[i];//se mueve de posicion 0,1,2,3...
	}
	mediafinal=media(estaturas);
	promedio(estaturas,mediafinal);
	return 0;
}
float media(float estaturas[]){
	float media2=0,suma=0;
	for(int i=0;i<25;i++){
		suma=suma+estaturas[i];
	}
	media2=suma/25;
	return media2;
}
void promedio(float estaturas[],float mediafinal){
	int contadorarriba=0; 
	int contadorabajo=0;
	for(int i=0;i<25;i++){
		if(estaturas[i]>=mediafinal){
			contadorarriba++;
		}else{
			contadorabajo++;
		}
	}
	cout<<"su media es: "<<mediafinal<<endl;
	cout<<"usted tiene "<<contadorarriba<<" alumnos arriba o iguales a la media";
	cout<<"\nusted tiene "<<contadorabajo<<" alumnos abajo de la media";
}

