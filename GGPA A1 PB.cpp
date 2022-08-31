#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    int numa;//numero de articulo
    float pun;//precio unitario
    float imp = 0;//impuesto
    float tot = 0;//total
    int a;//ano de lanzamiento
    int opc, sn;// para el switch / para condiciones
    string clas;//clasificacion
    string carac;//caracteristicas
    string desc;//descripcion
    string gen;//genero
    string nom;// nombre del videojuego
    cout << "        PARADISE GAMES        " << endl;
    cout << "ingrese la opcion que desee\n";
    cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n";
    cin >> opc;
    switch (opc)
    {
    case 1://agregar articculo
        cout << "ingresa el numero de articulo\n";
        cin >> numa;
        cout << "ingresa el nombre del videojuego\n";
        cin.ignore();
        getline(cin,nom);
        cout << "ingresa el Año de lanzamiento\n";
        cin >> a;
        cout << "ingresa la clasificacion\n";
        cin.ignore();
        getline(cin,clas);
        cout << "ingresa las caracteristicas\n";
        getline(cin,carac);
        cout << "ingresa la descripcion\n";
        getline(cin,desc);
        cout << "ingresa el genero\n";
        getline(cin,gen);
        cout << "ingresa el precio unitario\n";
        cin >> pun;
        cout << "El impuesto es de\n";
        imp = pun * 1.16;
        cout << imp << endl;
        cout << "El total es de\n";
        tot = pun + imp;
        break;
    case 2://modificar articulo
        cout << "ingrese el numero de articulo que desea modificar\n";
        break;
    case 3://eliminar articulo
        cout << "ingrese el numero de articulo que deseea eliminar\n";
        break;
    case 4://lista de articulos
        cout << "lista de articulos\n 1\n 2\n 3\n";
        break;
    case 5://limpiar pantalla
        system("cls");
        break;
    case 6://salir
        exit(1);
        break;
    default:
        cout << "ingrese una opcion correcta\n";
        break;
    }
    system("pause");
    return main();
}
