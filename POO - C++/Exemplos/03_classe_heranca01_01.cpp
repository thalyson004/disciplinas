#include <stdio.h>
#include <string.h>

class animal{
protected:
    int idade;
    char sexo[10];
};

class humano : public animal{
protected:
    int altura;
    char nome[50];
public:
    //Getters
    int getIdade(){return idade;}
    int getAltura(){return altura;}
    char *getNome(){return nome;}
    char *getSexo(){return sexo;}
    //Setters
    void setIdade(int _idade){ idade = _idade;}
    void setAltura(int _altura){ altura = _altura;}
    void setNome(char *_nome){ strcpy(nome,_nome);}
    void setSexo(char *_sexo){ strcpy(sexo,_sexo);}

};

void imprimir(humano &x){
    printf("Ola, meu nome eh %s.\n", x.getNome() );
    printf("Tenho %d cm de altura, %d anos e sou do sexo %s\n",
           x.getAltura(), x.getIdade(), x.getSexo());
}

int main(){
    humano ronaldo;

    ronaldo.setNome("Ronaldo");
    ronaldo.setSexo("masculino");
    ronaldo.setIdade(37);
    ronaldo.setAltura(185);

    imprimir(ronaldo);

}
