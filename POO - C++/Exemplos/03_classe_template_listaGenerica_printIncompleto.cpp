#include <stdio.h>

template<class G> class no{
public:
    G dado;
    no<G> *prox, *ant;

    no(){ prox=ant=NULL; }
    no(G x){ dado = x; prox=ant=NULL; }
};

template<class A> class listaDupla{
public:
    no<A> *in, *fi;
    int tamanho;

    listaDupla(){
        in = NULL;//NULL (void*)0
        fi = NULL;
        tamanho = 0;
    }

    void push_back(A x){
        no<A> *p = new no<A>(x);
        if(tamanho==0){
            in = fi = p;
        }else{
            fi->prox = p;
            p->ant = fi;
            fi = p;
        }
        tamanho++;
    }

    void push_front(A x){
        no<A> *p = new no<A>(x);
        if(tamanho==0){
            in = fi = p;
        }else{
            in->ant = p;
            p->prox = in;
            in = p;
        }
        tamanho++;
    }

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

    void pop_front(){
        if(tamanho){
            no<A> *p = in;
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
        for(no<A> *i= in; i!=NULL; i=i->prox){
            //Ver cout
            printf("%d - ", i->dado);
        }
        printf("\n");
    }

    ~listaDupla(){
        while(tamanho){
            pop_back();
        }
    }
};

int main(){
    listaDupla<int> lInt;
    for(int i = 0; i < 3;i++)
        lInt.push_back(i);
    for(int i = 0; i < 3;i++)
        lInt.push_front(i);
    lInt.print();
    lInt.pop_front();
    lInt.pop_back();
    lInt.print();
}
