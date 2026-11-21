#include <iostream>
#include <string>

using namespace std; 

class Alumno {
	private:
		string nombre;
		int edad;
		float peso;
		float estatura;
	public:
	    void asignarvalores(string nom, int ed, float pes, float est){
	    nombre = nom;
		edad = ed;
		peso = pes;
		estatura = est;	
		}		
		float devolverIMC(){
		return peso / (estatura* estatura);	
		}
		float devolverpesorecomendado(){
		return 22.0 * (estatura * estatura);	
		}
		void mostarresultados(){
		cout << "DATOS DEL ALUMNO" << endl;
		cout <<"Nombre:" << nombre << endl;
		cout <<"Edad:" << edad << endl;
		cout <<"Peso:" << peso << endl; 
		cout <<"IMC:" << devolverIMC() << endl;
		cout <<"Peso recomendado;" << devolverpesorecomendado() << endl;
		}
};

int main(){
	Alumno Alum;
	string nombretemp;
	int edadtemp;
	float pesotemp;
	float estaturatemp;
	
	cout << "Nombre:";
	cin >> nombretemp;
	cout << "Edad:";
	cin >> edadtemp;
	cout << "Peso:";
	cin >> pesotemp;
	cout << "Estatura:";
	cin >> estaturatemp;
	
	Alum.asignarvalores(nombretemp, edadtemp, pesotemp, estaturatemp);
	Alum.mostarresultados();
	return 0; 
}
