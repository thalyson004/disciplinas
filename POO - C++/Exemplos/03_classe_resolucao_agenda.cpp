#include <stdio.h>
#include <string.h>

class Pessoa{
    private:
    char nome[50];
    char telefone[15];
    public:
    char * getNome(){
        return nome;
    }
    char * getTelefone(){
        return telefone;
    }
    void setNome(char *n){
        strcpy(nome, n);
    }
    void setTelefone(char *t){
        strcpy(telefone, t);
    }
    Pessoa(char *n, char *t){
        strcpy(nome, n);
        strcpy(telefone, t);
    }
    Pessoa(){
        strcpy(nome, "");
        strcpy(telefone, "");
    }
};

class No{
    public:
    Pessoa conteudo;
    No *ant, *prox;
    No(){
        ant = prox = NULL;
    }
    No(Pessoa p){
        conteudo = p;
        ant = prox = NULL;
    }
};

class Lista{
    protected:
    No *ini, * fim;
    int tamanho;

    public:
    Lista(){
        fim = ini = NULL;
        tamanho = 0;
    }
    void push_back(Pessoa p){
        No *aux = new No(p);
        if(tamanho==0){
            ini = fim = aux;
        }else{
            aux->ant = fim;
            fim->prox = aux;
            fim = aux;
        }
        tamanho++;
    }
};

class Agenda : public Lista{
public:
    void Imprimir(){
        for(No *i=ini; i!=NULL; i=i->prox){
            printf(">> %s %s\n",
                   i->conteudo.getNome(),
                   i->conteudo.getTelefone());
        }
    }
};

int main(){
    Agenda agenda;
    agenda.push_back( Pessoa("Ronaldo", "142134") );
    agenda.push_back( Pessoa("Tevez", "4534534") );
    agenda.push_back( Pessoa("Thalyson", "327462") );
    agenda.Imprimir();
}
