#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	
	
	for(int i=0; i<3; i++){
		char nome[100];
		int n=0;
		while(nome[n] != '\n'){
			in >> nome[n];
			n++;
		}
	}
	return 0;
}
