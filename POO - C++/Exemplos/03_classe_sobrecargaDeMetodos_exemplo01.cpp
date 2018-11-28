#include <stdio.h>

class A{
public:
    void imprime(){
        printf("Metodo 01\n");
    }
    void imprime(int x){
        printf("Metodo %d\n", x);
    }
    void imprime(float x){
        printf("Metodo %f\n", x);
    }

    int operator + (int x){
        printf("Metodo %d\n", x);
    }

    int operator + (double x){
        printf("Metodo %lf\n", x);
    }
};

int main(){
    A x;
    x.imprime();
    x.imprime(5);
    x.imprime((float)7.4353);
    x+7;
    x+8.541584874;
}
