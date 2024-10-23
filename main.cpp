#include <iostream>
#include "ABB.h"

void submenuABB() {
  ABB abb = NULL;
  int option = 0;
  int value;

  do {
    std::cout << "\nSubmenu ABB\n\n";
    std::cout << "1. Insertar\n";
    std::cout << "2. Eliminar\n";
    std::cout << "3. Buscar\n";
    std::cout << "4. Ver el Arbol\n";
    std::cout << "5. Recorrer el arbol en en-orden\n";
    std::cout << "6. Recorrer el arbol en pre-orden\n";
    std::cout << "7. Recorrer el arbol en post-orden\n";
    std::cout << "8. Calcular el peso del arbol\n";
    std::cout << "9. Recorrer el arbol en en-orden\n";
    std::cout << "10. Recorrer el arbol en en-orden\n";
    std::cout << "11. Recorrer el arbol en en-orden\n";
    std::cout << "12. Regresar\n";
    std::cout << "Que desea hacer? (1-12): ";

    std::cin >> option;

    switch(option) {
      case 1:
        std::cout << "Ingrese el valor a insertar: ";
        std::cin >> value;
        insertar(abb, value);
        break;
      case 2:
        std::cout << "Ingrese el valor a eliminar: ";
        std::cin >> value;
        eliminar(abb, value);
        break;
      case 3:
        std::cout << "Ingrese el valor a buscar: ";
        std::cin >> value;
        if (buscar(abb, value)) {
          std::cout << "El valor " << value << " se encuentra en el arbol\n";
        } else {
          std::cout << "El valor " << value << " no se encuentra en el arbol\n";
        }
        break;
      case 4:
        verArbol(abb, 0);
        break;
      case 5:
        enOrden(abb);
        break;
      case 6:
        preOrden(abb);
        break;
      case 7:
        postOrden(abb);
        break;
      case 12:
        std::cout << "Salir\n";
        break;
    }
  } while (option != 12);

}

int main() {
  int option = 0;
  do {
    std::cout << "\nMenu\n\n";
    std::cout << "1. ABB\n";
    std::cout << "2. AVL\n";
    std::cout << "3. Arboles Rojo - Negros\n";
    std::cout << "4. Salir\n";
    std::cout << "Que tipo de arbol desea implementar? (1-4): ";

    std::cin >> option;

    switch(option) {
      case 1:
        system("clear");
        submenuABB();
        break;
      case 2:
        std::cout << "AVL\n";
        break;
      case 3:
        std::cout << "Arboles Rojo - Negros\n";
        break;
      case 4:
        std::cout << "Salir\n";
        break;
    }
  } while (option != 4);

}