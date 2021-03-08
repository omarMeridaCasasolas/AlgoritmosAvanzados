#include<iostream>
#include<string>

using namespace std;

int main(){
	bool bandera = true;
	string a="``"; 
	string b="''";
	char comilla = '"';
	string entrada ="" , salida = "";
	while(getline(cin,entrada)){
		for(int i=0; i<entrada.size() ; i++){
			if(entrada[i] == comilla){
				//cout<<"Es una comilla";
				if(bandera){
					cout<<a;
					bandera=false;
				}else{
					cout<<b;
					bandera=true;					
				}
			}else{
				cout<<entrada[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
