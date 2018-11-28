#include <stdio.h>

class A{
public:
    int x;
};
class B: public A{
public:
    int x;
};
class C:public B{
public:
    int x;
};

int main(){
    C c;
    c.A::x = 1;
    c.B::x = 2;
    c.C::x = 3; // Ou c.x = 3, pois a prioridade é para o local
    printf("%d %d %d\n", c.A::x, c.B::x, c.C::x );
}
