#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "portuguese");
   	int i, idade=0, cliente=0, media,              mesesTrabalhados, aposentadoria,
 idadeFaltante;
 
    char s, S, n, N, resposta;
	float salario=0, dinheiroAcumulado, gastos;
	cout<<"Voce gostaria de participar de uma pesquisa dinamica ?\nAlém de ter informações sobre sua aposentadoria\n temos também dicas de acordo com o seu resultado!"<<endl;
	cout<<endl;
	cout<<"Informe a idade do cliente "<<cliente+1<<":"<<endl;
	cin>> idade;
	cout<<endl;
	cout<<"Com quantos anos quer se aposentar ?"<<endl;
	cin>> aposentadoria;
	cout<<endl;
	cout<<"Voce tem dinheiro acumulado para sua aposentadoria ? S/N"<<endl;
	cin>> resposta;
	cout<<endl;
if ((resposta=='s') || (resposta=='S')){
    cout<<"Quanto voce tem ?"<<endl;
    cin>> dinheiroAcumulado;
    
    cout<<endl;
    
    cout<<"E quanto voce gasta por mes ?"<<endl;
    cin>> gastos;
    
    cout<<endl;
    
}
    if ((resposta=='n') || (resposta=='N') || (resposta=='s') || (resposta=='S')){
        
        
   
    cout<<"Obrigado por continuar até aqui "<<endl;
    cout<<"Agora iremos calcular sua média de renda anual e logo em seguida apresentar as informações e dicas ."<<endl;
    
     
    cout<<endl;
        
    }

    
    cout<<endl;
    cout<<"Informe seu salário :"<<endl;
	cin>> salario;
	cout<<endl;
	cout<<"Informe quantidade de meses trabalhados por ano :"<<endl;
	cin>> mesesTrabalhados;
	cout<<endl;
media = (salario * mesesTrabalhados) - (salario/2);

idadeFaltante = aposentadoria - idade;

cout<<"Falta "<<idadeFaltante<<" anos para voce se aposentar !"<<endl;
	cout<<"E sua média de salário anual é :"<<media<<endl;
	cout<<endl;
if (dinheiroAcumulado > gastos){
    
    
    cout<<"Sua 'poupança' é maior que seus gastos, por isso sua riqueza durará mais. Agora voce precisa saber como manter e melhorar essa vida ! "<<endl;
    
    system ("color A");
} 
else{
    
     
       cout<<"Seus gastos são maior ou igual que sua riqueza. Conserte isso pois sua riqueza nunca vai crescer e uma hora voce irá a falencia !!!"<<endl;

    system ("color C");
}

cout<<endl;
system ("color 7");
   cout<<"Chegamos ao final da pesquisa \n indique sujestões de melhorias caso gostou do programa"<<endl;




  
return 0;
}

