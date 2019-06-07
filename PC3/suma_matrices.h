//
// Created by fabrizio on 6/7/19.
//

#ifndef UNTITLED_SUMA_MATRICES_H
#define UNTITLED_SUMA_MATRICES_H
#include<vector>
#include <iostream>

using namespace std;


template<typename T>
class Matrices
{
public:
    int filas;
    int columnas;
    vector<vector<T>> matriz;
    Matrices(int filas, int columnas):filas{filas},columnas{columnas}{
        for(int i=0;i<filas;i++){
            vector<T> auxiliar;
            matriz.push_back(auxiliar);
        }
    }
    void New_Element(T NEW);

    Matrices<T> operator + (Matrices<T> Sumar);
    void print();
};
template<typename T1>
void Matrices<T1>::print(){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz.at(i).at(j)<<" ";
        }
        cout<<"\n";
    }
}
template<typename T2>
void Matrices<T2>::New_Element(T2 Nuevo_elemento)
{
    for(int i=0;i<filas;i++){
        if(matriz.at(i).size()<columnas){
            matriz.at(i).push_back(Nuevo_elemento);
            break;
        }
    }
}
template<typename T3>
Matrices<T3> Matrices<T3>::operator+(Matrices<T3> MATRIZ){
    Matrices<T3> matriz_suma_resultante = Matrices<T3>(filas,columnas);
    for(int i=0;i<filas;++i){
        for(int j=0;j<columnas;++j){
            matriz_suma_resultante.New_Element(MATRIZ.matriz.at(i).at(j) + matriz.at(i).at(j));
        }
    }
    return matriz_suma_resultante;
}

#endif //UNTITLED_SUMA_MATRICES_H
