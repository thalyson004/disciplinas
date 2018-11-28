#include <stdio.h>
class B;
class A{
    int x;
    friend int funcao(A);
    friend void funcaoSet(A&);
    friend class B;

    public:
    void setX(B &, int);
    int getX(B);
};

class B{
    int y;
    friend class A;
public:
    void setX(A &objeto, int valor){
        objeto.x = valor;
    }
    int getX(A objeto){
        return objeto.x;
    }
};
void A::setX(B &objeto, int valor){
    objeto.y = valor;
}
int A::getX(B objeto){
    return objeto.y;
}

int funcao(A objeto){
    return objeto.x;
}
void funcaoSet(A &objeto){
    objeto.x = 10;
}
int main(){
    A teste;
    funcaoSet(teste);
    printf("%d\n", funcao(teste) );
    B amigo;
    amigo.setX(teste, 7);
    printf("%d\n", amigo.getX(teste) );

    teste.setX(amigo, 17);
    printf("%d\n", teste.getX(amigo) );
}
