#include<iostream>
using namespace std;

int main(void){

  int vet[10],i,number,start,end,find,position;

  cout<<"Insira os elementos do vetor!"<<endl;

  for(i=0; i<=9; i++){
    cout<<i + 1<<": ";
    cin>>vet[i];
  }

  cout<<"Informe o numero a ser buscado: ";
  cin>>number;

  find     = 0;
  start    = 0;
  end      = 9;
  position = (start + end) / 2;

  while((start <= end) && (find == 0)){
    if(number == vet[position]){
      find = 1;
    }else if(number < vet[position]){
      end = position - 1;
      position = (start + end) / 2;
    } else{
      start = position + 1;
      position = (start + end) / 2;
    }
  }

  
  if(find == 0){
    cout<<"Numero nao encontrado!"<<endl;
  } else{
    cout<<"Numero: "<<number<<" foi encontrado na posicao: "<<position + 1<<endl;
  }


  return 0;
}