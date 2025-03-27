#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Fa1 = 1,Fa2 = 1,Fb1 = 1,Fb2 = 1; //Furias
	int Atacar, Mirar; // Op��es de a��o
	int Jogador = 1; // Turno
	int menu = 0, escolhaa, pontuacaoa, instrucao = 0;//Parte mais tecnica
	int playerA, playerB, cobra,sorte = 0, botao, comeco = 0, vez; //Jogo 2
	char playerC[20], playerD[20]; //Armazenar nomes
    printf("BEM VINDO AO MINIWORLD\n");
    while (menu == 0){
    printf("\nEscolha um minigame:\n1.Perguntas e respostas\n2.Cobra na caixa\n3.Gousmas no mar\n4.Sair\n");
    scanf ("%i", &menu);
    while (menu == 1){
 	   	pontuacaoa = 0;
		printf ("\nPerguntas e respostas\nNesse jogo ser�o feitas cinco perguntas de multipla escolha envolvendo conhecimento geral\n\nQual � o maior oceano do mundo?\n1) Oceano Pac�fico\n2) Oceano �ndico\n3) Oceano Atl�ntico\n4) Oceano �rtico\n");
		scanf ("%i", &escolhaa);
		if(escolhaa == 1){
			printf("Resposta certa!\n");
			pontuacaoa++;
		}
		else{
			printf ("Resposta errada!\nGabarito: Oceano Pac�fico\n");
		}
		printf ("Quem pintou a obra 'A �ltima Ceia'\n1) Vincent van Gogh\n2) Michelangelo\n3) Pablo Picasso\n4) Leonardo da Vinci\n");
		scanf ("%i", &escolhaa);
		if(escolhaa == 4){
			printf ("Resposta certa!\n");
			pontuacaoa++;
		}
		else {
			printf ("Resposta errada!\nGabarito: Leonardo da Vinci\n");
		}
		printf("Qual � o elemento qu�mico mais abundante no universo?\n1) Oxig�nio\n2) Hidrog�nio\n3) Carbono\n4) H�lio\n");
		scanf ("%i", &escolhaa);
		if (escolhaa == 2){
			printf("Resposta certa!\n");
			pontuacaoa++;
		}
		else{
			printf("Resposta errada!\nGabarito:Hidrog�nio\n");
		} 
		printf ("Em que ano ocorreu a Independ�ncia do Brasil?\n1) 1808\n2) 1822\n3) 1889\n4) 1910\n");
		scanf ("%i", &escolhaa);
		if (escolhaa == 2){
			printf("Resposta certa!\n");
			pontuacaoa++;
		}
		else {
			printf("Resposta errada!\nGabarito: 1822\n");
		}
		printf ("Qual � o pa�s com a maior popula��o do mundo em 2024?\n1) �ndia\n2) China\n3) Indon�sia\n4) Estados Unidos\n");
		scanf ("%i", &escolhaa);
		if (escolhaa == 1){
			printf ("Resposta certa!\n");
			pontuacaoa++;
		}
		else{
			printf ("Resposta errada!\nGabarito: �ndia\n");
		}
		if(pontuacaoa !=5 && pontuacaoa != 1){
			printf ("\nVoc� acertou %i quest�es\n", pontuacaoa);
		}else if (pontuacaoa == 1){
			printf ("Voc� acertou %d quest�o\n", pontuacaoa);
		}
		else if (pontuacaoa == 5) {
			printf ("\nParab�ns! Voc� acertou todas as quest�es!\n");
		}
		printf ("\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n");
		scanf ("%i", &escolhaa);
		if (escolhaa == 1){
			menu = 1;
		}
		else if (escolhaa == 2) {
			menu = 0;
		}
	}
	while(menu == 2){
    
    	while(instrucao == 0){
    		
			printf("\nPor terem invocado  a maldi��o de um antigo fara�, dois aventureiros de sua escolha est�o aprisionados em uma dimens�o onde o unico jeito de sair � encontrando um bot�o entre 5 caixas espalhadas pela sala onde est�o presos,entretanto, em uma das caixas tamb�m h� uma cobra que envenenar� os aventureiros at� a morte se for encontrada, agora cabe aos aventureiros acharem o bot�o que lhes trar� de volta a sua dimens�o, ou morrer tentando...\n");
			instrucao++;
			
			}
    	
    while (comeco < 1){
    	
	printf("\nEscolha um personagem\n1) John\n2) Carl\n3) Claus\n4) Vitor\n5) Nico\n6) Luiz\n7) Ton\n");
    	
	printf("\nJogador 1: ");
	
	scanf ("%d", &playerA);
	if (playerA == 1){
		strcpy(playerC, "John");
		comeco += 1;
	}else if (playerA == 2){
		strcpy(playerC, "Carl");
		comeco += 1;
	} else if (playerA == 3){
		strcpy(playerC, "Claus");
		comeco += 1;
	} else if (playerA == 4){
		strcpy(playerC, "Vitor");
		comeco += 1;
	} else if (playerA == 5){
		strcpy(playerC, "Nico");
		comeco += 1;
	} else if (playerA == 6){
		strcpy(playerC, "Luiz");
		comeco += 1;
	} else if (playerA == 7){
		strcpy(playerC, "Ton");
		comeco += 1;
	}else{
		printf("Escolha invalida\n");
	} 
	
	printf("\nJogador 2: ");
	
	scanf("%d", &playerB);
	if (playerB == 1){
	strcpy(playerD, "John");
	comeco += 1;
	}else if (playerB == 2){
		strcpy(playerD, "Carl");
		comeco += 1;
	} else if (playerB == 3){
		strcpy(playerD, "Claus");
		comeco += 1;
	} else if (playerB == 4){
		strcpy(playerD, "Vitor");
		comeco += 1;
	} else if (playerB == 5){
		strcpy(playerD, "Nico");
		comeco += 1;
	} else if (playerB == 6){
		strcpy(playerD, "Luiz");
		comeco += 1;
	} else if (playerB == 7){
		strcpy(playerD, "Ton");
		comeco += 1;
	} else{
		printf("Escolha invalida\n");
	} 
		}
	for (sorte = 0;sorte<2;sorte++){
	srand(time(0));
	
	   	vez =  (rand () %2);
	   	botao = (rand () %5) + 1;
		cobra = (rand () %5) + 1;
		
	}
	
	if (vez == 0){

		printf("\nVez de %s\n\nEscolha uma das 5 caixas:\n", playerC);
		scanf("%d", &escolhaa);
		if (escolhaa == botao){
			printf ("%s Achou o botao, Ambos aventureiros est�o livres para fugir!\n\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n", playerC);
			scanf("%d", &escolhaa);
			if (escolhaa == 2){
				menu = 0;
				instrucao = 0;
			}else{
				comeco = 0;
				sorte = 0;
			}
		} else if (escolhaa == cobra){
			printf("%s Abriu uma caixa e encontrou uma cobra que matou os aventureiros de envenenamento!\n\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n", playerC);
			scanf("%d", &escolhaa);
			if (escolhaa == 2){
				menu = 0;
				instrucao = 0;
			}else{
				comeco = 0;
				sorte = 0;
			}
		}else{
			printf ("%s Abriu uma caixa, mas nao encontrou nada.\nO botao e a cobra mudaram de posicao.\n", playerC);
		botao = (rand () %5) + 1;
		cobra = (rand () %5) + 1;
			vez = (vez == 0) ? 1:0;
		}
	}
		if (vez == 1){
		printf("\nVez de %s\n\nEscolha uma das 5 caixas:\n", playerD);
		scanf("%d", &escolhaa);
		if (escolhaa == botao){
			printf ("\n%s Achou o botao, ambos aventureiros est�o livres para fugir!\n\n1.JOGAR NOVAMENTE\n2.SAIR\n", playerD);
			scanf("%d", &escolhaa);
			if (escolhaa == 2){
				menu = 0;
				instrucao = 0;
			}else{
				comeco = 0;
				sorte = 0;
			}
		} else if (escolhaa == cobra){
			printf("\n%s Abriu a caixa e encontrou uma cobra que matou os aventureiros de envenenamento!\n\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n", playerD);
			scanf("%d", &escolhaa);
			if (escolhaa == 2){
				menu = 0;
				instrucao = 0;
			}else {
				comeco = 0;
				sorte = 0;
			}
		}else{
			printf ("\n%s Abriu uma caixa, mas nao encontrou nada.\nO botao e a cobra mudaram de posi��o.\n", playerD);
		botao = (rand () %5) + 1;
		cobra = (rand () %5) + 1;
			vez = (vez == 0) ? 1:0;
		}
	}
	}
	while (menu == 3){
		if (instrucao == 0){
		//Instru��es
		printf ("\nGousmas no mar\nNeste jogo, dois jogadores controlar�o duas criaturas chamadas gousmas, e lutar�o entre s�!\n\nINSTRU��ES\nCada jogador inicia com duas gousmas, cada uma com n�vel de f�ria 1.\nQuando uma Gousma ataca outra, transfere todo o seu n�vel de f�ria para a Gousma atacada.\nSe uma Gousma atingir um n�vel de f�ria maior que 5, ela se desintegra.\nO jogador pode optar por dividir uma Gousma, transferindo uma parte da f�ria para uma nova Gousma (respeitando o limite de duas Gousmas por jogador).\nO jogador que perder todas as suas Gousmas ser� derrotado.\n");
		instrucao = 1;
		}
	printf("\nVEZ DE JOGADOR %i\n", Jogador);
	if(Jogador == 1){//Pontua��o Jogador 1
		if (Fa1 != 0){
	printf("\nGousma A : %i\n", Fa1);
		}if (Fa2 != 0){
	printf("\nGousma B: %i\n", Fa2);
		}
	} else {//PONTUA��O JOGADOR 2
	if (Fb1 != 0){
	printf("\nGousma C : %i\n", Fb1);
	} if (Fb2 != 0){
	printf("\nGousma D: %i\n", Fb2);
	}
	}
	printf("\nEscolha uma a��o:\n\n1.Atacar\n");
	if (Jogador == 1 && (Fa1 == 0 || Fa2 == 0)){
	printf("2.Dividir\n");
	} else if (Jogador == 2 && (Fb1 == 0 || Fb2 ==0)){
		printf ("2.Dividir\n");
	}
	scanf("%i", &escolhaa);
	if(escolhaa == 1 && Jogador == 1){//Ataque Jogador 1
	printf("\nEscolha a Gousma atacante\n");
	if (Fa1 != 0){
	printf ("\n1.Gousma A\n");
	}if (Fa2 != 0){
	printf ("\n2.Gousma B\n");
	}
	scanf ("%i", &Atacar);
	printf ("\nEscolha o seu alvo\n");
	if (Fb1 != 0){
	printf ("\n1.Gousma C\n");
	} if (Fb2 != 0){
	printf ("\n2.Gousma D\n");
	}
	scanf ("%i", &Mirar);
	
	if (Jogador == 1){ //Mecanica de dano
	if (Atacar == 1 && Mirar == 1){
		if (Fb1 == 0 || Fa1 == 0){
			printf ("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
		} else{
		Fb1 += Fa1;
		Fa1 = 1;
		Jogador = (Jogador == 1) ? 2:1; 
		}
	} if (Atacar == 2 && Mirar == 1){
		if (Fb1 == 0 || Fa2 == 0){
			printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
		} else{
		Fb1 += Fa2;
		Fa2 = 1;
		Jogador = (Jogador == 1) ? 2:1; 
		} 
	}if (Atacar == 1 && Mirar == 2){
		if (Fb2 == 0 || Fa1 == 0){
			printf ("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
		} else{
		Fb2 += Fa1;
		Fa1 = 1;
		Jogador = (Jogador == 1) ? 2:1; 
		}
	}if (Atacar == 2 && Mirar == 2){
		if (Fb2 == 0 || Fa2 == 0){
			printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
		} else{
		Fb2 += Fa2;
		Fa2 = 1;
		Jogador = (Jogador == 1) ? 2:1; 
		}
	}
	} 	

	}else if (escolhaa == 1 && Jogador == 2){//Ataque jogador 2
		printf ("\nEscolha a Gousma atacante\n");
		if (Fb1 != 0){
		printf ("\n1.Gousma C\n");
		} if (Fb2 != 0){
		printf ("\n2.Gousma D\n");
		}
		scanf ("%i", &Atacar);
		printf("\nEscolha o seu alvo\n");
		if (Fa1 != 0){
		printf("\n1.Gousma A\n");
		} if (Fa2 != 0){
		printf("\n2.Gousma B\n");
		}
		scanf ("%i", &Mirar);
		
		if (Atacar == 1 && Mirar == 1){
			if (Fa1 == 0 || Fb1 == 0){
				printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
			}else{
			Fa1 += Fb1;
			Fb1 = 1;
				Jogador = (Jogador == 1) ? 2:1; 
			}
		} else if (Atacar == 2 && Mirar == 1){
			if (Fa1 == 0 || Fb2 == 0){
				printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
			}else{
			Fa1 += Fb2;
		   	Fb2 = 1;
		   		Jogador = (Jogador == 1) ? 2:1; 
			}
		} else if (Atacar == 1 && Mirar == 2){
			if (Fa2 == 0 || Fb1 == 0){
				printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
			}else{
			Fa2 += Fb1;
			Fb1 = 1;
				Jogador = (Jogador == 1) ? 2:1; 
			}
		} else if (Atacar == 2 && Mirar == 2){
			if (Fa2 == 0 || Fb2 == 0){
				printf("ESCOLHA INV�LIDA, RE-FA�A SUA ESCOLHA\n");
			}else{
			Fa2 += Fb2;
			Fb2 = 1;
				Jogador = (Jogador == 1) ? 2:1; 
			}
		}
		
		//Divis�o Jogador 1
		
	} else if (escolhaa == 2 && Jogador == 1){
		if (Fa1 != 0 && Fa2 != 0){
			printf("\nIMPOSS�VEL DIVIDIR, LIMITE DE GOUSMAS ATINGIDO\n");
			
		}else if ((Fa1 == 1 || Fa1 == 3 || Fa1 == 5) || (Fa2 == 1 || Fa2 == 3 || Fa2 == 5)){
			printf("IMPOSSIVEL DIVIDIR N�MERO �MPAR\n");
			
		}else if (Fa1 == 0 && Fa2 == 2){
				Fa1 = 1;
				Fa2 = 1;
			Jogador = (Jogador == 1) ? 2:1; 
			
		} else if (Fa1 == 2 && Fa2 == 0){
				Fa2 = 1;
				Fa1 = 1;
			Jogador = (Jogador == 1) ? 2:1; 
		}else if (Fa1 == 0 && Fa2 == 4){
			Fa1 = 2;
			Fa2 = 2;
			Jogador = (Jogador == 1) ? 2:1; 
		}
		else if (Fa1 == 4 && Fa2 == 0){
		   	Fa1 = 2;
	 	   	Fa2 = 2;
	 	   	Jogador = (Jogador == 1) ? 2:1; 
		}
		
		//Divis�o jogador 2
		
	} else if (escolhaa == 2 && Jogador == 2){
		if(Fb1 != 0 && Fb2 != 0){
			printf("IMPOSS�VEL DIVIDIR, LIMITE DE GOUSMAS ATINGIDO\n");
			
		}else if ((Fb1 == 1 || Fb1 == 3 || Fb1 == 5)|| (Fb2 == 1 || Fb2 == 3 || Fb2 == 5)){
			printf("IMPOSS�VEL DIVIDIR N�MERO �MPAR");
			
		} else if (Fb1 == 0 && Fb2 == 2){
				Fb1 = 1;
				Fb2 = 1;
				Jogador = (Jogador == 1) ? 2:1; 
		} else if (Fb1 == 2 && Fb2 == 0){

				Fb2 = 1;
				Fb1 = 1;
				Jogador = (Jogador == 1) ? 2:1; 
		}else if (Fb1 == 0 && Fb2 == 4){
			   	Fb1 = 2;
		  		Fb2 = 2;
			   	Jogador = (Jogador == 1) ? 2:1; 
		}else if (Fb1 == 4 && Fb2 == 0){
				Fb1 = 2;
				Fb2 = 2;
		}
	}
	
	//Verifica��o de morte
	
	if (Fa1 > 5){
		printf("\nGousma A foi desintegrada!\n");
		Fa1 = 0;
	} else if (Fa2 > 5){
		printf ("\nGousma B foi desintegrada!\n");
		Fa2 = 0;
	} else if (Fb1 > 5){
		printf ("\nGousma C foi desintegrada!\n");
		Fb1 = 0;
	} else if (Fb2 > 5){
		printf ("\nGousma D foi desintegrada!\n");
		Fb2 = 0;
	}
	
	//Verifica��o de Vit�ria
	
		if (Fa1 == 0 && Fa2 == 0){
			printf("\nJogador 1 foi completamente desintegrado!\n\nVit�ria do jogador 2\n\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n");
		scanf ("%i", &escolhaa);
		
		if (escolhaa == 1){
			Fa1 = 1, Fa2 = 1, Fb1 = 1, Fb2 = 1;
		}
		else if (escolhaa == 2){
			menu = 0;
			instrucao = 0;
		}
		} else if (Fb1 == 0 && Fb2 == 0){
			printf("\nJogador 2 foi completamente desintegrado!\n\nVit�ria do jogador 1\n\n1.JOGAR NOVAMENTE\n2.VOLTAR AO MENU\n");
			scanf ("%i", &escolhaa);
			if (escolhaa == 1){
				Fa1 = 1, Fa2 = 1, Fb1 = 1, Fb2 = 1, Jogador = 1;
				menu = 3;
			} else if (escolhaa == 2){
				menu = 0;
				instrucao = 0;
			}
		}
			}
	 if (menu == 4){
	    	break;
		}
	}
	
    return 0;
}