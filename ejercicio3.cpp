#include <iostream>

using namespace std;
void datos(float[][5],int);
void promedio(float[][5],int);

int main(){
	int alumnos;
	cout<<"cuantos alumnos ingresa: ";
	cin>>alumnos; 
	
	float notas[alumnos][5];
	datos(notas,alumnos);
	promedio(notas,alumnos);
	
	return 0;
}
void datos(float notas[][5],int alumnos){
	for(int i=0;i<alumnos;i++){
		for(int j=0;j<5;j++){
			cout<<"alumno "<<i+1<<", nota "<<j+1<<": ";
			cin>>notas[i][j];
		}
	}	
}
void promedio(float notas[][5],int alumnos){
	float resultados[alumnos];
	for(int i=0;i<alumnos;i++){
		for(int j=0;j<5;j++){
			resultados[i]=resultados[i]+(notas[i][j]*0.20);
		}
	}
	for(int i=0;i<alumnos;i++){
		if(resultados[i]>6.00){
			cout<<"el alumno "<<i+1<<"a aprobado"<<endl;
		}else{
			cout<<"el alumno "<<i+1<<"no aprobo"<<endl;
		}
	}
		
}

