#include <iostream>
#include <cstring> 

using namespace std;


int main()
{
    string nome;
    int classe;
    string cdif;
    int raca;
    string rdif;
    int idade;
    int atributoatk;
    int atributodef;
    int magia;
    int inteligencia;
    int agilidade;
    char historia[1000000];
    int HP;
    string monstro;
    string comida;
    int agua;


    cout << "Escreva o Nome de seu Personagem:  ";
    cin >> nome;
    cout << "Escreva a idade de seu Personagem: ";
    cin >> idade;
    cout << "Escolha sua Classe sendo: \n (1) B�rbaro \n (2) Bardo \n (3) Bruxo \n (4) Cl�rigo  \n (5) Druida \n (6) Feiticeiro \n (7) Guerreiro \n (8) Ladino  \n (9) Mago  \n (10) Monge \n (11) Paladino Patrulheiro \n";
    cin >> classe;



    switch (classe) {
    case 1: atributoatk = 3;
        atributodef = 1;
        magia = 0;
        inteligencia = 1;
        agilidade = 1;
        cdif = "Barbaro";
        HP = 20;
        cout << "A sua escolha � B�rbaro, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 2: atributoatk = 1;
        atributodef = 1;
        magia = 1;
        inteligencia = 2;
        agilidade = 1;
        cdif = "Barbaro";
        HP = 15;
        cout << "A sua escolha � B�rdo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 3: atributoatk = 0;
        atributodef = 1;
        magia = 3;
        inteligencia = 2;
        agilidade = 0;
        cdif = "Bruxo";
        HP = 13;

        cout << "A sua escolha � Bruxo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 4: atributoatk = 0;
        atributodef = 0;
        magia = 2;
        inteligencia = 3;
        agilidade = 1;
        cdif = "Clerigo";
        HP = 15;
        cout << "A sua escolha � Clerigo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 5: atributoatk = 1;
        atributodef = 2;
        magia = 2;
        inteligencia = 1;
        agilidade = 0;
        cdif = "Druida";
        HP = 15;
        cout << "A sua escolha � Druida, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 6: atributoatk = 2;
        atributodef =
            magia = 3;
        inteligencia = 1;
        agilidade = 0;
        cdif = "Feiticeiro";
        HP = 13;
        cout << "A sua escolha � Feiticeiro, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 7: atributoatk = 2;
        atributodef = 2;
        magia = 0;
        inteligencia = 0;
        agilidade = 2;
        cdif = "Guerreiro";
        HP = 15;
        cout << "A sua escolha � Guerreiro, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 8: atributoatk = 1;
        atributodef = 0;
        magia = 0;
        inteligencia = 2;
        agilidade = 3;
        cdif = "Ladino";
        HP = 12;
        cout << "A sua escolha � Ladino, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 9: atributoatk = 0;
        atributodef = 0;
        magia = 3;
        inteligencia = 3;
        agilidade = 0;
        cdif = "Mago";
        HP = 13;
        cout << "A sua escolha � Mago, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 10:atributoatk = 1;
        atributodef = 0;
        magia = 1;
        inteligencia = 1;
        agilidade = 2;
        cdif = "Monge";
        HP = 20;
        cout << "A sua escolha � Monge, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    case 11:atributoatk = 1;
        atributodef = 1;
        magia = 1;
        inteligencia = 1;
        agilidade = 2;
        cdif = "Paladino Patrulheiro";
        HP = 20;
        cout << "A sua escolha � Paladino Patrulheiro, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;
        break;
    default: cout << "Nenhum op��o selecionada . tente novamente";

    }



    cout << "\nEscolha a sua ra�a: \n(1) An�o \n (2) Elfo \n (3) Halfling \n (4) Humano \n (5) Draconato \n (6) Gnomo \n (7) Meio-Elfo \n (8) Meio-Orc \n (9) Tiefling \n ";
    cin >> raca;

    switch (raca) {

    case 1: atributoatk = atributoatk + 1;
        atributodef = atributodef + 2;
        rdif = "An�o";
        cout << "A sua escolha � An�o, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 2:
        magia = magia + 2;
        inteligencia = inteligencia + 1;
        rdif = "Elfo";
        cout << "A sua escolha � Elfo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 3: atributoatk = atributoatk + 1;
        atributodef = atributodef + 1;
        agilidade = agilidade + 1;
        rdif = "Halfling";
        cout << "A sua escolha � Halfling, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 4: atributoatk = atributoatk + 1;
        inteligencia = inteligencia + 1;
        agilidade = agilidade + 1;
        rdif = "Humano";
        cout << "A sua escolha � Humano, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 5:
        atributodef = atributodef + 1;
        magia = magia + 2;
        rdif = "Draconato";
        cout << "A sua escolha � Draconato, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 6:
        inteligencia = inteligencia + 1;
        agilidade = agilidade + 2;
        rdif = "Gnomo";
        cout << "A sua escolha � Gnomo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 7:
        magia = magia + 2;
        inteligencia = inteligencia + 1;
        rdif = "Meio-Elfo";
        cout << "A sua escolha � Meio-Elfo, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 8: atributoatk = atributoatk + 2;
        atributodef = atributodef + 1;
        rdif = "Meio-Orc";
        cout << "A sua escolha � Meio-Orc, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;
    case 9:
        magia = magia + 3;
        rdif = "Tiefling";
        cout << "A sua escolha � Tiefling, portanto seus pontos base ser�o : \n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade;
        break;

    default: cout << "Nenhum op��o selecionada . tente novamente";
    }


    cout << "\nEscreva Uma Historia de vida de seu Personagem:  \n";
    cin >> historia;

    cout << "\n Agora sera apresentado todo  Os seus dados: \n";
    cout << historia;

    cout << "\n Nome: " << nome << "\n" << "Classe :" << cdif << "\n" << "Ra�a: " << rdif << "\n" << "Idade: " << idade << "\n" << "Ataque: " << atributoatk << "\n" << "Defesa: " << atributodef << "\n" << "Magia: " << magia << "\n" << "Inteligencia : " << inteligencia << "\n" << "Agilidade: " << agilidade << "\n" << "Vida: " << HP;

    return 0;
}
