#include<iostream>
using namespace std;

int main(){

  int vet[9], i, j, achou, eleito, posi;

  for(i=0; i<=9; i++){
    cout<<"Informe o elemento "<<i<<" do vetor"<<endl;
    cin>>vet[i];
  }

  for(i=1; i<=9; i++){
    eleito=vet[i];
    j=0;
    achou=0;
    while((j<i) && (achou==0)){
      if(vet[j]>eleito){
        achou=1;
        posi=j;
      }else{
        j++;
      }
    }

    if(achou==1){
      for(j=i; j>posi; j--){
        vet[j]=vet[j-1];
      }
      vet[posi]=eleito;
    }
  }

  cout<<""<<endl;

  for(i=0;i<=9;i++){
    cout<<vet[i]<<endl;
  }

  return 0;
}

