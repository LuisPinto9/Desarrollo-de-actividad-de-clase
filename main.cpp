#include <iostream>
#include "Card.h"
#include "Node.h"
#include "LinkedList.cpp"

using namespace std;

int main() {

    int opcion = 0;

    Card c1("123", "As", 1, "Picas", "Negro");
    Card c2("1256", "Rey", 10, "Corazones", "Rojo");
    Card c3("839", "Jota", 10, "Treboles", "Negro");
    Card c4("343", "Carta con figura", 9, "Diamantes", "Rojo");

    LinkedList<Card> *maze = new LinkedList<Card>();

    maze->addNodeLast(c1);
    maze->addNodeLast(c2);
    maze->addNodeLast(c3);
    maze->addNodeFirst(c4);

    while (opcion != 7) {

        cout << "Buenas, elija una opcion:\n\n"
                "1. Mostrar lista\n"
                "2. Agregar una carta al inicio de la lista\n"
                "3. Agregar una carta al final de la lista\n"
                "4. Buscar un nodo de la lista\n"
                "5. Buscar una carta de la lista\n"
                "6. Insertar un nodo a la lista antes o despues de un nodo determinado\n"
                "7. Salir" << endl;

        cin >> opcion;

        if (opcion == 1) {

            for (Card card: maze->getLinkedList()) {

                cout << card << endl;
            }

            cout << endl;

        } else if (opcion == 2) {

            string id;
            string desc;
            int value;
            string figure;
            string color;

            cout << "Escriba el id de la carta" << endl;
            cin >> id;

            cout << "Escriba una descripcion de la carta" << endl;
            cin >> desc;

            cout << "Escriba el valor de la carta" << endl;
            cin >> value;

            cout << "Escriba la figura de la carta" << endl;
            cin >> figure;

            cout << "Escriba el color de la carta" << endl;
            cin >> color;

            Card c(id, desc, value, figure, color);

            maze->addNodeFirst(c);

            cout << endl;

        } else if (opcion == 3) {

            string id;
            string desc;
            int value;
            string figure;
            string color;

            cout << "Escriba el id de la carta" << endl;
            cin >> id;

            cout << "Escriba una descripcion de la carta" << endl;
            cin >> desc;

            cout << "Escriba el valor de la carta" << endl;
            cin >> value;

            cout << "Escriba la figura de la carta" << endl;
            cin >> figure;

            cout << "Escriba el color de la carta" << endl;
            cin >> color;

            Card c(id, desc, value, figure, color);

            maze->addNodeLast(c);

            cout << endl;

        } else if (opcion == 4) {

            string id;

            cout << "Escriba el id del nodo" << endl;

            cin >> id;

            if (maze->findNode(id)) {

                cout << "El nodo existe";
            } else {

                cout << "El nodo no existe";
            }

            cout << endl;

        } else if (opcion == 5) {

            string id;

            cout << "Escriba el id de la carta" << endl;

            cin >> id;

            if (maze->findNode(id)) {

                Card *card = maze->findInfo(id);

                cout << *card << endl;
            } else {

                cout << "La carta que busca no existe en el mazo" << endl;
            }

            cout << endl;

        } else if (opcion == 6) {

            string id;
            string desc;
            int value;
            string figure;
            string color;

            cout << "Escriba el id de la carta" << endl;
            cin >> id;

            cout << "Escriba una descripcion de la carta" << endl;
            cin >> desc;

            cout << "Escriba el valor de la carta" << endl;
            cin >> value;

            cout << "Escriba la figura de la carta" << endl;
            cin >> figure;

            cout << "Escriba el color de la carta" << endl;
            cin >> color;

            Card c(id, desc, value, figure, color);

            int opc;

            cout
                    << "Como quiere ponerlo en la lista?\n1. Antes de un nodo determinado\n2. Despues de un nodo determinado"
                    << endl;
            cin >> opc;

            if (opc == 1) {

                string id;
                cout << "Escriba el id del nodo al que quiere poner antes la carta" << endl;
                cin >> id;

                maze->addNodeBeforeTo(maze->findNode(id), c);

            } else if (opc == 2) {

                string id;
                cout << "Escriba el id del nodo al que quiere poner despues la carta" << endl;
                cin >> id;

                maze->addNodeAfterTo(maze->findNode(id), c);
            }

            cout << endl;

        }
    }

    delete (maze);

    return EXIT_SUCCESS;
}
