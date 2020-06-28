#include <iostream>
#include <string.h>

using namespace std;

int vocal(char [],int);

int main(){
	int numero;
	char palabra[50];
	
	cout<<"ingrese una palabra: ";
	cin.getline(palabra,50,'\n');
	numero=strlen(palabra);
	
	int digito[numero];
	
	for(int i=0;i<numero;i++){
		switch(palabra[i]){
			case 'm':
			case 'u':
			case 'r':
			case 'c':
			case 'i':
			case 'e':
			case 'l':
			case 'a':
			case 'g':
			case 'o':
				digito[i]=vocal(palabra,i);
				break;
			default:
				break;	
		}
	}
	for(int i=0;i<numero;i++){
		switch(palabra[i]){
			case 'm':
			case 'u':
			case 'r':
			case 'c':
			case 'i':
			case 'e':
			case 'l':
			case 'a':
			case 'g':
			case 'o':
				cout<<digito[i];
				break;
			default:
				cout<<palabra[i];
		}
	}
	return 0;
}
int vocal(char palabra[],int i){
	int n;
	switch(palabra[i]){
		case 'm':
			n=0;
			break;
		case 'u':
			n=1;
			break;
		case 'r':
			n=2;
		case 'c':
			n=3;
			break;
		case 'i':
			n=4;
			break;
		case 'e':
			n=5;
			break;
		case 'l':
			n=6;
			break;
		case 'a':
			n=7;
			break;
		case 'g':
			n=8;
			break;
		case 'o':
			n=9;
			break;
		default:
			break;	
	}	
	return n;
}