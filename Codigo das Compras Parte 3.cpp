/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int escolhac;
    int decicao;
    int decifinal;
    int EscolhaDeItem;
    char SorN;
    int ouro = 500;
    int slot1;
    int slot2;
    int slot3;


    cout << "Ao passar do reino voc� decide fazer oque ? \n (1) Olhar as Placas \n (2) Seguir em frente \n (3) Conversar com a Pessoa mais proxima \n";
    cin >> escolhac;

    switch (escolhac) {
        //essa � a parte que no caso se voc� olhar as placas
    case 1:
        cout << "Voc� olha as placas : \n (1) Loja  \n (2) Livraria de Feiti�o \n (3) A�ougue \n";
        cin >> decicao;
        switch (decicao) {
            //essa parte da progama��o � apenas sobre a loja 
        case 1:
            cout << "*Indo em dire��o a loja ,voc� abre a porta e l� voc� se depara com o vendador de items* \n (1) Espada - 50 Moedas  \n  (2) Adaga - 25 Moedas \n  (3) Arco - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Espada , ela ser� selecionada no seu inventario \n";
                // o valor slot1 significa o locar onde a espada fica , o 3 quer dizer o valor do atk da espada
                slot1 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot1 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da adaga
                cout << "Voc� escolheu a Adaga , ela ser� selecionada no seu inventario \n";
                slot1 = 3;
            }

            else if (decifinal == 3) {
                cout << "Voc� escolheu a Arco , ela ser� selecionada no seu inventario \n";
                slot1 = 3;

            }
            cout << "Volte sempre senhor !!";
            break;

            // Essa parte � a loja de Feiti�aria

        case 2:
            cout << "*Indo em dire��o a Loja ,voc� abre a porta e l� voc� se depara com o vendador de items* \n  (1) Bola de Fogo - 50 Moedas \n (2) F�ria - 10 Moedas \n (3) Invizibilidade - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Bola De Fogo , um grande ataque que causa medo em seus inimigos \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot2 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Voc� escolheu a F�ria , voc� pode atacar mais forte \n";
                slot2 = 3;
            }

            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Invizibilidade , voc� pode fazer ataques furtivos \n";
                slot2 = 3;
            }
            break;

            //case 3 : Agora  o case 3 � sobre a loja de A�ougue

        case 3:
            cout << "*Indo em dire��o ao A�ougue ,voc� abre a porta e l� voc� se depara com o vendador de items* \n  (1) Carne assada - 50 Moedas \n (2) Batata - 10 Moedas \n (3) Peixe - 5 Moedas \n (4) Torta - 70 Moedas \n (5) Ma�a - 10 Moedas \n"; ;
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Voc� escolheu a Carne Assada , ela vai encher sua vida consideravelmente \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot3 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Voc� escolheu a Batata ,hmm gostoso \n";
                slot3 = 3;
            }

            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Peixe , hmmm isso � um peixe ? \n";
                slot3 = 3;
            }
            else if (decifinal == 4) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Torta , ela ser� selecionada no seu inventario \n";
                slot3 = 4;
            }
            else if (decifinal == 5) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Voc� escolheu a Ma�a , bem... �sso e uma ma�a \n";
                slot3 = 5;
            }
            break;
        }

        break;
    }

}
