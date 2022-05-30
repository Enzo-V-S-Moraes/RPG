#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Structs
typedef struct armas
{
	int dano;
	int dado;
}ARMAS;

typedef struct armaduras
{
	int defesa;
	int buff;
	int debuff;
}ARMADURAS;

typedef struct personagem
{
	char nome[100];
	int hp;
	int forca;
	int constituicao;
	int destreza;
	int agilidade;
	ARMAS arma;
	ARMADURAS armadura;
}PERSONAGEM;

typedef struct monstro
{
	int hp;
	int forca;
	int armadura;
	int agilidade;
}MONSTRO;

//Funcoes
void lore();
void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras);
void levelup1(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras);
void levelup2(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras);
void combate1(PERSONAGEM personagem);
void combate2(PERSONAGEM personagem);
void combate3(PERSONAGEM personagem);
void jogo();

void main()
{
	int menu;
	system("Title Foul Tarnished");
	system("cls");
	printf("########  ########     ###     ######    #######  ##    ## ####  ######     ########     ###    ##    ## ######## \n");
	printf("##     ## ##     ##   ## ##   ##    ##  ##     ## ###   ## #### ##    ##    ##     ##   ## ##   ###   ## ##       \n");
	printf("##     ## ##     ##  ##   ##  ##        ##     ## ####  ##  ##  ##          ##     ##  ##   ##  ####  ## ##       \n");
	printf("##     ## ########  ##     ## ##   #### ##     ## ## ## ## ##    ######     ########  ##     ## ## ## ## ######   \n");
	printf("##     ## ##   ##   ######### ##    ##  ##     ## ##  ####            ##    ##     ## ######### ##  #### ##       \n");
	printf("##     ## ##    ##  ##     ## ##    ##  ##     ## ##   ###      ##    ##    ##     ## ##     ## ##   ### ##       \n");
	printf("########  ##     ## ##     ##  ######    #######  ##    ##       ######     ########  ##     ## ##    ## ######## \n");
	printf("                                                                                                            v0.0.2\n");
	printf("                                                                                 (Recomendado jogar em tela cheia)\n");
	printf("1) jogar o jogo\n");
	printf("2) lore\n");
	printf("3) sair\n");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			jogo();
			break;
		case 2:
			lore();
			main();
			break;
		case 3:
			printf("Ate que nossos caminhos se cruzem novamente");
			break;
		default:
			main();
			break;
	}
}
void lore()
{
	system("cls");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|No inicio dos tempos, quando o Nada e o Vazio se colidiram e se unificaram, da perfeicao do universo, nasceu os dragoes|\n");
	printf("|os dragoes sao criaturas vis, capazes de manipular a realidade a vontade deles, e de ver a morte  nada mais do que  uma|\n");
	printf("|metamorfose. A ganancia dos dragoes consumia tudo, ate o que as outras criaturas nao tinham                            |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n\n");
	printf("                                ,- 								\n");
	printf("                               //        						\n");
	printf("                              /:      ,							\n");
	printf("                             ;.(     //							\n");
	printf("                   |   ,     /`|    //							\n");
	printf("                   |1  |1    |,|   //		                    \n");
	printf("                |  (1  (1    |`|   ||		                    \n");
	printf("                (1  |1  |1   |,|   ;|		                    \n");
	printf("            |   |1   |1  |1  |`|   ;|		                    \n");
	printf("            |1   |1  |1  |1  |.11  ((                           \n");
	printf("             |1   |1  |1  |1  |1 1;/:1                          \n");
	printf("               |1  |1  |'. |1_,|1 /1**-._                       \n");
	printf("                |1  |1  | (-*  |1 `;._ *.                       \n");
	printf("               ___|1-|1-* ( 1_  /,  |_ *._1                     \n");
	printf("         _,--**___ 1 1,_   *-_*- |*.|(._ *.*.-.                 \n");
	printf("     _,-*_,--***__ ) *.*-_    *--1 1*(*o1_1 *- *.               \n");
	printf("   ,*,-*** _.-'''_-*   *-_*-.__   1 1_1_//1)__*1_               \n");
	printf(" ,*    ',-'  ,-**   7*  _ *-.._**_>1__`**__ **`'-._				\n");
	printf("        ;  ,* ,-*,'/` ,*:1.    `   `  `***___`**-._  *.   )		\n");
	printf("        ;,*_,* ,' /`,*))::|1         `... 1____''' *1  '.|1		\n");
	printf("       ,*,*   :  /`/(()/:::*|__,---._    1  1_____'''1    1		\n");
	printf("      , ,*_  ;  /`/ ///::::::::' ,-*-1    1__   1____''1 1 1	\n");
	printf("     ,,*   `;| *;; /))/::'``':::(._``.*-.__  ***--    '_1 1 1	\n");
	printf("    ('       ;// / ();;:'`````':; /`._.***  **-.._ `*-. * (o o)	\n");
	printf("    /         )(/ <*;*'``   ``/ /_.(             *_  *-_*1`);	\n");
	printf("              (/ <*;*``     `/ /`,(                *._ _*.1; 	\n");
	printf("               |<*;*`   ``  / /*-*                    *  		\n");
	printf("               <*;*` ``    / /__,;   							\n");
	system("pause");
	system("cls");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Os dragoes tem uma Rainha e um Rei, a Rainha Belugha e o Rei Sckhar, os dragoes mais sabios, e os primeiros que foram  |\n");
	printf("|esculpidos na superficie gritante da realidade. A Rainha construiu um reino perfeito nas montanhas mais altas, conheci-|\n");
	printf("|das como Montanhas Uivantes, o Rei, comandava toda a terra onde os monstros caminhavam. O reinado de ganancia dos dra- |\n");
	printf("|goes nao parecia ter fim...                                                                                            |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n\n");
	printf("           .          .           .     .                .                  .  \n");
	printf("  .      .      *           .       .          .                       .       \n");
	printf("                 .       .   . *                                               \n");
	printf("  .       ____     .      .                    .            .                  \n");
	printf("         >>   |     .        .               .                                 \n");
	printf(" .   .  /WWWI; |  .       .    .  ____               .         .     .         \n");
	printf("  *    /WWWWII; |=====;    .     /WI; |   *    .        /|_             .      \n");
	printf("  .   /WWWWWII;..      |_  . ___/WI;:. |     .        _/M; |    .   .         .\n");
	printf("     /WWWWWIIIIi;..      |__/WWWIIII:.. |____ .   .  /MMI:  |   * .            \n");
	printf(" . _/WWWWWIIIi;;;:...:   ;|WWWWWWIIIII;.     |     /MMWII;   |    .  .     .   \n");
	printf("  /WWWWWIWIiii;;;.:.. :   ;|WWWWWIII;;;::     |___/MMWIIII;   |              . \n");
	printf(" /WWWWWIIIIiii;;::.... :   ;|WWWWWWII;;::.:      :;IMWIIIII;:   |___     *     \n");
	printf("/WWWWWWWWWIIIIIWIIii;;::;..;|WWWWWWIII;;;:::...    ;IMIII;;     ::  |     .    \n");
	printf("WWWWWWWWWIIIIIIIIIii;;::.;..;|WWWWWWWWIIIII;;..  :;IMIII;:::     :    |        \n");
	printf("WWWWWWWWWWWWWIIIIIIii;;::..;..;|WWWWWWWWIIII;::; :::::::::.....::       |      \n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%XXXXXXX\n");
	system("pause");
	system("cls");
	printf("+------------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Na cidade de Arton, a capital dos humanos, um poderoso mago usou a magia dos dragoes para cravar uma profecia e uma arma|\n");
	printf("|na realidade, a profecia da Asa Arruinada ditava que um humano iria empunhar a Espada-Deus, feita com a magia dos dra-  |\n");
	printf("|goes com o unico proposito de mata-los. Assim trazendo a ruina de todos os dragoes.                                     |\n");
	printf("+------------------------------------------------------------------------------------------------------------------------+\n\n");
	printf("                       X_x                                               \n");
	printf("                      / |||                                              \n");
	printf("                      |n| |                                              \n");
	printf("                    )(|_|-'X                                             \n");
	printf("                   /  ||Y// |                                            \n");
	printf("                   |A | | |A|                                            \n");
	printf("                   |  | | |_|                                            \n");
	printf("            )(__X,,|__|MEB;;;-,)(,                                       \n");
	printf("           /  |||;;;;;;;;;;;;/    |                                      \n");
	printf("           |A | |            | U  |                                      \n");
	printf("         )_|  | |____)-----( |    |                                      \n");
	printf("        ///|__|-'////       ||___)=(__X                                  \n");
	printf("       /////////////         |///   |/ |                                 \n");
	printf("       |           |  U    U |//     |u|                                 \n");
	printf("       |   )_,-,___|_)=(     | |  U  |_|_X                               \n");
	printf("       |  ///   |||//   |    | |  __ |/// |                              \n");
	printf("     )_')(//     |Y/     >---)=( /  ||  | |-----------------..,          \n");
	printf("    //// ,| u   u |   u /////   ||  ||__|A|----------------.., |,        \n");
	printf("   |  | .. |      |    ///// ,-, |__||--------------------.., |, |,      \n");
	printf("---'--'_::_|______'----| u | | | |-----------------------.., |, |, |,    \n");
	printf("                       |___|_|_|_|----------------------.., |, |, |, |,  \n");
	printf("                            `--------------------------.., |, |, |, |, | \n");
	system("pause");
}
void jogo()
{
	int sn;
	PERSONAGEM personagem;
	ARMAS armas;
	ARMADURAS armaduras;
	system("cls");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Suas memorias estao turvas... Voce nao consegue nem se lembrar quem voce e! Voce acorda ao som do mar e percebe que    |\n");
	printf("|esta no deposito de um barco                                                                                           |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	system("pause");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Um bucaneiro ve voce e se senta em um barril proximo de voce                                                           |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf(" Bucaneiro:\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Voce nao parece muito bem... estava desacordado quando trouxe voce aqui                                                |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf(" Voce tenta falar mas nao tem forcas para conseguir\n");
	system("pause");
	printf(" Bucaneiro:\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Voce deve estar muito confuso... Bem, por onde posso comecar...                                                        |\n");
	printf("|A profecia da Asa Arruinada se tornou realidade, um humano, de poder tao extraordinario quanto o dos dragoes, empunhou |\n");
	printf("|a Espada-Deus e matou Belugha. Antes de sua alma ser expurgada da realidade, Belugha soltou uma maldicao, derretendo as|\n");
	printf("|Montanhas Uivantes e afundando o mundo em mares mortais. Depois da batalha, o paradeiro do Heroi e da Espada-Deus sao  |\n");
	printf("|desconhecidos. Mas isso fica para outra hora, agora, voce precisa se lembrar de quem voce e                            |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf(" Voce se lembra?\n");
	system("pause");
	criacao(&personagem, &armas, &armaduras);
	system("cls");
	printf("Bucaneiro:\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|Otimo! Voce se lembra de quem e! Agora va-                                                                             |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf(" Antes do bucaneiro conseguir terminar de falar voce escuta um explosao, seguida do tremor do barco\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf("|ESTAMOS SENDO ATACADOS! - Voce escuta                                                                                  |\n");
	printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
	printf(" E quando percebe, o bucaneiro nao esta mais com voce\n");
	printf(" Mas voce tem que prosseguir e achar seu caminho ate a proxima sala\n");
	system("pause");
	combate1(personagem);
	system("cls");
	printf("Parabens!\nVoce upou de nivel!\n");
	system("pause");
	levelup1(&personagem, &armas, &armaduras);
	system("cls");
	printf(" Depois da luta voce sente o barco batendo em terra firme\n");
	printf(" Voce encontra caminho ate a parte de fora do barco\n");
	printf(" Voce chega na proa...\n");
	system("pause");
	combate2(personagem);
	system("cls");
	printf("Parabens!\nVoce upou de nivel\n");
	levelup2(&personagem, &armas, &armaduras);
	system("cls");
	printf(" Voce e o heroi das historias\n");
	printf(" Voce matou Belugha\n");
	printf(" Voce e a ruina\n");
	printf(" E voce sabe muito bem o que deve ser feito...\n");
	printf(" Voce caminha ate o castelo no pico mais alto das terras pestiferas\n");
	system("pause");
	combate3(personagem);
	system("cls");
	printf(" Voce se poe vitorioso sob o cadaver do Rei dragao...\n");
	printf(" Acabou, o reinado de terror e ganancia dos dragoes foi\n");
	printf(" posto um fim\n");
	printf(" Voce se sente satisfeito com isso?\n");
	printf("1) Sim\t2) Nao\n");
	scanf("%i", &sn);
	if(sn == 1)
	{
		printf("Obrigado por jogar!");
	}
	else if (sn == 2)
	{
		main();
	}
}

//Funcoes dos combates
void combate1(PERSONAGEM personagem)
{
	//Definindo os stats dos possiveis monstros do primeiro encontro
	MONSTRO goblin;
	goblin.forca=4;
	goblin.hp=21;
	goblin.armadura=3;
	goblin.agilidade=3;
	
	MONSTRO esqueleto;
	esqueleto.forca=6;
	esqueleto.hp=20;
	esqueleto.armadura=2;
	esqueleto.agilidade=2;
	
	MONSTRO rato;
	rato.forca=4;
	rato.hp=24 ;
	rato.armadura=1;
	rato.agilidade=4;
	
	int jg;//Variavel de controle para Jogar De novo
	int i, ai, encontro;//Variavel de controle de turno do Jogador; Variavel de controle de turno do Inimigo; Variavel aleatoria do encontro
	int defesaj = 0, defesai = 0;//Tracker de Defesa do Jogador; Tracker de Defesa do Inimigo
	int pocao = 0, pocaoi = 0;//Contador de pocoes do Jogador; Contador de pocoes do Inimigo
	int p1,p2,p3;//Dados de vida da pocao
	int danoj, danoi;//danoj = Dano do turno do Jogador; danoi = Dano do turno do Inimigo
	int hpmaxj, hpmaxi;//hpmaxj = HP maximo Jogador; hpmaxi = HP maximo Inimigo
	hpmaxj = personagem.hp;//Definindo HP maximo do jogador para o uso de pocoes
	srand(time(NULL));//Definindo semente aleatoria
	encontro = rand()%3;
	system("cls");
	switch(encontro)
	{
		//Goblin
		case 0:
		{
			hpmaxi = goblin.hp;
			printf("Um goblin surge, sedento por uma batalha!\n");
			system("pause");
		if(goblin.agilidade > personagem.agilidade)
		{
			//Turno goblin
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				ai = rand()%3;
				switch(ai)//Acao do goblin decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+1+goblin.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O goblin ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O goblin ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O goblin defende!\n");
						goblin.armadura=goblin.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == goblin.hp)
						{
							printf("O goblin pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								goblin.hp=goblin.hp+rand()%6+rand()%6+rand()%6+3;
								if(goblin.hp > hpmaxi)
								{
									goblin.hp = hpmaxi;
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(goblin.hp == hpmaxi)
								{
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(goblin.hp < hpmaxi)
								{
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O goblin tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}			
			//Turno jogador
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < goblin.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > goblin.armadura)
						{
							danoj = danoj-goblin.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							goblin.hp=goblin.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do goblin por turno
				{
					goblin.armadura=goblin.armadura/2;
					defesai = 0;
				}
			}while(goblin.hp > 0 && personagem.hp > 0);
		}
		else if(goblin.agilidade <= personagem.agilidade)//Mesma logica de round, so que com personagens trocados
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < goblin.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > goblin.armadura)
						{
							danoj = danoj-goblin.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							goblin.hp=goblin.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do goblin por turno
				{
					goblin.armadura=goblin.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Goblin HP: %i\n\n", goblin.hp);
				ai = rand()%3;
				if(goblin.hp<0)
				{
					ai = 4;//Se o HP do goblin ja tiver sido zerado o turno dele sera pulado
				}
				switch(ai)//Acao do goblin decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+1+goblin.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O goblin ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O goblin ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O goblin defende!\n");
						goblin.armadura=goblin.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == goblin.hp)
						{
							printf("O goblin pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								goblin.hp=goblin.hp+rand()%6+rand()%6+rand()%6+3;
								if(goblin.hp > hpmaxi)
								{
									goblin.hp = hpmaxi;
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(goblin.hp == hpmaxi)
								{
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(goblin.hp < hpmaxi)
								{
									printf("O goblin bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O goblin tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(goblin.hp > 0 && personagem.hp > 0);
		}
		if(goblin.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
		}
		break;
		//Esqueleto
		case 1:
		{
			hpmaxi = esqueleto.hp;
			printf("Um esqueleto surge, pronto para batalhar!\n");
			system("pause");
		if(esqueleto.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+esqueleto.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O esqueleto ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == esqueleto.hp)
						{
							printf("O esqueleto pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
								if(esqueleto.hp > hpmaxi)
								{
									esqueleto.hp = hpmaxi;
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(esqueleto.hp == hpmaxi)
								{
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(esqueleto.hp < hpmaxi)
								{
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O esqueleto tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < esqueleto.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > esqueleto.armadura)
						{
							danoj = danoj-esqueleto.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							esqueleto.hp=esqueleto.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesai = 0;
				}
			}while(esqueleto.hp > 0 && personagem.hp > 0);
		}
		else if(esqueleto.agilidade <= personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < esqueleto.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > esqueleto.armadura)
						{
							danoj = danoj-esqueleto.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							esqueleto.hp=esqueleto.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					esqueleto.armadura=esqueleto.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Esqueleto HP: %i\n\n", esqueleto.hp);
				ai = rand()%3;
				if(esqueleto.hp<0)
				{
					ai = 4;
				}
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+esqueleto.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O esqueleto ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O esqueleto ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O esqueleto defende!\n");
						esqueleto.armadura=esqueleto.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == esqueleto.hp)
						{
							printf("O esqueleto pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								esqueleto.hp=esqueleto.hp+rand()%6+rand()%6+rand()%6+3;
								if(esqueleto.hp > hpmaxi)
								{
									esqueleto.hp = hpmaxi;
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(esqueleto.hp == hpmaxi)
								{
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(esqueleto.hp < hpmaxi)
								{
									printf("O esqueleto bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O esqueleto tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(esqueleto.hp > 0 && personagem.hp > 0);
		}
		if(esqueleto.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
		}
		break;
		//Rato gigante
		case 2:
		{
			hpmaxi = rato.hp;
			printf("Um rato surge, ele parece estar mais assustado do que voce!\n");
			system("pause");
		if(rato.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+rato.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O rato ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O rato ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == rato.hp)
						{
							printf("O rato pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
								if(rato.hp > hpmaxi)
								{
									rato.hp = hpmaxi;
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(rato.hp == hpmaxi)
								{
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(rato.hp < hpmaxi)
								{
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O rato tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < rato.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > rato.armadura)
						{
							danoj = danoj-rato.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							rato.hp=rato.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					rato.armadura=rato.armadura/2;
					defesai = 0;
				}
			}while(rato.hp > 0 && personagem.hp > 0);
		}
		else if(rato.agilidade <= personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < rato.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > rato.armadura)
						{
							danoj = danoj-rato.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							rato.hp=rato.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					rato.armadura=rato.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("Rato HP: %i\n\n", rato.hp);
				ai = rand()%3;
				if(rato.hp<0)
				{
					ai = 4;
				}
				switch(ai)
				{
					case 0:
						danoi = rand()%8+1+rato.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O rato ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O rato ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O rato defende!\n");
						rato.armadura=rato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == rato.hp)
						{
							printf("O rato pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								rato.hp=rato.hp+rand()%6+rand()%6+rand()%6+3;
								if(rato.hp > hpmaxi)
								{
									rato.hp = hpmaxi;
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(rato.hp == hpmaxi)
								{
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(rato.hp < hpmaxi)
								{
									printf("O rato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O rato tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(rato.hp > 0 && personagem.hp > 0);
		}
		if(rato.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
		}
		break;
	}
}
void combate2(PERSONAGEM personagem)
{
	//Definindo os stats dos possiveis monstros do primeiro encontro
	MONSTRO draconato;
	draconato.forca=15;
	draconato.hp=62;
	draconato.armadura=7;
	draconato.agilidade=7;
	
	MONSTRO armadura;
	armadura.forca=12;
	armadura.hp=65;
	armadura.armadura=10;
	armadura.agilidade=5;
	
	int jg;
	int i, ai, encontro;
	int defesaj = 0, defesai = 0;
	int pocao = 0, pocaoi = 0;
	int p1,p2,p3;
	int danoj, danoi;
	int hpmaxj, hpmaxi;
	hpmaxj = personagem.hp;
	srand(time(NULL));
	encontro = rand()%2;
	system("cls");
	switch(encontro)
	{
		//draconato
		case 0:
		{
			hpmaxi = draconato.hp;
			printf(" Voce ve um guerreiro draconico finalizando um marinheiro\n");
			printf("Draconato:\n"); 
			printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
			printf("|Voces humanos... criaturas pestiferas. Venha! - Ele exclama apontando a espada em sua direcao                          |\n");
			printf("+-----------------------------------------------------------------------------------------------------------------------+\n");
			system("pause");
		if(draconato.agilidade > personagem.agilidade)
		{
			//Turno draconato
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("draconato HP: %i\n\n", draconato.hp);
				ai = rand()%3;
				switch(ai)//Acao do draconato decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+rand()%4+2+draconato.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O draconato ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O draconato ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O draconato defende!\n");
						draconato.armadura=draconato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == draconato.hp)
						{
							printf("O draconato pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								draconato.hp=draconato.hp+rand()%6+rand()%6+rand()%6+3;
								if(draconato.hp > hpmaxi)
								{
									draconato.hp = hpmaxi;
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(draconato.hp == hpmaxi)
								{
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(draconato.hp < hpmaxi)
								{
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O draconato tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}			
			//Turno jogador
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("draconato HP: %i\n\n", draconato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < draconato.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > draconato.armadura)
						{
							danoj = danoj-draconato.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							draconato.hp=draconato.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do draconato por turno
				{
					draconato.armadura=draconato.armadura/2;
					defesai = 0;
				}
			}while(draconato.hp > 0 && personagem.hp > 0);
		}
		else if(draconato.agilidade <= personagem.agilidade)//Mesma logica de round, so que com personagens trocados
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("draconato HP: %i\n\n", draconato.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < draconato.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > draconato.armadura)
						{
							danoj = danoj-draconato.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							draconato.hp=draconato.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do draconato por turno
				{
					draconato.armadura=draconato.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("draconato HP: %i\n\n", draconato.hp);
				ai = rand()%3;
				if(draconato.hp<0)
				{
					ai = 4;//Se o HP do draconato ja tiver sido zerado o turno dele sera pulado
				}
				switch(ai)//Acao do draconato decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+rand()%4+2+draconato.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O draconato ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O draconato ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O draconato defende!\n");
						draconato.armadura=draconato.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == draconato.hp)
						{
							printf("O draconato pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								draconato.hp=draconato.hp+rand()%6+rand()%6+rand()%6+3;
								if(draconato.hp > hpmaxi)
								{
									draconato.hp = hpmaxi;
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(draconato.hp == hpmaxi)
								{
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(draconato.hp < hpmaxi)
								{
									printf("O draconato bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O draconato tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(draconato.hp > 0 && personagem.hp > 0);
		}
		if(draconato.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
		}
		break;
		//armadura
		case 1:
		{
			hpmaxi = armadura.hp;
			printf(" Voce ve uma armadura fantasma\n");
			printf(" Voce sente o chamado do Oblivio quando ela olha diretamente nos seus olhos");
			system("pause");
		if(armadura.agilidade > personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("armadura HP: %i\n\n", armadura.hp);
				ai = rand()%3;
				switch(ai)
				{
					case 0:
						danoi = rand()%8+rand()%4+2+armadura.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O armadura ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O armadura ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O armadura defende!\n");
						armadura.armadura=armadura.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == armadura.hp)
						{
							printf("O armadura pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								armadura.hp=armadura.hp+rand()%6+rand()%6+rand()%6+3;
								if(armadura.hp > hpmaxi)
								{
									armadura.hp = hpmaxi;
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(armadura.hp == hpmaxi)
								{
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(armadura.hp < hpmaxi)
								{
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O armadura tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("armadura HP: %i\n\n", armadura.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < armadura.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > armadura.armadura)
						{
							danoj = danoj-armadura.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							armadura.hp=armadura.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					armadura.armadura=armadura.armadura/2;
					defesai = 0;
				}
			}while(armadura.hp > 0 && personagem.hp > 0);
		}
		else if(armadura.agilidade <= personagem.agilidade)
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("armadura HP: %i\n\n", armadura.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)
				{
					case 1:
						switch(personagem.arma.dado)
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < armadura.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > armadura.armadura)
						{
							danoj = danoj-armadura.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							armadura.hp=armadura.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)
				{
					armadura.armadura=armadura.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("armadura HP: %i\n\n", armadura.hp);
				ai = rand()%3;
				if(armadura.hp<0)
				{
					ai = 4;
				}
				switch(ai)
				{
					case 0:
						danoi = rand()%8+rand()%4+2+armadura.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O armadura ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O armadura ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O armadura defende!\n");
						armadura.armadura=armadura.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == armadura.hp)
						{
							printf("O armadura pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								armadura.hp=armadura.hp+rand()%6+rand()%6+rand()%6+3;
								if(armadura.hp > hpmaxi)
								{
									armadura.hp = hpmaxi;
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(armadura.hp == hpmaxi)
								{
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(armadura.hp < hpmaxi)
								{
									printf("O armadura bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O armadura tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(armadura.hp > 0 && personagem.hp > 0);
		}
		if(armadura.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
		}
		break;
	}
}
void combate3(PERSONAGEM personagem)
{
	//Definindo os stats dos possiveis monstros do primeiro encontro
	MONSTRO sckhar;
	sckhar.forca=23;
	sckhar.hp=275;
	sckhar.armadura=15;
	sckhar.agilidade=10;
	
	int jg;//Variavel de controle para Jogar De novo
	int i, ai, encontro;//Variavel de controle de turno do Jogador; Variavel de controle de turno do Inimigo; Variavel aleatoria do encontro
	int defesaj = 0, defesai = 0;//Tracker de Defesa do Jogador; Tracker de Defesa do Inimigo
	int pocao = 0, pocaoi = 0;//Contador de pocoes do Jogador; Contador de pocoes do Inimigo
	int p1,p2,p3;//Dados de vida da pocao
	int danoj, danoi;//danoj = Dano do turno do Jogador; danoi = Dano do turno do Inimigo
	int hpmaxj, hpmaxi;//hpmaxj = HP maximo Jogador; hpmaxi = HP maximo Inimigo
	hpmaxj = personagem.hp;//Definindo HP maximo do jogador para o uso de pocoes
	system("cls");
	hpmaxi = sckhar.hp;
	printf("           /           /     \n");
	printf("          /' .,,,,  ./       \n");
	printf("         /';'     ,/         \n");
	printf("        / /   ,,//,`'`       \n");
	printf("       ( ,, '_,  ,,,' ``     \n");
	printf("       |    /@  ,,, ;' `     \n");
	printf("      /    .   ,''/' `,``    \n");
	printf("     /   .     ./, `,, ` ;   \n");
	printf("  ,./  .   ,-,',` ,,/''|,'   \n");
	printf(" |   /; ./,,'`,,'' |   |     +-----------------------------------------------------------------------------------------+\n");
	printf(" |     /   ','    /    |     |Voce tem a audacia de desejar pela morte dos dragoes. Em todos os meus milenios de vida  |\n");
	printf("  |___/'   '     |     |     |nunca vi um humano com tanta forca de vontade. Voce pode achar que e a ruina dos dragoes,|\n");
	printf("    `,,'  |      /     `|    |mas nao sabe o resultado catastrofico do que esta fazendo. Que seja, eu sei que nao vai  |\n");
	printf("         /      |        ~|  |mudar de ideia, entao venha, me mostre o que ruina significa.                            |\n");
	printf("     Sckhar, o Rei dragao    +-----------------------------------------------------------------------------------------+\n");
	system("pause");
		if(sckhar.agilidade > personagem.agilidade)
		{
			//Turno sckhar
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("sckhar HP: %i\n\n", sckhar.hp);
				ai = rand()%3;
				switch(ai)//Acao do sckhar decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+rand()%6+2+sckhar.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O sckhar ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O sckhar ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O sckhar defende!\n");
						sckhar.armadura=sckhar.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == sckhar.hp)
						{
							printf("O sckhar pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								sckhar.hp=sckhar.hp+rand()%6+rand()%6+rand()%6+3;
								if(sckhar.hp > hpmaxi)
								{
									sckhar.hp = hpmaxi;
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(sckhar.hp == hpmaxi)
								{
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(sckhar.hp < hpmaxi)
								{
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O sckhar tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}			
			//Turno jogador
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("sckhar HP: %i\n\n", sckhar.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < sckhar.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > sckhar.armadura)
						{
							danoj = danoj-sckhar.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							sckhar.hp=sckhar.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do sckhar por turno
				{
					sckhar.armadura=sckhar.armadura/2;
					defesai = 0;
				}
			}while(sckhar.hp > 0 && personagem.hp > 0);
		}
		else if(sckhar.agilidade <= personagem.agilidade)//Mesma logica de round, so que com personagens trocados
		{
			do
			{
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("sckhar HP: %i\n\n", sckhar.hp);
				printf("Escolha a acao\n");
				printf("1) Atacar\n2) Defender\n3) Beber pocao\n");
				scanf("%i", &i);
				switch(i)//Acoes que o player escolhe
				{
					case 1:
						switch(personagem.arma.dado)//Decidindo o dado de dano certo de acordo com a arma
						{
							case 1:
								danoj = rand()%12+1;
								break;
							case 2:
								danoj = rand()%6+rand()%6+rand()%4+3;
								break;
							case 3:
								danoj = rand()%10+rand()%4+2;
								break;
						}
						danoj = danoj+personagem.arma.dano;
						if(danoj < sckhar.armadura)
						{
							printf("Voce ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoj > sckhar.armadura)
						{
							danoj = danoj-sckhar.armadura;
							printf("Voce ataca!\nCausando %i de dano\n", danoj);
							sckhar.hp=sckhar.hp-danoj;
							system("pause");
						}
						break;
					case 2:
						printf("Voce defende\n");
						personagem.armadura.defesa=personagem.armadura.defesa*2;
						defesaj=1;
						system("pause");
						break;
					case 3:
						if(hpmaxj == personagem.hp)
						{
							printf("Seu HP ja esta cheio!\n");
						}
						else
						{
							if(pocao != 3)
							{
								p1=rand()%6;
								p2=rand()%6;
								p3=rand()%6;
								personagem.hp=personagem.hp+p1+p2+p3+3;
								if(personagem.hp > hpmaxj)
								{
									personagem.hp = hpmaxj;
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp == hpmaxj)
								{
									printf("Voce encheu seu HP\n");
									pocao++;
									system("pause");
								}
								else if(personagem.hp < hpmaxj)
								{
									printf("Voce recuperou %i de HP\n", p1+p2+p3+3);
									pocao++;
									system("pause");
								}
							}
							else
							{
								printf("Pocoes esgotadas!\n");
								system("pause");
							}
						}
						break;
					default:
						personagem.hp=personagem.hp+danoi;
						break;	
				}
				if(defesai == 1)//Tracker de defesa do sckhar por turno
				{
					sckhar.armadura=sckhar.armadura/2;
					defesai = 0;
				}
				system("cls");
				printf("%s HP: %i\n", personagem.nome, personagem.hp);
				printf("sckhar HP: %i\n\n", sckhar.hp);
				ai = rand()%3;
				if(sckhar.hp<0)
				{
					ai = 4;//Se o HP do sckhar ja tiver sido zerado o turno dele sera pulado
				}
				switch(ai)//Acao do sckhar decidida aleatoriamente
				{
					case 0:
						danoi = rand()%8+rand()%6+2+sckhar.forca;
						if(danoi < personagem.armadura.defesa)
						{
							printf("O sckhar ataca!\nMas parece nao surtir efeito!\n");
							system("pause");
						}
						else if(danoi > personagem.armadura.defesa)
						{
							danoi = danoi-personagem.armadura.defesa;
							printf("O sckhar ataca!\nVoce perde %i de HP\n", danoi);
							personagem.hp=personagem.hp-danoi;
							system("pause");
						}
						break;
					case 1:
						printf("O sckhar defende!\n");
						sckhar.armadura=sckhar.armadura*2;
						defesai=1;
						system("pause");
						break;
					case 2:
						if(hpmaxi == sckhar.hp)
						{
							printf("O sckhar pensa em tomar uma pocao, mas desiste de toma-la!\n");
						}
						else
						{
							if(pocaoi != 3)
							{
								sckhar.hp=sckhar.hp+rand()%6+rand()%6+rand()%6+3;
								if(sckhar.hp > hpmaxi)
								{
									sckhar.hp = hpmaxi;
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(sckhar.hp == hpmaxi)
								{
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
								else if(sckhar.hp < hpmaxi)
								{
									printf("O sckhar bebeu uma pocao!\n");
									pocaoi++;
									system("pause");
								}
							}
							else
							{
								printf("O sckhar tenta beber uma pocao, mas o frasco ja esta vazio!\n");
								system("pause");
							}
						}
						break;
					case 4:
						break;
				}
				if(defesaj == 1)//Tracker de defesa do jogador por turno
				{
					personagem.armadura.defesa=personagem.armadura.defesa/2;
					defesaj = 0;
				}
			}while(sckhar.hp > 0 && personagem.hp > 0);
		}
		if(sckhar.hp < 1)
		{
			printf("Vitoria\n");
			system("pause");
		}
		else if(personagem.hp < 1)
		{
			printf("Derrota\n");
			system("pause");
			printf("Deseja jogar de novo?\n");
			printf("1) Sim\t2) Nao\n");
			scanf("%i", &jg);
			if(jg == 1)
			{
				main();
			}
			else
			{
				printf("Voce pereceu");
				exit(1);
			}
		}
}
//Funcoes da criacao e de lvl up
void criacao(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras)
{
    int att;
    int sn;
    int contador = 0;
    int ea, em;
    int d1, d2, d3;

	//Zerando os stats do personagem para nao serem usados outros numeros que poderiam estar na memoria
	personagem->forca=0;
    personagem->constituicao=0;
    personagem->destreza=0;
    personagem->agilidade=0;
    
    system("cls");
	printf("Primeiro, tente se lembrar do seu nome:\n");
	fflush(stdin);
	gets(personagem->nome);
    for(contador = 0; contador < 15; contador ++)
    {
    system("cls");
	printf("E de como voce era...\n");
    printf("Pontos restantes: %d\n", 15-contador);
    printf("1) forca %d\n", personagem->forca);
    printf("2) constituicao %d\n", personagem->constituicao);
    printf("3) destreza %d\n", personagem->destreza);
    printf("4) agilidade %d\n", personagem->agilidade);
    scanf("%d", &att);
    switch(att)//Escolha dos atributos 1 por 1
    {
    case 1:
        personagem->forca+=1;
        break;
    case 2:
        personagem->constituicao+=1;
        break;
    case 3:
        personagem->destreza+=1;
        break;
	case 4:
		personagem->agilidade+=1;
    	break;
    default:
        contador-=1;//Sem penalidade por miss click
        break;
    }
    }
    system("cls");

    //Rolando os dados de vida
    srand(time(NULL));
    d1 = (rand()%6);
    d2 = (rand()%6);
    d3 = (rand()%6);
	personagem->hp=d1+d2+d3+3+personagem->constituicao;//Definindo a vida final usando HP = 3d6+CON
	
	printf("Seus dados de vida: %d  %d  %d\n", d1+1,d2+1,d3+1);
    printf("Nome: %s\n", personagem->nome);
    printf("HP: %d\n", personagem->hp);
    printf("FOR: %d\n", personagem->forca);
    printf("CON: %d\n", personagem->constituicao);
    printf("DES: %d\n", personagem->destreza);
    printf("AGL: %d\n", personagem->agilidade);
    printf("Este e voce?\n");
    printf("1) Sim\t2) Nao\n");
    scanf("%d", &sn);
    switch(sn)
    {
    	case 1:
    		printf("Escolha uma arma:\n");
    		printf("1) Espada curta        2) Rapieira        3) Lanca\n");
    		printf("   ATQ: 4                 ATQ: 4             ATQ: 5\n");
    		printf("   Dado: 1d12             Dado: 2d6+1d4      Dado: 1d10+1d4\n");
    		printf("   FOR: A                 FOR: -             FOR: C\n");
    		printf("   DES: -                 DES: B             DES: C\n");
    		//A: x1,5, B: x1, C: x0,5; Multiplicadores que influenciam no dano
    		scanf("%d", &ea);
    		switch(ea)
    		{
    			case 1:
    				personagem->arma.dano = 4+(personagem->forca+(personagem->forca/2));
    				personagem->arma.dado = 1;//Numero usado pra armazenar o dado de dano que a arma usa
    				break;
    			case 2:
    				personagem->arma.dano = 4+personagem->destreza;
    				personagem->arma.dado = 2;
    				break;
    			case 3:
    				personagem->arma.dano = 5+(personagem->destreza/2)+(personagem->forca/2);
    				personagem->arma.dado = 3;
    				break;
			}
			printf("Escolha uma armadura:\n");
			printf("1) Meia armadura     2) Armadura leve     3) Armadura completa\n");
			printf("   DEF: 1               DEF: 2               DEF: 3\n");
			printf("   AGL: +1              AGL: +0              AGL: -1\n");
			scanf("%d", &em);
			switch(em)
    		{
    			case 1:
    				personagem->armadura.defesa = 1+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade+=1;
    				personagem->armadura.buff=1;//Numero usado para armazenar se a armadura da algum bonus de atributo
    				break;
    			case 2:
    				personagem->armadura.defesa = 2+(personagem->constituicao+(personagem->constituicao/2));
    				break;
    			case 3:
    				personagem->armadura.defesa = 3+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade-=1;
    				personagem->armadura.debuff = -1;//Numero usado para armazenar se a armadura da alguma penalidade de atributo
    				break;
			}
    		printf("Voce sente que lembrou um pouco de quem era\n");
    		system("pause");
    		break;
    	case 2:
    		printf("Entao se lembre de quem realmente e!\n");
    		system("pause");
    		//Zerando os stats para redistribuicao
    		personagem->forca=0;
    		personagem->constituicao=0;
    		personagem->destreza=0;
    		personagem->agilidade=0;
			criacao(personagem,armas, armaduras);
			break;
	}
}
void levelup1(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras)
{
	int att;
    int sn;
    int contador = 0;
    int ea, em;
    int lvlup_forca=0, lvlup_constituicao=0, lvlup_destreza=0, lvlup_agilidade=0;
    for(contador = 0; contador < 10; contador ++)//10 pontos para distribuir
    {
    system("cls");
    printf("Escolha qual atributo voce deseja aumentar\n");
    printf("Pontos restantes: %d\n", 10-contador);
    printf("1) forca %d\n", personagem->forca+lvlup_forca);
    printf("2) constituicao %d\n", personagem->constituicao+lvlup_constituicao);
    printf("3) destreza %d\n", personagem->destreza+lvlup_destreza);
    printf("4) agilidade %d\n", personagem->agilidade+lvlup_agilidade);
    scanf("%d", &att);
    switch(att)//Escolha manual
    {
    case 1:
        lvlup_forca+=1;
        break;
    case 2:
        lvlup_constituicao+=1;
        break;
    case 3:
        lvlup_destreza+=1;
        break;
	case 4:
		lvlup_agilidade+=1;
    	break;
    default:
        contador-=1;
        break;
    }
    }
    //Soma dos atributos escolhidos com os atributos do personagem
    personagem->forca+=lvlup_forca;
    personagem->constituicao+=lvlup_constituicao;
    personagem->destreza+=lvlup_destreza;
    personagem->agilidade+=lvlup_agilidade;
    system("cls");
	//Soma da CON com o HP
	personagem->hp=personagem->hp+personagem->constituicao;

    printf("Nome: %s\n", personagem->nome);
    printf("HP: %d\n", personagem->hp);
    printf("FOR: %d\n", personagem->forca);
    printf("CON: %d\n", personagem->constituicao);
    printf("DES: %d\n", personagem->destreza);
    printf("AGL: %d\n", personagem->agilidade);
    printf("Deseja redestribuir os atributos?\n");
    printf("1) Sim\t2) Nao\n");
    scanf("%d", &sn);
    switch(sn)
    {
    	case 2:
    		printf("Escolha uma nova arma:\n");
    		printf("1) Espada longa        2) Tachi           3) Alfange\n");
    		printf("   ATQ: 10                ATQ: 10            ATQ: 11\n");
    		printf("   Dado: 1d12             Dado: 2d6+1d4      Dado: 1d10+1d4\n");
    		printf("   FOR: A                 FOR: -             FOR: C\n");
    		printf("   DES: -                 DES: B             DES: C\n");
    		//A: x1,5, B: x1, C: x0,5
    		scanf("%d", &ea);
    		switch(ea)
    		{
    			case 1:
    				personagem->arma.dano = 10+(personagem->forca+(personagem->forca/2));
    				personagem->arma.dado = 1;
    				break;
    			case 2:
    				personagem->arma.dano = 10+personagem->destreza;
    				personagem->arma.dado = 2;
    				break;
    			case 3:
    				personagem->arma.dano = 11+(personagem->destreza/2)+(personagem->forca/2);
    				personagem->arma.dado = 3;
    				break;
			}
			if(personagem->armadura.debuff == -1)//Retirada de penalidade de armadura caso exista
			{
				personagem->agilidade+=1;
			}
			if(personagem->armadura.buff == 1)//Retirada de bonus de armadura caso exista
			{
				personagem->agilidade-=1;
			}
			printf("Escolha uma armadura:\n");
			printf("1) Armadura de liga leve     2) Armadura forjada     3) Armadura de placas\n");
			printf("   DEF: 4                       DEF: 6                  DEF: 9\n");
			printf("   AGL: +2                      AGL: +0                 AGL: -2\n");
			scanf("%d", &em);
			switch(em)
    		{
    			case 1:
    				personagem->armadura.defesa = 4+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade+=2;
    				personagem->armadura.buff=2;
    				break;
    			case 2:
    				personagem->armadura.defesa = 6+(personagem->constituicao+(personagem->constituicao/2));
    				break;
    			case 3:
    				personagem->armadura.defesa = 9+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade-=2;
    				personagem->armadura.debuff= -2;
    				break;
			}
    		printf(" Voce sente que lembrou de mais coisas\n");
    		system("pause");
    		break;
    	case 1:
    		//Subtraindo os valores escolhidos, retornando para os atributos pre-levelup para a redistribuicao
    		personagem->forca-=lvlup_forca;
    		personagem->constituicao-=lvlup_constituicao;
    		personagem->destreza-=lvlup_destreza;
    		personagem->agilidade-=lvlup_agilidade;
    		personagem->hp-=personagem->constituicao;
			levelup1(personagem,armas, armaduras);
			break;
	}
}
void levelup2(PERSONAGEM *personagem, ARMAS *armas, ARMADURAS *armaduras)
{
	int att;
    int sn;
    int contador = 0;
    int ea, em;
    int lvlup_forca=0, lvlup_constituicao=0, lvlup_destreza=0, lvlup_agilidade=0;
    for(contador = 0; contador < 15; contador ++)//15 pontos para distribuir
    {
    system("cls");
    printf("Escolha qual atributo voce deseja aumentar\n");
    printf("Pontos restantes: %d\n", 15-contador);
    printf("1) forca %d\n", personagem->forca+lvlup_forca);
    printf("2) constituicao %d\n", personagem->constituicao+lvlup_constituicao);
    printf("3) destreza %d\n", personagem->destreza+lvlup_destreza);
    printf("4) agilidade %d\n", personagem->agilidade+lvlup_agilidade);
    scanf("%d", &att);
    switch(att)
    {
    case 1:
        lvlup_forca+=1;
        break;
    case 2:
        lvlup_constituicao+=1;
        break;
    case 3:
        lvlup_destreza+=1;
        break;
	case 4:
		lvlup_agilidade+=1;
    	break;
    default:
        contador-=1;
        break;
    }
    }
    personagem->forca+=lvlup_forca;
    personagem->constituicao+=lvlup_constituicao;
    personagem->destreza+=lvlup_destreza;
    personagem->agilidade+=lvlup_agilidade;
    system("cls");

	personagem->hp=personagem->hp+personagem->constituicao;

    printf("Nome: %s\n", personagem->nome);
    printf("HP: %d\n", personagem->hp);
    printf("FOR: %d\n", personagem->forca);
    printf("CON: %d\n", personagem->constituicao);
    printf("DES: %d\n", personagem->destreza);
    printf("AGL: %d\n", personagem->agilidade);
    printf("Deseja redestribuir os atributos?\n");
    printf("1) Sim\t2) Nao\n");
    scanf("%d", &sn);
    switch(sn)
    {
    	case 2:
    		printf("Escolha uma nova arma:\n");
    		printf("1) Espada-Deus         2) Foice            3) Glaive\n");
    		printf("   ATQ: 19                ATQ: 20             ATQ: 22\n");
    		printf("   Dado: 1d12             Dado: 2d6+1d4       Dado: 1d10+1d4\n");
    		printf("   FOR: A                 FOR: -              FOR: C\n");
    		printf("   DES: -                 DES: B              DES: C\n");
    		//A: x1,5, B: x1, C: x0,5
    		scanf("%d", &ea);
    		switch(ea)
    		{
    			case 1:
    				personagem->arma.dano = 19+(personagem->forca+(personagem->forca/2));
    				personagem->arma.dado = 1;
    				break;
    			case 2:
    				personagem->arma.dano = 20+personagem->destreza;
    				personagem->arma.dado = 2;
    				break;
    			case 3:
    				personagem->arma.dano = 22+(personagem->destreza/2)+(personagem->forca/2);
    				personagem->arma.dado = 3;
    				break;
			}
			if(personagem->armadura.debuff == -2)
			{
				personagem->agilidade+=2;
			}
			if(personagem->armadura.buff == 2)
			{
				personagem->agilidade-=2;
			}
			printf("Escolha uma armadura:\n");
			printf("1) Manto da noite         2) Brasao de espinhos     3) Armadura de escamas draconicas\n");
			printf("   DEF: 8                    DEF: 13                   DEF: 20\n");
			printf("   AGL: +5                   AGL: +0                   AGL: -6\n");
			printf("   DES: +3                   CON: +2                   FOR: +3\n");
			scanf("%d", &em);
			switch(em)
    		{
    			case 1:
    				personagem->armadura.defesa = 8+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade+=5;
    				personagem->destreza+=2;
    				break;
    			case 2:
    				personagem->armadura.defesa = 13+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->constituicao+=2;
					break;
    			case 3:
    				personagem->armadura.defesa = 20+(personagem->constituicao+(personagem->constituicao/2));
    				personagem->agilidade-=6;
    				personagem->forca+=3;
    				break;
			}
    		printf(" Voce...\n");
    		printf(" Voce se lembrou de quem e...\n");
    		system("pause");
    		break;
    	case 1:
    		personagem->forca-=lvlup_forca;
    		personagem->constituicao-=lvlup_constituicao;
    		personagem->destreza-=lvlup_destreza;
    		personagem->agilidade-=lvlup_agilidade;
    		personagem->hp-=personagem->constituicao;
			levelup1(personagem,armas, armaduras);
			break;
	}
}
