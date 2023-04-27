#include <bits\stdc++.h>
using namespace std;

 int ContarLetraA(string f){
 	int cont;
 	for(int i=0; i<= f.size(); i++){
 		if(f[i] == 'a' || f[i] == 'A'){
 			cont++;
		 }
	}
	return cont;
}
int main(){
	string frase;
	
	cout<<"ingrese frase"<<endl;
	getline(cin,frase);
	
	int contA = ContarLetraA(frase);
	
	cout<<"cantidad de a : "<<contA<<endl;
	
	return 0;
}
