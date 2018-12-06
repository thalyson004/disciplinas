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

template<class A, class B> class par{
public:
   A first;
   B second;
   par(){
      first = A();
      second = B();
   }
   par(A _f, B _s){
      first = _f;
      second = _s;
   }
   bool operator < (par aux){
      if(first!=aux.first) return first < aux.first;
      return second < aux.second;
   }
};

main(){
   srand(time(NULL));
   par<int,int> v[10];
   for(int i = 0; i < 10; i++){
      v[i] = par<int,int>(rand()%10, rand()%10);
   }
   ordena(v, 10);
   for(int i = 0; i < 10; i++)
      printf("(%d, %d)\n", v[i].first, v[i].second);

}



