//
// Created by fabrizio on 6/7/19.
//

#ifndef UNTITLED_STL_DEQUE_H
#define UNTITLED_STL_DEQUE_H
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
deque<T> menores(deque<T> grupo,int n) {
    deque<T> menores;
    deque<T> grupos_de_n_elementos;
    T menor_del_grupo;
    auto it = grupo.begin();
    while (it != grupo.cend()-n+1) {
        auto aux=it;
        for(int k=0;k<n;k++) {
            grupos_de_n_elementos.push_back(*aux);
            aux++;
        }
        menor_del_grupo=*grupos_de_n_elementos.begin();
        for(auto j=grupos_de_n_elementos.begin();j!=grupos_de_n_elementos.cend();j++){
            if (menor_del_grupo>*j){
                menor_del_grupo=*j;
            }
            grupos_de_n_elementos.pop_front();
        }

        menores.push_back(menor_del_grupo);
        it++;
    }
    return menores;
}
#endif //UNTITLED_STL_DEQUE_H
