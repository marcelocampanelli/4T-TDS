#include<iostream>

using namespace std;

int const maxtam = 6;
int frente,tras;
int lista[maxtam];

void lista_contrutor(){
  tras = -1;
  frente = 0;
}

bool lista_vazia(){
  if(tras == -1){
    return true;
  }else
    return false;
}

bool lista_cheia(){
  if(tras == maxtam-1){
    return true;
  }else
    return false;
}

bool lista_inserir_inicio(int valor){
  if(lista_cheia()){
    return false;
  }else{
    tras++;
    lista[tras]=valor;
    return true;
  }
}

bool lista_inserir_inicio(int valor){
  if(lista_cheia()){
    return false;
  }else{
    for(int i=tras+1; i>frente;i--){
      lista[i]=lista[i-1];
    }
    lista[frente]=valor;
    tras++;
    return true;
  }
}

bool lista_inserir(int valor, int posi){
  if(lista_cheia()){
    return false;
  }else{
    if((posi>frente)&&(posi<tras)){
      for(int i=tras+1; i>posi; i--){
        lista[i]=lista[i-1];
      }
      lista[posi] = valor;
      tras++;
      return true;
    }else{
      return false;
    }
  }
}

bool lista_remover_fim(int &valor){
  if(lista_vazia()){
    return false;
  }else{
    valor = lista[tras];
    tras--;
    return true;
  }
}

bool lista_remover_inicio(int &valor){
  if(lista_vazia()){
    return false;
  }else{
    valor = lista[frente];
    for(int i=frente; i<tras; i++){
      lista[i] = lista[i+1];
    }
    tras--;
    return true;
  }
}

bool lista_remover(int &valor, int posi){
  if(lista_vazia()){
    return false;
  }else{
    if((posi>frente)&&(posi<tras)){
      valor = lista[posi];
      for(int i=posi; i<tras; i++){
        lista[i] = lista[i+1];
      }
      tras--;
      return true;
    }
    else
      return false;
  }
}

int main(){
  int valor, posi;
  lista_contrutor();
  lista_inserir_inicio(5);
  lista_inserir_inicio(6);
  lista_inserir_inicio(7);
  lista_inserir_inicio(10);
  lista_remover_fim(valor);
  cout<<valor<<endl;



}