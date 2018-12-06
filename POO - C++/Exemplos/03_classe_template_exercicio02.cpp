#include <stdio.h>
#include <stdlib.h>
#include <time.h>

template<class T> void troca(T &a, T &b){
   T aux = a;
   a = b;
   b = aux;
}
template<class T> void ordena(T v[], int tamanho){
   for(int i = 0; i < tamanho; i++)
   for(int j = 1; j < tamanho; j++)
      if(v[j]<v[j-1])
         troca(v[j], v[j-1]);
}

main(){
   srand(time(NULL));
   int v[10];
   for(int i = 0; i < 10; i++) v[i] = rand()%50;
   ordena(v, 10);
   for(int i = 0; i < 10; i++) printf("%d%c", v[i], " \n"[i==9]);
}



