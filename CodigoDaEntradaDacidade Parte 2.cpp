#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


int main(int argc, char const* argv[]) {

    int escolhacity;
    int deci;
    int carisma;

    //futuramente sera adicionado mais cidades 
    cout << "Escolha o seu lugar no mundo : \n (1) Cidade Princial \n";
    cin >> escolhacity;

    cout << "Certo !! , Voc� escolheu a op��o: \n" << escolhacity;

    if (escolhacity == 1) {
        cout << " \n Voc� esta indo em dire��o ao port�o da Cidade e Avista os Guardas Oqu� voce faz??\n";
        cout << "(1) Falar com eles. \n (2) Passar Direto por eles e ir direto a cidade. \n (3) Observar eles. \n (4) Dan�ar. \n";
        cin >> deci;
    }
    else {
        cout << "Errou";
    }
    cout << "............................CARREGANDO..................................... \n";


    // case 1 Entrada ao Castelo .
    switch (deci) {
    case 1:
        cout << "\n Oque voce quer dizer a eles ? : \n (1) Bom dia , eu recebi um Bilhete dizendo que estou autoarizado a entra. \n (2) Batata \n ";
        cin >> deci;

        switch (deci) {

        case 1:
            cout << "Voce conseguiu entrar no reino parabens !! \n";
            carisma = 2;
            break;
        case 2:
            cout << "Voc� diz batata para os Guardas e logo apos voce suborna ele com algumas \n";
            carisma = 1;
            break;
        }

        break;

        //  case 2 Os Guardas Barram o personagem e lgoo apos libera ,  3 escolha gire um dado D20 para.

    case 2:
        cout << "Um dos Guarda te barra � pede a Autoariza��o ou um Passaporte \n";
        cout << "Oque voce faz ? : \n  (1) Voc� entrega a Autoariza��o.  \n(2) Ignora e continua andando em dire��o a cidade. \n (3) Olha para o guarda com cara assustadora. \n";
        cin >> deci;

        switch (deci) {

        case 1:
            cout << "Voce conseguiu entrar no reino parabens !! \n";
            carisma = 2;
            break;
        case 2:
            cout << "Voc� � barrado pelos guardas e logo apos voce entrega o  bilhete e segue o caminho. \n";
            carisma = -1;
            break;
        case 3:

            cout << "Voce Agora irar Girar um Dado , se ele der menor que 15 voc� fracassar� \n";

            srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
            int maior = 20;
            int menor = 0;
            int aleatorio = rand() % (maior - menor + 1) + menor;
            std::cout << "Numero Aleatorio = " << aleatorio << std::endl;

            if (aleatorio > 10) {
                cout << "Voce botou medo nos caras! \n";
            }
            else {
                cout << "Eles pens�o que voce tem algum problema mental e sentem pena e te deixam passar \n";
                carisma = -2;
            }

        }


        break;

        // case 3  switch dentro do switch , entrada ao reino 
    case 3:
        cout << "Els te olham e te ignoram em seguida \n";
        cout << "Oque voce faz ? : \n (1) Continue olhando.  \n  (2) Passar pelo Port�o da cidade\n ";
        cin >> deci;

        switch (deci) {

        case 1:
            cout << "O Guarda pergunta oque voc� quer , logo em seguida voc� entrega o bilhete \n";
            cout << "O Guarda verifica e logo em seguida deixa voc� entrar \n";
            break;
        case 2:


            cout << "Voce Agora irar Girar um Dado , se ele der menor que 12 voc� fracassar� \n";

            srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
            int maior = 20;
            int menor = 0;
            int aleatorio = rand() % (maior - menor + 1) + menor;
            std::cout << "Numero Aleatorio = " << aleatorio << std::endl;

            if (aleatorio > 12) {
                cout << "Voc� passou tranquilamente sem eles perceberem \n";
            }
            else {
                cout << "O Guarda s� deixou pela sua ousadia de desafiar a lei que esta estabelecida na cidade \n";
                carisma = 2;
            }
            break;
        }
        break;

        //case 4
    case 4:
        cout << "Els te olham e te ignoram em seguida \n";
        cout << "Oque voce faz ? : \n (1) Continua Dan�ando.  \n  (2) Para de dan�ar e vai indo em dire��o a eles. \n";
        cin >> deci;

        switch (deci) {

        case 1:
            cout << "Voce Agora irar Girar um Dado , se ele der menor que 8 voc� fracassar� \n";

            srand((unsigned)time(0)); //para gerar n�meros aleat�rios reais.
            int maior = 20;
            int menor = 0;
            int aleatorio = rand() % (maior - menor + 1) + menor;
            std::cout << "Numero Aleatorio = " << aleatorio << std::endl;

            if (aleatorio > 8) {
                cout << "Assim nasce o novo rei no POP \n";
                carisma = 3;
            }
            else {
                cout << "voc� desiste da ideia e entrega logo o bilhete e entre no reino....(n�o foi dessa vez) \n";
                carisma = -1;
            }

            break;
        }

        break;




    }

    cout << "............................CARREGANDO..................................... \n";

    return 0;
}

