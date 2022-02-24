/*1) Hacer un programa que devuelva el perímetro de las figuras planas del recuadro.
La acción se realizará de la siguiente forma. Se pedirán ingresar el código de la figura (según imagen). 
Luego deberá pedir los datos correspondientes para poder hacer dicha acción y devolverá el perímetro del mismo. 
Printf ("El perímetro es %i", variable);
Luego de esta acción pedirá un nuevo código para realizar un próximo calculo de perímetro. 
Esto lo realizará indefinidamente hasta que se ingrese el código 111. Con este código el programa finalizará y 
se imprimirá la leyenda "fin del programa".
2) Hacer lo mismo que en el punto anterior, pero ahora para calcular las áreas de las figuras.*/

#include<iostream>
#include<math.h>

using namespace std;

// Objeto

class figura {
    private:
        int tipo;
        int dim1;
        int dim2;
        int dim3;
    public:
        int crear_figura() {
            cout<<"ingrese codigo de figura: ";
            cin>>tipo;
            if (tipo == 111) {
                cout<<"fin del programa\n";
                return 1;
            }
            while (tipo < 0 || tipo > 8) {
                cout<<"codigo no valido\n";
                cout<<"ingrese codigo de figura: ";
                cin>>tipo;
            }
            if (tipo == 0) {
                cout<<"Ha seleccionado rectangulo\n";
                cout<<"ingrese la base: ";
                cin>>dim1;
                cout<<"ingrese la altura: ";
                cin>>dim2;
            }
            else if (tipo == 1) {
                cout<<"Ha seleccionado cuadrado\n";
                cout<<"ingrese la dimension del lado: ";
                cin>>dim1;
            }
            else if (tipo == 2) {
                cout<<"Ha seleccionado paralelogramo\n";
                cout<<"ingrese la base: ";
                cin>>dim1;
                cout<<"ingrese la altura: ";
                cin>>dim2;
                cout<<"ingrese la dimension de la hipotenusa: ";
                cin>>dim3;
            }
            else if (tipo == 3) {
                cout<<"Ha seleccionado rombo\n";
                cout<<"ingrese el ancho: ";
                cin>>dim1;
                cout<<"ingrese la altura: ";
                cin>>dim2;
            }
            else if (tipo == 4) {
                cout<<"Ha seleccionado trapecio\n";
                cout<<"ingrese la primera base: ";
                cin>>dim1;
                cout<<"ingrese la segunda base: ";
                cin>>dim2;
                cout<<"ingrese la altura: ";
                cin>>dim3;
            }
            else if (tipo == 5) {
                cout<<"Ha seleccionado triangulo\n";
                cout<<"ingrese la base: ";
                cin>>dim1;
                cout<<"ingrese el segundo lado: ";
                cin>>dim2;
                cout<<"ingrese la altura: ";
                cin>>dim3;
            }
            else if (tipo == 6) {
                cout<<"Ha seleccionado triangulo equilatero\n";
                cout<<"ingrese la dimension del lado: ";
                cin>>dim1;
            }
            else if (tipo == 7) {
                cout<<"Ha seleccionado triangulo rectangulo\n";
                cout<<"ingrese la base: ";
                cin>>dim1;
                cout<<"ingrese la altura: ";
                cin>>dim2;
            }
            else if (tipo == 8) {
                cout<<"Ha seleccionado poligono regular\n";
                cout<<"ingrese la dimension del lado: ";
                cin>>dim1;
                cout<<"ingrese el apotema: ";
                cin>>dim2;
                cout<<"ingrese cantidad de lados: ";
                cin>>dim3;
            }
            return 0;
        }
        float calcular_perimetro() {
            if (tipo == 0) {
                return dim1*2 + dim2*2;
            }
            else if (tipo == 1) {
                return dim1*4;
            }
            else if (tipo == 2) {
                return dim1*2 + dim3*2;
            }
            else if (tipo == 3) {
                return sqrt( pow(dim1/2, 2) + pow(dim2/2, 2) )*4;
            }
            else if (tipo == 4) {
                return sqrt( pow( (dim2 - dim1)/2, 2) + pow(dim3, 2) )*2 + dim1 + dim2;
            }
            else if (tipo == 5) {
                return dim1 + dim2 * 2;
            }
            else if (tipo == 6) {
                return dim1 * 3;
            }
            else if (tipo == 7) {
                return sqrt( pow(dim1, 2) + pow(dim2, 2) ) + dim1 + dim2;
            }
            else if (tipo == 8) {
                return dim1 * dim3;
            }
            return 0;
        }
        float calcular_area() {
            if (tipo == 0) {
                return dim1 * dim2;
            }
            else if (tipo == 1) {
                return pow(dim1, 2);
            }
            else if (tipo == 2) {
                return dim1 * dim2;
            }
            else if (tipo == 3) {
                return (dim1 * dim2) / 2;
            }
            else if (tipo == 4) {
                return ( (dim1 + dim2) / 2 ) * dim3;
            }
            else if (tipo == 5) {
                return ( dim1 * dim3 ) / 2;
            }
            else if (tipo == 6) {
                return ( pow(dim1, 2) * sqrt(3) ) / 4;
            }
            else if (tipo == 7) {
                return ( dim1 * dim2 ) / 2;
            }
            else if (tipo == 8) {
                return ( dim1 * dim3 ) / 2;
            }
            return 0;
        }
    figura ();
}forma;

// Constructor

figura::figura () {}

// Main

int main ()
{
    while (1) {
        if (forma.crear_figura() == 1) {
            return 0;
        }
        cout<<"el perimetro es: "<<forma.calcular_perimetro()<<endl;
        cout<<"el area es: "<<forma.calcular_area()<<endl;
    }
}