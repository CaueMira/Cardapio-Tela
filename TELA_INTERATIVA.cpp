#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
#include <conio.h>
using namespace std; 
int escolha,lanche,fritas,bebida,add,copos,sabor,tamanho,qtde,item,item1,item2,qtde_lanche,valor_lanche,pay,final;
char adicional,remover;
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 do{
 // Entrada dos Dados
 system ("cls"); // SERVE PARA LIMPAR A TELA
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a     TESTE BURGER  ";
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a SEJA BEM VINDO AO TESTE BURGER! ";
 cout<<"\n\n VAMOS COMEÇAR O PEDIDO? ";//Cardápio
 cout<<"\n\n [1] - LANCHES ";
 cout<<"\n [2] - FRITAS ";
 cout<<"\n [3] - BEBIDAS ";
 cout<<"\n [4] - ENCERRAR PEDIDO ";
 cout<<"\n\n ESCOLHA UMA OPÇÃO: ";
 cin>>escolha;
 switch(escolha)
 {
 	case 1:{//Lanches
 		cout<<"\n [1] KIDS BURGER - R$2,00";
 		cout<<"\n [2] X-SALADA - R$3,00";
 		cout<<"\n [3] X-BACON - R$5,00";
 		cout<<"\n [4] CHEDDAR BURGER - R$8,00";
 		cout<<"\n [5] MONSTRO BURGER - R$20,00";
 		cout<<"\n\n QUAL VOCÊ DESEJA? ";
 		cin>>lanche;//Qual lanche a pessoa escolhe
 		if(lanche==1)//Kids Burguer
 		{
 		cout<<"\n O KIDS BURGER É COMPOSTO POR: ";
 	    cout<<"\n PÃO, CARNE E QUEIJO ";
 		cout<<"\n VOCÊ DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU NÃO (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOCÊ QUER REMOVER? ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM PÃO, APENAS CARNE E QUEIJO - R$"<<valor_lanche ;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "  <<qtde_lanche<<" KIDS BURGER SEM CARNE, APENAS PÃO E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM QUEIJO, APENAS PÃO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM PÃO E CARNE, APENAS QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		 cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM PÃO E QUEIJO, APENAS CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM CARNE E QUEIJO, APENAS PÃO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		cout<<"\n QUANTOS VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER COMPLETO (PÃO, CARNE E QUEIJO) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==2)//X Salada
 		{
 		cout<<"\n O X SALADA É COMPOSTO POR: ";
 	    cout<<"\n PÃO, CARNE, QUEIJO, ALFACE, TOMATE ";
 		cout<<"\n VOCÊ DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU NÃO (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOCÊ QUER REMOVER? (ATÉ 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, APENAS CARNE, QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, APENAS PÃO, QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO " <<qtde_lanche<<" X SALADA SEM QUEIJO, APENAS PÃO, CARNE, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO "<<qtde_lanche<<" X SALADA SEM ALFACE, APENAS PÃO, CARNE, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO "<<qtde_lanche<<" X SALADA SEM TOMATE, APENAS PÃO, CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO E CARNE, APENAS QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		 cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO E QUEIJO, APENAS CARNE, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO E ALFACE, APENAS CARNE, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO E TOMATE, APENAS CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E QUEIJO, APENAS PÃO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E ALFACE, APENAS PÃO, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E TOMATE, APENAS PÃO, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO E ALFACE, APENAS PÃO, CARNE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO E TOMATE, APENAS PÃO, CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM ALFACE E TOMATE, APENAS PÃO, CARNE E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item2;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, CARNE E QUEIJO, APENAS ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, CARNE E ALFACE, APENAS QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, CARNE E TOMATE, APENAS QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, QUEIJO E ALFACE, APENAS CARNE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, QUEIJO E TOMATE, APENAS CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM PÃO, ALFACE E TOMATE, APENAS QUEIJO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, QUEIJO E ALFACE, APENAS PÃO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, QUEIJO E TOMATE, APENAS PÃO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, ALFACE E TOMATE, APENAS PÃO E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO, ALFACE E TOMATE, APENAS PÃO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA COMPLETO (PÃO, CARNE, QUEIJO, ALFACE, TOMATE) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==3)//X Bacon
 		{
 		cout<<"\n O X BACON É COMPOSTO POR: ";
 	    cout<<"\n PÃO, CARNE, QUEIJO, BACON E ALFACE ";
 		cout<<"\n VOCÊ DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU NÃO (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOCÊ QUER REMOVER? (ATÉ 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, APENAS CARNE, QUEIJO, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, APENAS PÃO, QUEIJO, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO, APENAS PÃO, CARNE, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM ALFACE, APENAS PÃO, CARNE, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM BACON, APENAS PÃO, CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO E CARNE, APENAS QUEIJO, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO E QUEIJO, APENAS CARNE, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO E ALFACE, APENAS CARNE, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO E BACON, APENAS CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE E QUEIJO, APENAS PÃO, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE E ALFACE, APENAS PÃO, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO" <<qtde_lanche<<" X BACON SEM CARNE E BACON, APENAS PÃO, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO E ALFACE, APENAS PÃO, CARNE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" X BACON SEM QUEIJO E BACON, APENAS PÃO, CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM ALFACE E BACON, APENAS PÃO, CARNE E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item2;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, CARNE E QUEIJO, APENAS ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, CARNE E ALFACE, APENAS QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, CARNE E BACON, APENAS QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, QUEIJO E ALFACE, APENAS CARNE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, QUEIJO E BACON, APENAS CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM PÃO, ALFACE E BACON, APENAS QUEIJO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, QUEIJO E ALFACE, APENAS PÃO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, QUEIJO E BACON, APENAS PÃO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, ALFACE E BACON, APENAS PÃO E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO, ALFACE E BACON, APENAS PÃO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON COMPLETO (PÃO, CARNE, QUEIJO, BACON, ALFACE) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==4)//Cheddar Burguer
 		{
 		cout<<"\n O CHEDDAR BURGER É COMPOSTO POR: ";
 	    cout<<"\n PÃO, CARNE(x2), MOLHO CHEDDAR(x2) ";
 		cout<<"\n VOCÊ DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU NÃO (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOCÊ QUER REMOVER? ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] MOLHO CHEDDAR";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM PÃO, APENAS CARNE(x2) E MOLHO CHEDDAR(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM CARNE, APENAS PÃO E MOLHO CHEDDAR(X2) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM MOLHO CHEDDAR, APENAS PÃO E CARNE(x2) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] MOLHO CHEDDAR ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM PÃO E CARNE, APENAS MOLHO CHEDDAR(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM PÃO E MOLHO CHEDDAR, APENAS CARNE(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM CARNE E MOLHO CHEDDAR, APENAS PÃO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER COMPLETO (PÃO, CARNE(x2), MOLHO CHEDDAR(x2)) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==5)//Monstro Burger
 		{
 		cout<<"\n O MONSTRO BURGER É COMPOSTO POR: ";
 	    cout<<"\n PÃO, CARNE(x4), QUEIJO(x4), BACON(x4), MOLHO CHEDDAR ";
 		cout<<"\n VOCÊ DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU NÃO (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOCÊ QUER REMOVER? (ATÉ 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, APENAS CARNE(x4), QUEIJO(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, APENAS PÃO, QUEIJO(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO, APENAS PÃO, CARNE(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM MOLHO CHEDDAR, APENAS PÃO, CARNE(x4), QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM BACON, APENAS PÃO, CARNE(x4), QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO E CARNE, APENAS QUEIJO(x4), MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO E QUEIJO, APENAS CARNE(x4), MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO E MOLHO CHEDDAR, APENAS CARNE(x4), QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO E BACON, APENAS CARNE(x4), QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E QUEIJO, APENAS PÃO, MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E MOLHO CHEDDAR, APENAS PÃO, QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E BACON, APENAS PÃO, QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO E MOLHO CHEDDAR, APENAS PÃO, CARNE(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO E BACON, APENAS PÃO, CARNE(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM MOLHO CHEDDAR E BACON, APENAS PÃO, CARNE(x4) E QUEIJO(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] PÃO ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOCÊ DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOCÊ DESEJA REMOVER? ";
 	    cin>>item2;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, CARNE E QUEIJO, APENAS MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, CARNE E MOLHO CHEDDAR, APENAS QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, CARNE E BACON, APENAS QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, QUEIJO E MOLHO CHEDDAR, APENAS CARNE(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, QUEIJO E BACON, APENAS CARNE(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM PÃO, MOLHO CHEDDAR E BACON, APENAS QUEIJO(x4) E CARNE(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, QUEIJO E MOLHO CHEDDAR, APENAS PÃO E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, QUEIJO E BACON, APENAS PÃO E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, MOLHO CHEDDAR E BACON, APENAS PÃO E QUEIJO(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO, MOLHO CHEDDAR E BACON, APENAS PÃO E CARNE(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOCÊ QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER COMPLETO (PÃO, CARNE(x4), QUEIJO(x4), BACON(x4), MOLHO CHEDDAR) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
 		getch();
		break;
	 }
	case 2:{//Fritas
		cout<<"\n [1] FRITAS PEQUENA - R$5,00 ";
		cout<<"\n [2] FRITAS MÉDIA - R$10,00 ";
		cout<<"\n [3] FRITAS GRANDE - R$15,00 ";
		cout<<"\n\n QUAL VOCÊ DESEJA? ";
 		cin>>fritas;
 		if (fritas==1)//Fritas pequena
 		{
 		cout<<"\n VOCÊ DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU NÃO (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOCÊ DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA C/ BACON - R$7,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA C/ CHEDDAR - R$6,50 ";
		cout<<"\n==============================================================================";	
		}
		if(add==3)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA C/ BACON E CHEDDAR - R$8,00 ";	
 		cout<<"\n==============================================================================";
		}
		}
		if(adicional=='N')//sempre que for letra usar aspas
		{
		cout<<"\n==============================================================================";
		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA - R$5,00 ";
		cout<<"\n==============================================================================";
 	    }
 	    }
 	    if (fritas==2)//Fritas média
 		{
 		cout<<"\n VOCÊ DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU NÃO (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOCÊ DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS MÉDIA C/ BACON - R$12,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS MÉDIA C/ CHEDDAR - R$11,50 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==3)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS MÉDIA C/ BACON E CHEDDAR - R$13,00 ";
		cout<<"\n==============================================================================";	
		}
		}
		if(adicional=='N')//sempre que for letra usar aspas
		{
		cout<<"\n==============================================================================";
		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS MÉDIA - R$10,00 ";
		cout<<"\n==============================================================================";
 	    }
 	    }
 	    if (fritas==3)//Fritas grande
 		{
 		cout<<"\n VOCÊ DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU NÃO (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOCÊ DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE C/ BACON - R$17,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE C/ CHEDDAR - R$16,50 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==3)//Sempre que for número, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE C/ BACON E CHEDDAR - R$18,00 ";	
 		cout<<"\n==============================================================================";
		}
		}
		if(adicional=='N')//sempre que for letra usar aspas
		{
		cout<<"\n==============================================================================";
		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE - R$15,00 ";
		cout<<"\n==============================================================================";
 	    }
 	    }
		getch();
		break;
	}//Fim fritas
	case 3:{//bebidas
		cout<<"\n [1] ÁGUA - R$2,50 ";
		cout<<"\n [2] SUCO - R$5,00 ";
		cout<<"\n [3] COCA-COLA - A PARTIR DE R$4,00";
		cout<<"\n [4] GUARANA - A PARTIR DE R$4,00 ";
		cout<<"\n\n QUAL VOCÊ GOSTARIA? ";
 		cin>>bebida;
if(bebida==1)//Agua
 		{
 		 cout<<"\n QUANTOS COPOS? ";
 		 cin>>copos;
 		 cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
 		 cin>>adicional;//adicionar gelo e/ou limão
 		 adicional=toupper(adicional);
 		 if(adicional=='S')
 		 {
 		 	cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LIMÃO ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n===============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA ÁGUA COM " <<copos<< " COPO(S) E GELO - R$2,50" ;
			cout<<"\n===============================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n===============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA ÁGUA COM " <<copos<< " COPO(S) E LIMÃO - R$2,50" ;
			cout<<"\n===============================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n==============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA ÁGUA COM " <<copos<< " COPO(S) E GELO E LIMÃO - R$2,50" ;
			cout<<"\n==============================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n==============================================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA ÁGUA COM " <<copos<< " COPO(S) - R$2,50";
	    cout<<"\n==============================================================================================";
		}
	}getch();//Fim agua
if(bebida==2)
	    {
	    cout<<"\n TEMOS ESSAS OPÇÕES: ";
	    cout<<"\n\n [1] LARANJA - R$5,00";
	    cout<<"\n [2] LIMÃO - R$5,00";
	    cout<<"\n\n QUAL SABOR? ";
	    cin>>sabor;
 	if(sabor==1)//Suco de Laranja
 	{
 		 cout<<"\n VOCÊ GOSTARIA DE GELO? SIM (S) OU NÃO (N)";
 		 cin>>adicional;//adicionar gelo 
 		 adicional=toupper(adicional);
 		 if(adicional=='S')
 		{
 		cout<<"\n================================================================================";
		cout<<"SEU PEDIDO FOI CONFIRMADO COMO UM COPO DE SUCO DE LARANJA COM GELO - R$5,00" ;
		cout<<"\n================================================================================";
		}
		 if(adicional=='N')
		{
		cout<<"\n================================================================================";
		cout<<"\nSEU PEDIDO FOI CONFIRMADO COMO UM SUCO DE LARANJA - R$5,00";
		cout<<"\n================================================================================";
		}
	}//Fim suco de laranja
	if(sabor==2)//Suco de limão
 	{
 		 cout<<"\n VOCÊ GOSTARIA DE GELO? SIM (S) OU NÃO (N)";
 		 cin>>adicional;//adicionar gelo
 		 adicional=toupper(adicional);
 		 if(adicional=='S')
 		{
 		cout<<"\n================================================================================";
		cout<<"\nSEU PEDIDO FOI CONFIRMADO COMO UM COPO DE SUCO DE LIMÃO COM GELO - R$5,00" ;
		cout<<"\n================================================================================";
		}
		 if(adicional=='N')
		{
		cout<<"\n================================================================================";
		cout<<"\nSEU PEDIDO FOI CONFIRMADO COMO UM SUCO DE LIMÃO - R$5,00";
		cout<<"\n================================================================================";
		}
		}//Fim suco de limão
	}getch();
if(bebida==3)//Coca-Cola
        {
        cout<<"\n AQUI TEMOS AS OPÇÕES DE TAMANHO: ";
        cout<<"\n\n [1]COCA-COLA LATA - R$4,00 ";
        cout<<"\n [2]COCA-COLA 600ML - R$6,00 ";
        cout<<"\n [3]COCA-COLA 2 LITROS - R$12,00 ";
        cout<<"\n\n QUAL VOCÊ PREFERE? ";
        cin>>tamanho;
        cout<<"\n\n QUANTOS COPOS? ";
        cin>>copos;
    if(tamanho==1)//Lata
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LIMÃO ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) E GELO - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) E LIMÃO - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) E GELO E LIMÃO - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    }
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) - R$4,00";
	    cout<<"\n===========================================================================";
		}
	    }//Fim lata
		if(tamanho==2)//600ML
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LIMÃO ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) E GELO - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) E LIMÃO - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) E GELO E LIMÃO - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) - R$6,00";
	    cout<<"\n===========================================================================";
		}
		}//Fim 600ML
		if(tamanho==3)//2 Litros
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LIMÃO ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) E GELO - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) E LIMÃO - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) E GELO E LIMÃO - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) - R$12,00";
	    cout<<"\n===========================================================================";
		}
		}//Fim 2 Litros
		getch();
		break;
	}
	if(bebida==4)//Guarana
        {
        cout<<"\n AQUI TEMOS AS OPÇÕES DE TAMANHO: ";
        cout<<"\n\n [1]GUARANA LATA - R$4,00 ";
        cout<<"\n [2]GUARANA 600ML - R$6,00 ";
        cout<<"\n [3]GUARANA 2 LITROS - R$12,00 ";
        cout<<"\n\n QUAL VOCÊ PREFERE? ";
        cin>>tamanho;
        cout<<"\n\n QUANTOS COPOS? ";
        cin>>copos;
    if(tamanho==1)//Lata
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LARANJA ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA LATA COM " <<copos<< " COPO(S) E GELO - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA LATA COM " <<copos<< " COPO(S) E LARANJA - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA LATA COM " <<copos<< " COPO(S) E GELO E LARANJA - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    }
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA LATA COM " <<copos<< " COPO(S) - R$4,00";
	    cout<<"\n===========================================================================";
		}
	    }//Fim lata
		if(tamanho==2)//600ML
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 600ML COM " <<copos<< " COPO(S) E GELO - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 600ML COM " <<copos<< " COPO(S) E LARANJA - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 600ML COM " <<copos<< " COPO(S) E GELO E LARANJA - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 600ML COM " <<copos<< " COPO(S) - R$6,00";
	    cout<<"\n===========================================================================";
		}
		}//Fim 600ML
		if(tamanho==3)//2 Litros
           {
           	cout<<"\n VOCÊ GOSTARIA DE GELO OU LIMÃO? SIM (S) OU NÃO (N)";
           	cin>>adicional;//adicionar gelo e/ou limão
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIMÃO ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOCÊ QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 2 LITROS COM " <<copos<< " COPO(S) E GELO - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 2 LITROS COM " <<copos<< " COPO(S) E LARANJA - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 2 LITROS COM " <<copos<< " COPO(S) E GELO E LARANJA - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n===========================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UM GUARANA 2 LITROS COM " <<copos<< " COPO(S) - R$12,00";
	    cout<<"\n===========================================================================";
		}
		}//Fim 2 Litros
		getch();
		break;
 }
 }
}
}while(escolha!=4);
 cout<<"\n QUAL VAI SER A FORMA DE PAGAMENTO? " ;
 cout<<"\n CARTÃO (1) OU DINHEIRO (2) ";
 cin>>pay;
 if(pay==1)
 {
 	cout<<"\n VOCÊ PODE INSERIR O CARTÃO NO LOCAL INDICADO: (APERTE QUALQUER NÚMERO DEPOIS DE INSERIDO) ";
 	cin>>final;
 	cout<<"\n PAGAMENTO CONFIRMADO! ";
 	cout<<"\n OBRIGADO PELA SUA VISITA, VOLTE SEMPRE! ";
 }
 if(pay==2)
 {
 	cout<<"\n VOCÊ PODE INSERIR O DINHEIRO NO LOCAL INDICADO: (APERTE QUALQUER NÚMERO DEPOIS DE INSERIDO) ";
 	cin>>final;
 	cout<<"\n PAGAMENTO CONFIRMADO! ";
 	cout<<"\n OBRIGADO PELA SUA VISITA, VOLTE SEMPRE! ";
 }
}

 
 
