#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    // Armazena as Decis�es.
    int escolhac;
    string escolhad;
    int decicao;
    int decifinal;
    int EscolhaDeItem; //ainda n usei
    char SorN;
    string escolhasorn;

    // Armazena a barra de ouro  e coisas relacionada a gastos de ouro
    int ouro = 500;
    int carisma = 0;
    int gasto;

    //Armazena as escolhas dos slots de inventario  , OBS: slot 22 � para os 2 feiti�o.
    int slot1;
    int slot2;
    int slot3;
    int slot22;

    //Dado que influencia na historia.
    int aleatorio;
    int maior;
    int menor;

    //batalha
    int batalha;
    int ataque = 3;
    int agilidade = 1;
    int c;
    int hpinimigoi;
    int HP = 20;
    int chance;

    //interass�o

    string nome;

    cout << "Seu objetivo principal:  *Chegar na igreja para receber uma miss�o de uma organiza��o que lhe chamou no bilhete* \n";
    cout << "Ao passar do reino voc� decide fazer oque ? \n (1) Olhar as Placas \n (2) Seguir em frente \n (3) Conversar com a Pessoa mais proxima \n";
    cin >> escolhac;

    switch (escolhac) {
        //essa � a parte que no caso se voc� olhar as placas
    case 1:
        cout << "Voc� olha as placas : \n (1) Loja  \n (2) Livraria de Feiti�o \n (3) A�ougue \n";
        cin >> decicao;
        switch (decicao) {
            //essa parte da progama��o � apenas sobre a loja 
        case 1: //Armas
            cout << "*Indo em dire��o a loja ,voc� abre a porta e l� voc� se depara com o vendador de items: - Desconto � apenas na Espada e Arco (Gire o Dado para conseguir seu desconto) * \n  (1) Espada - 50 Moedas  \n  (2) Adaga - 25 Moedas \n  (3) Arco - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Espada , ela ser� selecionada no seu inventario \n";
                // o valor slot1 significa o locar onde a espada fica , o 3 quer dizer o valor do atk da espada
                slot1 = 3;
                srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                int maior = 20;
                int menor = 0;
                int aleatorio = rand() % (maior - menor + 1) + menor;
                std::cout << "Voc� teve um desconto de:   = " << aleatorio << std::endl;
                return 0;
                ouro = ouro + aleatorio - 50;
            }//final
            else if (decifinal == 2) {
                // o valor slot1 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da adaga
                cout << "Voc� escolheu a Adaga , ela ser� selecionada no seu inventario \n";
                slot1 = 3;
                ouro = ouro - 25;
            }//final do else
            else if (decifinal == 3) {
                cout << "Voc� escolheu a Arco , ela ser� selecionada no seu inventario \n";
                slot1 = 3;
                srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                int maior = 20;
                int menor = 0;
                int aleatorio = rand() % (maior - menor + 1) + menor;
                std::cout << "Voc� teve um desconto de:   = " << aleatorio << std::endl;
                return 0;
                ouro = ouro + aleatorio - 70;
            }//final do outro else
            break;
        case 2:  //Feiti�o 
            cout << "*Indo em dire��o a Loja ,voc� abre a porta e l� voc� se depara com o vendador de items - Desconto na invibilidade(O Dado Ser� lan�ado apos a compra) * \n  (1) Bola de Fogo - 50 Moedas \n (2) F�ria - 10 Moedas \n (3) Invizibilidade - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Bola De Fogo , um grande ataque que causa medo em seus inimigos \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot2 = 3;
                ouro = ouro - 50;
            } //if concluido
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Voc� escolheu a F�ria , voc� pode atacar mais forte \n";
                slot2 = 3;
                ouro = ouro - 10;
            } // else concluido
            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Invizibilidade , voc� pode fazer ataques furtivos \n";
                slot2 = 3;
                srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                int maior = 20;
                int menor = 0;
                int aleatorio = rand() % (maior - menor + 1) + menor;
                std::cout << "Voc� teve um desconto de:   = " << aleatorio << std::endl;
                return 0;
                ouro = ouro + aleatorio - 70;
            }  //else concluido 
            break;
        case 3: //A�ougue
            cout << "*Indo em dire��o ao A�ougue ,voc� abre a porta e l� voc� se depara com o vendador de items* \n  (1) Carne assada - 50 Moedas \n (2) Batata - 10 Moedas \n (3) Peixe - 5 Moedas \n (4) Torta - 70 Moedas \n (5) Ma�a - 10 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Carne Assada , ela vai encher sua vida consideravelmente \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot3 = 3;
                ouro = ouro - 50;
            } //if concluido
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Voc� escolheu a Batata ,hmm gostoso \n";
                slot3 = 3;
                ouro = ouro - 10;
            } //else if concluido
            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Peixe , hmmm isso � um peixe ? \n";
                slot3 = 3;
                ouro = ouro - 5;
            } //else if concluido
            else if (decifinal == 4) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Torta , ela ser� selecionada no seu inventario \n";
                slot3 = 4;
                ouro = ouro - 70;
            } //else if concluido
            else if (decifinal == 5) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Ma�a , bem... �sso e uma ma�a \n";
                slot3 = 5;
                ouro = ouro - 10;
            } //else if concluido
            break;
        }
        break;//n�o tire o break;



    case 2: //seguir em frente
        cout << "Voc� segue uma rua e logo em seguida voc� se depara com tres caminho em qual vai seguir ? \n (1) O Caminho da Esquerda \n (2) Seguir Reto \n (3) O Caminho da Direita \n ";
        cin >> decicao;
        switch (decicao) {
        case 1:
            cout << "Voc� decidiu pegar o Caminho da Esquerda \n ";
            cout << "Ao tomar o caminho da esquerda , voc� de depara com diversas casas velhas quase caindo ao peda�o \n";
            cout << "Um grupo de pessoas sentadas no ch�o , uma delas � uma crian�a ,ela veio correndo pedindo dinheiro a voc� \n ";
            cout << "Voc� irar ajuda-la ? (S/N) \n";
            cin >> escolhasorn;
            if (escolhasorn == "S" || escolhasorn == "s") {
                cout << "Digite a quantia que voc� quer doar para crian�a \n";
                cin >> gasto;
                if (gasto >= 100) {
                    cout << "Voce pensa muito nos outros , Parabens voc� conseguiu 3 de carisma \n";
                    carisma = carisma + 3;
                } //if concluido
                ouro = ouro - gasto;
                carisma = carisma + 1;
            }//if incluido
            else if (escolhasorn == "N" || escolhasorn == "n") {
                cout << "Voc� ignora a crian�a e as pessoas te olham com uma express�o de nojo \n";
                carisma = -1;
            }//else if concluido
            cout << "\n" << "\n";
            cout << "Ao chegar quase no final da rua voce v� um homem sendo assaltado. \n";
            cout << "Voc� Decide ajuda-lo? (S/N) ";
            cin >> escolhasorn;
            if (escolhasorn == "S" || escolhasorn == "s") {

                cout << " \n Voce entra em batalha  Aperte a Tecla (1) :\n ";
                cin >> batalha;
                switch (batalha) {
                case 1:
                    for (hpinimigoi = 20; hpinimigoi >= 0; c--) {

                        cout << "escolha um ataque \n (1) Espada \n (2) Esperar \n";
                        cin >> escolhac;
                        switch (escolhac) {
                        case 1:
                            cout << "Ataque com a Espada \n";
                            srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                            int maior = 20;
                            int menor = 0;
                            int aleatorio = rand() % (maior - menor + 1) + menor;
                            std::cout << "Numero Aleatorio = \n" << aleatorio << std::endl;
                            hpinimigoi = hpinimigoi - (ataque + agilidade + aleatorio);
                            cout << "Hp inimigo : " << hpinimigoi << "\n";

                            HP = HP - 3;

                            cout << "O Inimigo te atacou tambem : \n" << "Hp: " << HP << "\n";
                            if (HP == 0) {
                                cout << "Voce morreu";
                                return 0;
                            }

                            break;//break de batalha.
                        }//switch de batalha.
                        break; //break case 1
                case 2:
                    cout << " \n Voc� decidiu ir Reto \n";
                    cout << "Voc� v� jovens bebendo perteo de um bar , um deles come�a a te xingar aleatoriamente , o outro amigo que esta ao seu lado joga uma garrafa em sua dire��o oque voce faz ?\n (S) Lutar !\n (N) Fugir \n";
                    cout << escolhac;
                    if (escolhasorn == "s" || escolhasorn == "S") {

                        cout << " \n Voce entrou em batalha  Aperte a Tecla (1) :\n ";
                        cin >> batalha;
                        switch (batalha) {
                        case 1:
                            for (hpinimigoi = 20; hpinimigoi >= 0; c--) {
                                cout << "escolha um ataque \n (1) Espada \n (2) Esperar \n";
                                cin >> escolhac;
                                switch (escolhac) {
                                case 1:
                                    srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                                    int maior = 20;
                                    int menor = 0;
                                    int aleatorio = rand() % (maior - menor + 1) + menor;
                                    std::cout << "Numero Aleatorio = \n" << aleatorio << std::endl;
                                    hpinimigoi = hpinimigoi - (ataque + agilidade + aleatorio);
                                    cout << "Hp inimigo : " << hpinimigoi << "\n";
                                    HP = HP - 3;
                                    cout << "O Inimigo te atacou tambem : \n" << "Hp: " << HP << "\n";
                                    if (HP == 0) {
                                        cout << "Voce morreu";
                                        return 0;
                                    }
                                } //switch                                      

                            }//FOR                     
                        }//Um switch.          
                    }//if do case 2.
                    else if (escolhasorn == "n" || escolhasorn == "N") {
                        cout << "voc� deu meia volta e buscou o caminho da direita";
                    }//else ** modificar
                    cout << "Voc� conseguiu encontrar informa��o com o dono do bar , ele lhe agradeceu por ter ajudado a expulsar esses delinquentes";
                    cout << "Voc� foi ate a igreja \n";

                    break;
                    }
                    break;//n�o tire o break CASE 2:



                case 3://conversar com a pessoa mais proxima
                    cout << "Voc� conversou com uma pessoa que lhe mostrou a igreja";
                    break;

                }//priemrio switch

        //miss�o aqui
                cout << "Apos o evento local voc� Seguiu reto rumo a igreja local \n";
                cout << "Ao chegar na Igreja , voc� ve o padre sentado em uma das cadeiras do lugar \n";
                cout << "Ele se levanta e come�a a olhar a voc� , demora um pouco para ele lhe dar um 'belo bom dia' ";

                cout << "Ola " << nome << "Voc� demorou um pouco , sente-se por favor";
                cout << "\n" << "\n" << "\n";
                cout << "Eu que pedi para que lhe enviasse a essa cidade , eu lhe chamei para uma miss�o voc� aceita? (S/N)";
                cin >> escolhasorn;
                if (escolhasorn == "S" || escolhasorn == "s") {

                    cout << "Obrigado por aceitar";

                }
                else if (escolhasorn == "N" || escolhasorn == "n") {

                    cout << "AH...Por favor ... aceitei tem uma bela recompensa para voc� apos concluir";
                }

                cout << "Enfim, a miss�o consiste : \n (1) Capturar 1 Porco. \n";

                cout << "� super serio... minha subrinha gosta muito dele , preciso que voc� come�e agora \n";

                for (chance = 00; chance <= 30; c++) {

                    cout << "Voc� quer continuar procurando ? (S/N) \n ";
                    cin >> escolhad;

                    srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
                    int maior = 20;
                    int menor = 0;
                    int aleatorio = rand() % (maior - menor + 1) + menor;


                    chance = aleatorio + chance;
                    cout << chance;
                    if (escolhad == "S" || escolhad == "s") {
                        if (chance > 25) {
                            cout << "\n Voc� conseguiu uma pista , o porco foi vista perto da loja de armas \n";
                            exit;
                        }
                        else if (chance < 25) {
                            cout << "\n Essa Pessoa n�o sabe sobre o paradeiro do porco tente novamente \n";
                            exit;
                        }

                        cout << "Continua.... \n ";

                    }
                }
            }
        }
    }
}
