#include<iostream>
using namespace std;


int const maxtam = 5;
int pilha[maxtam];
int topo;


//inicializa
void pilha_construtor(){
  topo = -1;
}

//verifica se a pilha ta vazia
bool pilha_vazia(){
  if (topo == -1){
    return true;
  } else
      return false;
}

//testa se a pilha ta cheia
bool pilha_cheia(){
  if ( topo==maxtam-1 ){
    return true;
  } else 
      return false;
}

//empilhar
bool pilha_push(int valor){
  if (pilha_cheia()){
    return false;
  } else {
    topo++;
    pilha[topo] = valor;
    return true;
  }
}

//desempilhar
bool pilha_pop(int &valor){
  if (pilha_vazia()){
    return false;
  } else {
      valor = pilha[topo];
      topo--;
      return true;
  }
}


// acessa valores do topo
bool pilha_get(int &valor){
  if (pilha_vazia()){
    return false;
  } else {
      return valor = pilha[topo];
  }
}


int main(){

  int valor;

  pilha_construtor();
  pilha_push(6);
  pilha_push(3);
  pilha_push(9);
  pilha_pop(valor);
  pilha_pop(valor);
  
  cout<<valor;

  return 0;
}