#include <stdio.h>
#include <string.h>

class veiculo{
protected:
   int peso;
   int passageiros;
   int velocidade;
};

class carro : public veiculo  {
    public:
    carro(){
        passageiros = 1;
        velocidade = 0;
    }
    void acelerar(int _v){
        if(passageiros) velocidade += _v;
        if(velocidade < 0) velocidade = 0;
    }
    void freiar(int _v){
        if(passageiros) velocidade -= _v;
        if(velocidade < 0) velocidade = 0;
    }
    void sobePassageiro(){
        if(!velocidade) passageiros++;
    }
    void descePassageiro(){
        if(!velocidade and passageiros) passageiros--;
    }
    void imprimir(){
        printf("Carro tem %d passageiros e esta com velocidade de %d km/h\n", passageiros, velocidade);
    }
};

int main(){
    carro x;
    x.imprimir();
    x.acelerar(15);
    x.imprimir();
    x.freiar(16); //Não fica negativo
    x.imprimir();
    x.sobePassageiro();
    x.sobePassageiro();
    x.acelerar(100);
    x.imprimir();
    x.descePassageiro(); //Não desce por que está em movimento
    x.descePassageiro();
    x.imprimir();
    x.freiar(100);
    x.descePassageiro();
    x.descePassageiro();
    x.descePassageiro();
    x.imprimir();
    x.acelerar(80); //Não acelera por que está sem o motorista
    x.imprimir();
    x.sobePassageiro();
    x.acelerar(80);
    x.imprimir();
}
