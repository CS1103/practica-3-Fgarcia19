#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include "suma_matrices.h"
#include "stl deque.h"
#include "map.h"


using namespace std;


int main() {
    //pregunta 2
 deque<int> v={5,1,4,8,2,4};
 auto imprimir=menores(v,3);
 cout<<"La respuesta es de deque: ";
        auto i = imprimir.begin();
    while (i != imprimir.cend()) {
        cout << *i<<" ";
        i++;
    }
    //pergunta 1
    cout<<endl;
    cout<<endl;
    cout<<"La respuesta de la suma de matrices es: "<<endl;
    Matrices<int> M1(2,2);
    Matrices<int> M2(2,2);

    M1.New_Element(10);
    M1.New_Element(10);
    M1.New_Element(10);
    M1.New_Element(10);

    M2.New_Element(5);
    M2.New_Element(5);
    M2.New_Element(5);
    M2.New_Element(5);

    auto M=M1+M2;

    M.print();

    cout<<endl;
    seccion A;
    A.ejecutar("C","Juan",10);
    A.ejecutar("C","Carlos",20);
    A.ejecutar("C","Luis",15);
    A.ejecutar("D","Luis");
    A.ejecutar("L","Juan");
    A.ejecutar("L","ALL");
    return 0;
}