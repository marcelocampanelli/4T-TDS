#include<iostream>

using namespace std;

int main(){
//Ordenação de vetores
  int vet[9];
  int i,j,achou,aux ;
  
  for(i=0; i<=9; i++){
    cout<<"Informe o elemento "<<i+1<<" do vetor : ";
    cin>>vet[i];
  }
  
  cout<<endl<<endl;
  achou =  1;
  

  while(achou == 1){ //só permanece no laço enquantou houver troca para ser feita (enquanto estiver desordenado)
    achou = 0; 
    for (j=0; j<9; j++){
      cout<<"par "<<vet[j]<<", "<<vet[j+1];
      if(vet[j] > vet[j+1]){
        achou=1;
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
        cout<<"  trocou!!! OK "<<endl;
      }else{
        cout<<" nao trocou! "<<endl;;
      }
    }
  }

  cout<<endl<<endl;
  cout<<"Vetor oderdano: [ ";
  for(i=0; i<=9; i++){
    cout<<vet[i];
    if(i<9){
     cout<<", "; 
    }
  }
  cout<<" ]";

}