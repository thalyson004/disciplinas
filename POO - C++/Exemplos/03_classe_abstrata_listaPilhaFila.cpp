#include <stdio.h>

class Lista{
public:
    virtual void inserir(int x)=0;
    virtual void remover()=0;
    virtual int size()=0;
    virtual void print() = 0;
};
class no{
public:
    int dado;
    no *prox, *ant;

    no(){ prox=ant=NULL; }
    no(int x){ dado = x; prox=ant=NULL; }
};
class Fila : public Lista{
public:
    no *in, *fi;
    int tamanho;

    Fila(){
        in = NULL;//NULL (void*)0
        fi = NULL;
        tamanho = 0;
    }

    void inserir(int x){
        no *p = new no(x);
        if(tamanho==0){
            in = fi = p;
        }else{
            fi->prox = p;
            p->ant = fi;
            fi = p;
        }
        tamanho++;
    }
    /*
    void pop_back(){
        if(tamanho){
            no<A> *p = fi;
            fi=fi->ant;
            if(fi)fi->prox = NULL;
            delete p;
            tamanho--;
        }
        if(tamanho==0){
            in = fi = NULL;
        }
    }
*/
    void remover(){
        if(tamanho){
            no *p = in;
            in=in->prox;
            if(in)in->ant = NULL;
            delete p;
            tamanho--;
        }
        if(tamanho==0){
            in = fi = NULL;
        }
    }

    void print(){
        for(no *i= in; i!=NULL; i=i->prox){
            printf("%d - ", i->dado);
        }
        printf("\n");
    }

    int size(){
        return tamanho;
    }

    ~Fila(){
        while(tamanho){
            remover();
        }
    }
};
class Pilha : public Lista{
public:
    no *in, *fi;
    int tamanho;

    Pilha(){
        in = NULL;//NULL (void*)0
        fi = NULL;
        tamanho = 0;
    }

    void inserir(int x){
        no *p = new no(x);
        if(tamanho==0){
            in = fi = p;
        }else{
            fi->prox = p;
            p->ant = fi;
            fi = p;
        }
        tamanho++;
    }

    void remover(){
        if(tamanho){
            no *p = fi;
            fi=fi->ant;
            if(fi)fi->prox = NULL;
            delete p;
            tamanho--;
        }
        if(tamanho==0){
            in = fi = NULL;
        }
    }

    void print(){
        for(no *i= in; i!=NULL; i=i->prox){
            printf("%d - ", i->dado);
        }
        printf("\n");
    }

    int size(){
        return tamanho;
    }

    ~Pilha(){
        while(tamanho){
            remover();
        }
    }
};

int main(){
    Lista *p;
    p = new Fila;
    for(int i = 0; i < 5; i++) p->inserir(i);
    while(p->size()){
        p->print();
        p->remover();
    }
    p = new Pilha;
    for(int i = 0; i < 5; i++) p->inserir(i);
    while(p->size()){
        p->print();
        p->remover();
    }
}
