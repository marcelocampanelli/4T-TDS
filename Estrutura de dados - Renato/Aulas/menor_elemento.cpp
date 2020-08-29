#include<iostream>
using namespace std;

int main(){

  int v[5];
  int aux;
  aux = 0;
  int casaInicial;
  casaInicial = 0;



  for(int i=0; i < 5; i++){
    cin>>v[i];
  }

aux = v[0];

  for(int j=0; j<5; j++){
    if(v[j] < aux){
      aux = v[j];
      casaInicial = j ;
    }
  }

  cout<<"O menor elemento é o: "<<aux<<endl;
  cout<<"A casa é: "<<casaInicial<<endl;


  return 0;
}