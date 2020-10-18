#include<iostream>
using namespace std;


int const maxtam = 100;
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
  if ( topo == maxtam - 1 ){
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

  int x;
  int passou;

 cout<<"---------------";
  pilha_push(42);
  pilha_push(11);
  pilha_push(19);
  pilha_pop(x);
  pilha_push(23);
  pilha_pop(x);
  pilha_push(26);
  pilha_pop(x);
  pilha_push(4);
  pilha_push(27);
  pilha_push(6);
  pilha_pop(x);
  


  return 0;
}