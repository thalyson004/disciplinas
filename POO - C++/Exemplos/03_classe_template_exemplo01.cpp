#include <stdio.h>

template<class A> A soma(A x, A y){
    return x+y;
}

template<class T1> class A{
public:
    T1 x,y;
};

template<class X, class Y> class par{
    private:
    X primeiro;
    Y segundo;
    public:
    void setPrimeiro(X p){
        primeiro = p;
    }
    void setSegundo(Y s){
        segundo = s;
    }
    X getPrimeiro(){
        return primeiro;
    }
    Y getSegundo(){
        return segundo;
    }
};

template<class X> class C1{
    public:
        X x;
};

template<class X>class C2{
    C1<X> primeiro;
};


int main(){
    printf("%d\n", soma(5,6));
    printf("%lf\n", soma(5.5184,6.1717));
    printf("%d\n", soma(7,6));

    A<int> objetoInt;
    A<double> objetoDouble;
    par<int,int> parIntInt;
    par<int,char> parIntChar;
    par<double,int> parDoubleInt;

    parDoubleInt.setPrimeiro(7.58);
    parDoubleInt.setSegundo(8);
    printf("%lf %d\n", parDoubleInt.getPrimeiro(),
                    parDoubleInt.getSegundo());

    C2<int> TesteC2;
    C1<double> TesteC1;
}
