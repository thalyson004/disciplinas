#include <stdio.h>

template<class T> void troca(T &a, T &b){
   T aux = a;
   a = b;
   b = aux;
}

main(){
   {
      int a=1, b=2;
      troca(a,b);
      printf("%d %d\n", a, b);
   }
   {
      char a='a', b='b';
      troca(a,b);
      printf("%c %c\n", a, b);
   }

}



