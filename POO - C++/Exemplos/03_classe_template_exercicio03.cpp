#include <stdio.h>

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
};

main(){
   par<int, int> II;
   printf("%d %d\n", II.first, II.second);
   II = par<int, int >(1,2);
   printf("%d %d\n", II.first, II.second);

   par<int, double> ID;
   printf("%d %f\n", ID.first, ID.second);
   ID = par<int, double>(1,5.6545);
   printf("%d %f\n", ID.first, ID.second);

   par<char, int> CI;
   printf("%c %d\n", CI.first, CI.second);
   CI = par<char, int>('r',99);
   printf("%c %d\n", CI.first, CI.second);



}



