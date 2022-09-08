#include<stdio.h>
#include<conio.h>



/*TABULEIRO ALTERAVEL*/
char tab(char casas2[9]){
	system("cls");                    		
	printf("\n\n\t\t    *****JOGO DA VELHA*****\n\n");	
	printf("\n\t\t\t  %c | %c | %c \n", casas2[6], casas2[7], casas2[8]);
	printf("\t\t\t-------------");
	printf("\n\t\t\t  %c | %c | %c \n", casas2[3], casas2[4], casas2[5]);
	printf("\t\t\t-------------");
	printf("\n\t\t\t  %c | %c | %c \n\n", casas2[0], casas2[1], casas2[2]);
}

int main()
{
		char casas[9] = {'1','2','3','4','5','6','7','8','9'};
		char resp;
		int jogador1 = 0, jogador2 = 0, empate = 0;
		int qt_jogadas, jogada = 1, turno = 0, i;
		
	int menu;
	menu1:
	/*CRIANDO O MENU COM COM SWITCH CASE*/
		printf("\n\n\t\t*****JOGO DA VELHA*****\n\n");
		printf("\t1 - INICIAR JOGO\n\t2 - INSTRUCOES\n\t3 - SAIR\n");
		fflush(stdin);
		scanf("%i", &menu);
		
	switch (menu){
			
		case 1:
		do {
				qt_jogadas = 1;
				for(i=0; i<=8;i++){
				casas[i] = ' ';
				}
		do{
			tab(casas);
			
			if(jogada==0){
			printf("JOGADA INVALIDA, TENTE NOVAMENTE!\n");
			}
			printf("\n\n\tDIGITE A POSICAO EM QUE DESEJA JOGAR [de 1 a 9]\n\n");
			if(turno%2==0){
			printf("\tJOGADOR 1: ");
			}
			else{
			printf("\tJOGADOR 2: ");
			}
		    scanf("%i", &jogada);
		    
		    
				if(jogada < 1 || jogada > 9){
				jogada = 0;
				}else if(casas[jogada-1] != ' '){
				jogada = 0;
				} else {
					if(turno%2==0){
					casas[jogada-1] = 'X';
					}else{
					casas[jogada-1] = 'O';
					}
			qt_jogadas++;
			turno++;
			}	
/*OCIGO DE VERIGFICACAO DE JOGADA|GANHADOR*/
					if(casas[0]=='X' && casas[1]=='X' && casas[2]=='X'){qt_jogadas=13;}
					if(casas[3]=='X' && casas[4]=='X' && casas[5]=='X'){qt_jogadas=13;}
					if(casas[6]=='X' && casas[7]=='X' && casas[8]=='X'){qt_jogadas=13;}
					if(casas[0]=='X' && casas[3]=='X' && casas[6]=='X'){qt_jogadas=13;}
					if(casas[1]=='X' && casas[4]=='X' && casas[7]=='X'){qt_jogadas=13;}
					if(casas[2]=='X' && casas[5]=='X' && casas[8]=='X'){qt_jogadas=13;}
					if(casas[0]=='X' && casas[4]=='X' && casas[8]=='X'){qt_jogadas=13;}
					if(casas[2]=='X' && casas[4]=='X' && casas[6]=='X'){qt_jogadas=13;}
			
					if(casas[0]=='O' && casas[1]=='O' && casas[2]=='O'){qt_jogadas=12;}
					if(casas[3]=='O' && casas[4]=='O' && casas[5]=='O'){qt_jogadas=12;}
					if(casas[6]=='O' && casas[7]=='O' && casas[8]=='O'){qt_jogadas=12;}
					if(casas[0]=='O' && casas[3]=='O' && casas[6]=='O'){qt_jogadas=12;}
					if(casas[1]=='O' && casas[4]=='O' && casas[7]=='O'){qt_jogadas=12;}
					if(casas[2]=='O' && casas[5]=='O' && casas[8]=='O'){qt_jogadas=12;}
					if(casas[0]=='O' && casas[4]=='O' && casas[8]=='O'){qt_jogadas=12;}
					if(casas[2]=='O' && casas[4]=='O' && casas[6]=='O'){qt_jogadas=12;}
		
		}while(qt_jogadas<=9);
		tab(casas);
		if(qt_jogadas==10){
			printf("-----DEU VELHA-----\n");
			empate++;
		}
		if(qt_jogadas==13){
			printf("*****O JOGADOR 1 GANHOU*****\n");
			jogador1++;
		}
		if(qt_jogadas==12){
			printf("*****O JOGADOR 2 GANHOU*****\n");
			jogador2++;
		}
/*PLACAR DE JOGADAS*/
		    	printf("\tPlacar\n");
		 		printf("JOGADOR 1: %i ponto(s)\n", jogador1);
				printf("JOGADOR 2: %i ponto(s)\n", jogador2);
				printf("EMPATES  : %i ponto(s)\n)", empate);
				printf("Deseja jogar novamente(S ou N)?");
				scanf("%s", &resp);
		}

while(resp=='s' || resp=='S');

      if(resp=='n' || resp=='N'){
	  printf("\n\nGAME OVER!\n\n");
	break;
				
				
		case 2:
		system("cls"); 
   		printf("  \n\n\tPARA JOGAR BASTA APERTAR A TECLA DO SEU TECLADO NUMERICO CORRESPONDESTE\n\t\t  A POSICAO DO TABULEIRO, EM SEGUIDA APERTE ENTER\n\n       \t\t\t\t     7 | 8 | 9\n     \t\t\t\t   -------------\n       \t\t\t\t     4 | 5 | 6\n     \t\t\t\t   -------------\n       \t\t\t\t     1 | 2 | 3\n\n");
		goto menu1;
		break;
		
				
		case 3:
		printf("ATE O PROXIMO JOGO!");
		goto fim;
				}
	return 0;	
		}
		system("cls");
		goto menu1;
		
		fim:
		return 0;
	}
		
		
	
		
	
    

