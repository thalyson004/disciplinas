/*
	Criado por Thalyson Gomes - IFCE
	Exemplo de utilização de atributos static
	Link para IdeOne: https://ideone.com/qu0PkC
*/
class humano {
    private String nome;
    private int idade;
    private static int maisNovo = 1000;
    private static int maisVelho = -1;
    
    public String getNome(){
        return nome;
    }
    public int getIdade(){
        return idade;
    }
    public int getMaisNovo(){
        return maisNovo;
    }
    public int getMaisVelho(){
        return maisVelho;
    }
    public void setNome(String _nome){
        nome = _nome;
    }
    public void setIdade(int _idade){
        idade = _idade;
        if( idade > maisVelho ){
            maisVelho = idade;
        }
        if( idade < maisNovo ){
            maisNovo = idade;
        }
    }
    
    public humano(String _nome, int _idade){
        nome = _nome;
        idade = _idade;
        if( idade > maisVelho ){
            maisVelho = idade;
        }
        if( idade < maisNovo ){
            maisNovo = idade;
        }
    }
    
    public void imprimir(){
        System.out.println("Nome = "+nome+", idade = "+idade);
    }
    
    public void novoVelho(){
        System.out.println("Humano mais novo = " + maisNovo);
        System.out.println("Humano mais velho = " + maisVelho);
    }
}
    

public class Main{
    public static void main(String[] args) {
        humano x = new humano("Ronaldo", 37);
        humano y = new humano("Tevez", 35);
        humano z = new humano("Batistuta", 41);
        
        x.imprimir();
        y.imprimir();
        z.imprimir();
        z.setIdade(50);
        z.setIdade(41);
        x.novoVelho();
    }   
}
