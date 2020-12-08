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


    cout << "Ao passar do reino você decide fazer oque ? \n (1) Olhar as Placas \n (2) Seguir em frente \n (3) Conversar com a Pessoa mais proxima \n";
    cin >> escolhac;

    switch (escolhac) {
        //essa é a parte que no caso se você olhar as placas
    case 1:
        cout << "Você olha as placas : \n (1) Loja  \n (2) Livraria de Feitiço \n (3) Açougue \n";
        cin >> decicao;
        switch (decicao) {
            //essa parte da progamação é apenas sobre a loja 
        case 1:
            cout << "*Indo em direção a loja ,você abre a porta e lá você se depara com o vendador de items* \n (1) Espada - 50 Moedas  \n  (2) Adaga - 25 Moedas \n  (3) Arco - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Você escolheu a Espada , ela será selecionada no seu inventario \n";
                // o valor slot1 significa o locar onde a espada fica , o 3 quer dizer o valor do atk da espada
                slot1 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot1 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da adaga
                cout << "Você escolheu a Adaga , ela será selecionada no seu inventario \n";
                slot1 = 3;
            }

            else if (decifinal == 3) {
                cout << "Você escolheu a Arco , ela será selecionada no seu inventario \n";
                slot1 = 3;

            }
            cout << "Volte sempre senhor !!";
            break;

            // Essa parte é a loja de Feitiçaria

        case 2:
            cout << "*Indo em direção a Loja ,você abre a porta e lá você se depara com o vendador de items* \n  (1) Bola de Fogo - 50 Moedas \n (2) Fúria - 10 Moedas \n (3) Invizibilidade - 70 Moedas \n";
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Você escolheu a Bola De Fogo , um grande ataque que causa medo em seus inimigos \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot2 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Você escolheu a Fúria , você pode atacar mais forte \n";
                slot2 = 3;
            }

            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Você escolheu a Invizibilidade , você pode fazer ataques furtivos \n";
                slot2 = 3;
            }
            break;

            //case 3 : Agora  o case 3 é sobre a loja de Açougue

        case 3:
            cout << "*Indo em direção ao Açougue ,você abre a porta e lá você se depara com o vendador de items* \n  (1) Carne assada - 50 Moedas \n (2) Batata - 10 Moedas \n (3) Peixe - 5 Moedas \n (4) Torta - 70 Moedas \n (5) Maça - 10 Moedas \n"; ;
            cin >> decifinal;
            if (decifinal == 1) {
                cout << "Você escolheu a Carne Assada , ela vai encher sua vida consideravelmente \n";
                // o valor slot2 significa o locar onde a Bola de fogo fica , o 3 quer dizer o valor do atk da Bola de Fogo
                slot3 = 3;
            }
            else if (decifinal == 2) {
                // o valor slot2 significa o locar onde a adaga fica , o 3 quer dizer o valor do atk da Furia
                cout << "Você escolheu a Batata ,hmm gostoso \n";
                slot3 = 3;
            }

            else if (decifinal == 3) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Você escolheu a Peixe , hmmm isso é um peixe ? \n";
                slot3 = 3;
            }
            else if (decifinal == 4) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Você escolheu a Torta , ela será selecionada no seu inventario \n";
                slot3 = 4;
            }
            else if (decifinal == 5) {
                // o valor slot2 significa o locar onde a Invizibilidade fica , o 3 quer dizer o valor do atk da mesma.
                cout << "Você escolheu a Maça , bem... ísso e uma maça \n";
                slot3 = 5;
            }
            break;
        }

        break;
    }

}
