//
// Created by martin on 15/6/20.
//

#ifndef UNTITLED1_CLASES_H
#define UNTITLED1_CLASES_H

#include <cstring>
#include <iostream>
#include <unistd.h>
#include <thread>
#include <raylib.h>

using namespace std;


class Clases {
private:
    double Vel_Min = 400000;
    double Vel_Max = 100000;
    double Vel_ACt = 200000;
public:
    void choque();

    void mostrarEnBinario(unsigned char);

    void autoFantastico();

    void lasecuencia();

    void lacarrera();

    void rebote();

    void Vel();

    void CheckInput();
};


#endif //UNTITLED1_CLASES_H
