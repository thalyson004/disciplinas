#include <stdio.h>

class A{
public:
    int x;
    void setXA(int _x){x = _x;}
    int getXA(){return x;}
};
class B: public A{
public:
    int x;
    void setXB(int _x){x = _x;}
    int getXB(){return x;}
};
class C:public B{
public:
    int x;
    void setXC(int _x){x = _x;}
    int getXC(){return x;}
};

int main(){
    C c;
    c.setXA(1);
    c.setXB(2);
    c.setXC(3);
    printf("%d %d %d\n", c.getXA(), c.getXB(), c.getXC() );
}
