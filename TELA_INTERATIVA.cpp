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
 cout<<"\n\n VAMOS COME�AR O PEDIDO? ";//Card�pio
 cout<<"\n\n [1] - LANCHES ";
 cout<<"\n [2] - FRITAS ";
 cout<<"\n [3] - BEBIDAS ";
 cout<<"\n [4] - ENCERRAR PEDIDO ";
 cout<<"\n\n ESCOLHA UMA OP��O: ";
 cin>>escolha;
 switch(escolha)
 {
 	case 1:{//Lanches
 		cout<<"\n [1] KIDS BURGER - R$2,00";
 		cout<<"\n [2] X-SALADA - R$3,00";
 		cout<<"\n [3] X-BACON - R$5,00";
 		cout<<"\n [4] CHEDDAR BURGER - R$8,00";
 		cout<<"\n [5] MONSTRO BURGER - R$20,00";
 		cout<<"\n\n QUAL VOC� DESEJA? ";
 		cin>>lanche;//Qual lanche a pessoa escolhe
 		if(lanche==1)//Kids Burguer
 		{
 		cout<<"\n O KIDS BURGER � COMPOSTO POR: ";
 	    cout<<"\n P�O, CARNE E QUEIJO ";
 		cout<<"\n VOC� DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU N�O (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOC� QUER REMOVER? ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM P�O, APENAS CARNE E QUEIJO - R$"<<valor_lanche ;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "  <<qtde_lanche<<" KIDS BURGER SEM CARNE, APENAS P�O E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM QUEIJO, APENAS P�O E CARNE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM P�O E CARNE, APENAS QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		 cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM P�O E QUEIJO, APENAS CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER SEM CARNE E QUEIJO, APENAS P�O - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		cout<<"\n QUANTOS VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*2.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" KIDS BURGER COMPLETO (P�O, CARNE E QUEIJO) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==2)//X Salada
 		{
 		cout<<"\n O X SALADA � COMPOSTO POR: ";
 	    cout<<"\n P�O, CARNE, QUEIJO, ALFACE, TOMATE ";
 		cout<<"\n VOC� DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU N�O (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOC� QUER REMOVER? (AT� 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, APENAS CARNE, QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, APENAS P�O, QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO " <<qtde_lanche<<" X SALADA SEM QUEIJO, APENAS P�O, CARNE, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO "<<qtde_lanche<<" X SALADA SEM ALFACE, APENAS P�O, CARNE, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONIRMADO COMO "<<qtde_lanche<<" X SALADA SEM TOMATE, APENAS P�O, CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O E CARNE, APENAS QUEIJO, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		 cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O E QUEIJO, APENAS CARNE, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O E ALFACE, APENAS CARNE, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O E TOMATE, APENAS CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E QUEIJO, APENAS P�O, ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E ALFACE, APENAS P�O, QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE E TOMATE, APENAS P�O, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO E ALFACE, APENAS P�O, CARNE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO E TOMATE, APENAS P�O, CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM ALFACE E TOMATE, APENAS P�O, CARNE E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] TOMATE ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item2;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, CARNE E QUEIJO, APENAS ALFACE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, CARNE E ALFACE, APENAS QUEIJO E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, CARNE E TOMATE, APENAS QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, QUEIJO E ALFACE, APENAS CARNE E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, QUEIJO E TOMATE, APENAS CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM P�O, ALFACE E TOMATE, APENAS QUEIJO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, QUEIJO E ALFACE, APENAS P�O E TOMATE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, QUEIJO E TOMATE, APENAS P�O E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM CARNE, ALFACE E TOMATE, APENAS P�O E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA SEM QUEIJO, ALFACE E TOMATE, APENAS P�O E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*3.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X SALADA COMPLETO (P�O, CARNE, QUEIJO, ALFACE, TOMATE) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==3)//X Bacon
 		{
 		cout<<"\n O X BACON � COMPOSTO POR: ";
 	    cout<<"\n P�O, CARNE, QUEIJO, BACON E ALFACE ";
 		cout<<"\n VOC� DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU N�O (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOC� QUER REMOVER? (AT� 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, APENAS CARNE, QUEIJO, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, APENAS P�O, QUEIJO, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO, APENAS P�O, CARNE, BACON E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM ALFACE, APENAS P�O, CARNE, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM BACON, APENAS P�O, CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O E CARNE, APENAS QUEIJO, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O E QUEIJO, APENAS CARNE, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O E ALFACE, APENAS CARNE, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O E BACON, APENAS CARNE, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE E QUEIJO, APENAS P�O, ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE E ALFACE, APENAS P�O, QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO" <<qtde_lanche<<" X BACON SEM CARNE E BACON, APENAS P�O, QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO E ALFACE, APENAS P�O, CARNE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO " <<qtde_lanche<<" X BACON SEM QUEIJO E BACON, APENAS P�O, CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM ALFACE E BACON, APENAS P�O, CARNE E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] ALFACE ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item2;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, CARNE E QUEIJO, APENAS ALFACE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, CARNE E ALFACE, APENAS QUEIJO E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, CARNE E BACON, APENAS QUEIJO E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, QUEIJO E ALFACE, APENAS CARNE E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, QUEIJO E BACON, APENAS CARNE E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM P�O, ALFACE E BACON, APENAS QUEIJO E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, QUEIJO E ALFACE, APENAS P�O E BACON - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, QUEIJO E BACON, APENAS P�O E ALFACE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM CARNE, ALFACE E BACON, APENAS P�O E QUEIJO - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON SEM QUEIJO, ALFACE E BACON, APENAS P�O E CARNE - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*5.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" X BACON COMPLETO (P�O, CARNE, QUEIJO, BACON, ALFACE) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==4)//Cheddar Burguer
 		{
 		cout<<"\n O CHEDDAR BURGER � COMPOSTO POR: ";
 	    cout<<"\n P�O, CARNE(x2), MOLHO CHEDDAR(x2) ";
 		cout<<"\n VOC� DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU N�O (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOC� QUER REMOVER? ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] MOLHO CHEDDAR";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM P�O, APENAS CARNE(x2) E MOLHO CHEDDAR(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM CARNE, APENAS P�O E MOLHO CHEDDAR(X2) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM MOLHO CHEDDAR, APENAS P�O E CARNE(x2) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] MOLHO CHEDDAR ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM P�O E CARNE, APENAS MOLHO CHEDDAR(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM P�O E MOLHO CHEDDAR, APENAS CARNE(x2) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER SEM CARNE E MOLHO CHEDDAR, APENAS P�O - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*8.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" CHEDDAR BURGER COMPLETO (P�O, CARNE(x2), MOLHO CHEDDAR(x2)) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
		if(lanche==5)//Monstro Burger
 		{
 		cout<<"\n O MONSTRO BURGER � COMPOSTO POR: ";
 	    cout<<"\n P�O, CARNE(x4), QUEIJO(x4), BACON(x4), MOLHO CHEDDAR ";
 		cout<<"\n VOC� DESEJA REMOVER ALGUM DESSES ITENS? SIM (S) OU N�O (N) ";
 		cin>>remover;
 		remover=toupper(remover);
 		if(remover=='S')
 		{
		cout<<"\n QUANTOS ITENS VOC� QUER REMOVER? (AT� 3 ITENS) ";
		cin>>qtde;
	if(qtde==1)//remover apenas um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, APENAS CARNE(x4), QUEIJO(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, APENAS P�O, QUEIJO(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==3)
		{
		 cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO, APENAS P�O, CARNE(x4), BACON(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM MOLHO CHEDDAR, APENAS P�O, CARNE(x4), QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
		if(item==5)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM BACON, APENAS P�O, CARNE(x4), QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n========================================================================================";	
		}
	    }
	if(qtde==2)//Remover mais de um item
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1&&item1==2||item==2&&item1==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O E CARNE, APENAS QUEIJO(x4), MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3||item==3&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O E QUEIJO, APENAS CARNE(x4), MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4||item==4&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O E MOLHO CHEDDAR, APENAS CARNE(x4), QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==5||item==5&&item1==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O E BACON, APENAS CARNE(x4), QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3||item==3&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E QUEIJO, APENAS P�O, MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4||item==4&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E MOLHO CHEDDAR, APENAS P�O, QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==5||item==5&&item1==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE E BACON, APENAS P�O, QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4||item==4&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO E MOLHO CHEDDAR, APENAS P�O, CARNE(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==5||item==5&&item1==3)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO E BACON, APENAS P�O, CARNE(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==4&&item1==5||item==5&&item1==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM MOLHO CHEDDAR E BACON, APENAS P�O, CARNE(x4) E QUEIJO(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
	    if(qtde==3)//Remover 3 itens
		{
		cout<<"\n DOS SEGUINTES ITENS: ";
		cout<<"\n [1] P�O ";
 	    cout<<"\n [2] CARNE ";
 	    cout<<"\n [3] QUEIJO ";
 	    cout<<"\n [4] MOLHO CHEDDAR ";
 	    cout<<"\n [5] BACON ";
 	    cout<<"\n QUAL VOC� DESEJA REMOVER? ";
 	    cin>>item;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item1;
 	    cout<<"\n QUAL OUTRO ITEM VOC� DESEJA REMOVER? ";
 	    cin>>item2;
 	     cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
 	    if(item==1&&item1==2&&item2==3||item==1&&item1==3&&item2==2||item==2&&item1==1&&item2==3||item==2&&item1==3&&item2==1||item==3&&item1==1&&item2==2||item==3&&item1==2&&item2==1)
 	    {
 	    cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, CARNE E QUEIJO, APENAS MOLHO CHEDDAR E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==4||item==1&&item1==4&&item2==2||item==2&&item1==1&&item2==4||item==2&&item1==4&&item2==1||item==4&&item1==1&&item2==2||item==4&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, CARNE E MOLHO CHEDDAR, APENAS QUEIJO(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==2&&item2==5||item==1&&item1==5&&item2==2||item==2&&item1==1&&item2==5||item==2&&item1==5&&item2==1||item==5&&item1==1&&item2==2||item==5&&item1==2&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, CARNE E BACON, APENAS QUEIJO(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==4||item==1&&item1==3&&item2==4||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1||item==3&&item1==1&&item2==4||item==3&&item1==4&&item2==1)
		{
		cout<<"\n======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, QUEIJO E MOLHO CHEDDAR, APENAS CARNE(x4) E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==3&&item2==5||item==1&&item1==3&&item2==5||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1||item==3&&item1==1&&item2==5||item==3&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, QUEIJO E BACON, APENAS CARNE(x4) E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==1&&item1==4&&item2==5||item==1&&item1==4&&item2==5||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1||item==4&&item1==1&&item2==5||item==4&&item1==5&&item2==1)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM P�O, MOLHO CHEDDAR E BACON, APENAS QUEIJO(x4) E CARNE(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==4||item==2&&item1==4&&item2==3||item==3&&item1==2&&item2==4||item==3&&item1==4&&item2==2||item==4&&item1==2&&item2==3||item==4&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, QUEIJO E MOLHO CHEDDAR, APENAS P�O E BACON(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==3&&item2==5||item==2&&item1==5&&item2==3||item==3&&item1==2&&item2==5||item==3&&item1==5&&item2==2||item==5&&item1==2&&item2==3||item==5&&item1==3&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, QUEIJO E BACON, APENAS P�O E MOLHO CHEDDAR - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==2&&item1==4&&item2==5||item==2&&item1==5&&item2==4||item==4&&item1==2&&item2==5||item==4&&item1==5&&item2==2||item==5&&item1==2&&item2==4||item==5&&item1==4&&item2==2)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM CARNE, MOLHO CHEDDAR E BACON, APENAS P�O E QUEIJO(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		if(item==3&&item1==4&&item2==5||item==3&&item1==5&&item2==4||item==4&&item1==3&&item2==5||item==4&&item1==5&&item2==3||item==5&&item1==4&&item2==3||item==5&&item1==3&&item2==4)
		{
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER SEM QUEIJO, MOLHO CHEDDAR E BACON, APENAS P�O E CARNE(x4) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
	    }
		}
		if(remover=='N')
		{
		 cout<<"\n QUANTOS LANCHES DESSE TIPO VOC� QUER? ";
 	    cin>>qtde_lanche;
 	    valor_lanche=qtde_lanche*20.00;
		cout<<"\n=======================================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO "<<qtde_lanche<<" MONSTRO BURGER COMPLETO (P�O, CARNE(x4), QUEIJO(x4), BACON(x4), MOLHO CHEDDAR) - R$"<<valor_lanche;	
 		cout<<"\n=======================================================================================";	
		}
		}
 		getch();
		break;
	 }
	case 2:{//Fritas
		cout<<"\n [1] FRITAS PEQUENA - R$5,00 ";
		cout<<"\n [2] FRITAS M�DIA - R$10,00 ";
		cout<<"\n [3] FRITAS GRANDE - R$15,00 ";
		cout<<"\n\n QUAL VOC� DESEJA? ";
 		cin>>fritas;
 		if (fritas==1)//Fritas pequena
 		{
 		cout<<"\n VOC� DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU N�O (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOC� DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA C/ BACON - R$7,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS PEQUENA C/ CHEDDAR - R$6,50 ";
		cout<<"\n==============================================================================";	
		}
		if(add==3)//Sempre que for n�mero, n usar aspas.
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
 	    if (fritas==2)//Fritas m�dia
 		{
 		cout<<"\n VOC� DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU N�O (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOC� DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS M�DIA C/ BACON - R$12,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS M�DIA C/ CHEDDAR - R$11,50 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==3)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS M�DIA C/ BACON E CHEDDAR - R$13,00 ";
		cout<<"\n==============================================================================";	
		}
		}
		if(adicional=='N')//sempre que for letra usar aspas
		{
		cout<<"\n==============================================================================";
		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS M�DIA - R$10,00 ";
		cout<<"\n==============================================================================";
 	    }
 	    }
 	    if (fritas==3)//Fritas grande
 		{
 		cout<<"\n VOC� DESEJA COLOCAR ALGUM ADICIONAL? SIM(S) OU N�O (N) ";
 		cin>>adicional;
 		adicional=toupper(adicional);
 		if(adicional=='S') //sempre que for letra usar aspas
 		{
 		cout<<"\n [1] BACON - R$2,00 ";
 		cout<<"\n [2] CHEDDAR - R$1,50 ";
 		cout<<"\n [3] BACON E CHEDDAR - R$3,00 ";
 		cout<<"\n\n QUAL VOC� DESEJA? ";
 		cin>>add;
 		if(add==1)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE C/ BACON - R$17,00 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==2)//Sempre que for n�mero, n usar aspas.
 		{
 		cout<<"\n==============================================================================";
 		cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO FRITAS GRANDE C/ CHEDDAR - R$16,50 ";	
 		cout<<"\n==============================================================================";
		}
		if(add==3)//Sempre que for n�mero, n usar aspas.
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
		cout<<"\n [1] �GUA - R$2,50 ";
		cout<<"\n [2] SUCO - R$5,00 ";
		cout<<"\n [3] COCA-COLA - A PARTIR DE R$4,00";
		cout<<"\n [4] GUARANA - A PARTIR DE R$4,00 ";
		cout<<"\n\n QUAL VOC� GOSTARIA? ";
 		cin>>bebida;
if(bebida==1)//Agua
 		{
 		 cout<<"\n QUANTOS COPOS? ";
 		 cin>>copos;
 		 cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
 		 cin>>adicional;//adicionar gelo e/ou lim�o
 		 adicional=toupper(adicional);
 		 if(adicional=='S')
 		 {
 		 	cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LIM�O ";
 		 	cout<<"\n QUAL VOC� QUER? ";
			cin>>add;
			if(add==1)
			{
			cout<<"\n===============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA �GUA COM " <<copos<< " COPO(S) E GELO - R$2,50" ;
			cout<<"\n===============================================================================================";
		    }
		    if(add==2)
			{
			cout<<"\n===============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA �GUA COM " <<copos<< " COPO(S) E LIM�O - R$2,50" ;
			cout<<"\n===============================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n==============================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA �GUA COM " <<copos<< " COPO(S) E GELO E LIM�O - R$2,50" ;
			cout<<"\n==============================================================================================";
		    }
		}
		if(adicional=='N')
		{
		cout<<"\n==============================================================================================";
	    cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA �GUA COM " <<copos<< " COPO(S) - R$2,50";
	    cout<<"\n==============================================================================================";
		}
	}getch();//Fim agua
if(bebida==2)
	    {
	    cout<<"\n TEMOS ESSAS OP��ES: ";
	    cout<<"\n\n [1] LARANJA - R$5,00";
	    cout<<"\n [2] LIM�O - R$5,00";
	    cout<<"\n\n QUAL SABOR? ";
	    cin>>sabor;
 	if(sabor==1)//Suco de Laranja
 	{
 		 cout<<"\n VOC� GOSTARIA DE GELO? SIM (S) OU N�O (N)";
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
	if(sabor==2)//Suco de lim�o
 	{
 		 cout<<"\n VOC� GOSTARIA DE GELO? SIM (S) OU N�O (N)";
 		 cin>>adicional;//adicionar gelo
 		 adicional=toupper(adicional);
 		 if(adicional=='S')
 		{
 		cout<<"\n================================================================================";
		cout<<"\nSEU PEDIDO FOI CONFIRMADO COMO UM COPO DE SUCO DE LIM�O COM GELO - R$5,00" ;
		cout<<"\n================================================================================";
		}
		 if(adicional=='N')
		{
		cout<<"\n================================================================================";
		cout<<"\nSEU PEDIDO FOI CONFIRMADO COMO UM SUCO DE LIM�O - R$5,00";
		cout<<"\n================================================================================";
		}
		}//Fim suco de lim�o
	}getch();
if(bebida==3)//Coca-Cola
        {
        cout<<"\n AQUI TEMOS AS OP��ES DE TAMANHO: ";
        cout<<"\n\n [1]COCA-COLA LATA - R$4,00 ";
        cout<<"\n [2]COCA-COLA 600ML - R$6,00 ";
        cout<<"\n [3]COCA-COLA 2 LITROS - R$12,00 ";
        cout<<"\n\n QUAL VOC� PREFERE? ";
        cin>>tamanho;
        cout<<"\n\n QUANTOS COPOS? ";
        cin>>copos;
    if(tamanho==1)//Lata
           {
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LIM�O ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) E LIM�O - R$4,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA LATA COM " <<copos<< " COPO(S) E GELO E LIM�O - R$4,00" ;
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
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LIM�O ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) E LIM�O - R$6,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 600ML COM " <<copos<< " COPO(S) E GELO E LIM�O - R$6,00" ;
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
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LIM�O ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) E LIM�O - R$12,00" ;
			cout<<"\n================================================================================";
		    }
		    if(add==3)
			{
			cout<<"\n================================================================================";
			cout<<"\n SEU PEDIDO FOI CONFIRMADO COMO UMA COCA-COLA 2 LITROS COM " <<copos<< " COPO(S) E GELO E LIM�O - R$12,00" ;
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
        cout<<"\n AQUI TEMOS AS OP��ES DE TAMANHO: ";
        cout<<"\n\n [1]GUARANA LATA - R$4,00 ";
        cout<<"\n [2]GUARANA 600ML - R$6,00 ";
        cout<<"\n [3]GUARANA 2 LITROS - R$12,00 ";
        cout<<"\n\n QUAL VOC� PREFERE? ";
        cin>>tamanho;
        cout<<"\n\n QUANTOS COPOS? ";
        cin>>copos;
    if(tamanho==1)//Lata
           {
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LARANJA ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
           	cout<<"\n VOC� GOSTARIA DE GELO OU LIM�O? SIM (S) OU N�O (N)";
           	cin>>adicional;//adicionar gelo e/ou lim�o
 		    adicional=toupper(adicional);
 		    if(adicional=='S')
 		    {
		    cout<<"\n [1] GELO ";
 		 	cout<<"\n [2] LIM�O ";
 		 	cout<<"\n [3] GELO E LARANJA ";
 		 	cout<<"\n QUAL VOC� QUER? ";
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
 cout<<"\n CART�O (1) OU DINHEIRO (2) ";
 cin>>pay;
 if(pay==1)
 {
 	cout<<"\n VOC� PODE INSERIR O CART�O NO LOCAL INDICADO: (APERTE QUALQUER N�MERO DEPOIS DE INSERIDO) ";
 	cin>>final;
 	cout<<"\n PAGAMENTO CONFIRMADO! ";
 	cout<<"\n OBRIGADO PELA SUA VISITA, VOLTE SEMPRE! ";
 }
 if(pay==2)
 {
 	cout<<"\n VOC� PODE INSERIR O DINHEIRO NO LOCAL INDICADO: (APERTE QUALQUER N�MERO DEPOIS DE INSERIDO) ";
 	cin>>final;
 	cout<<"\n PAGAMENTO CONFIRMADO! ";
 	cout<<"\n OBRIGADO PELA SUA VISITA, VOLTE SEMPRE! ";
 }
}

 
 
