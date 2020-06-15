#include <iostream>
#include "Clases.h"
#include <cstdlib>

void threadf(int value) {
    cout << value;
}

using namespace std;


string user = {"m"};
string pass = {"123"};

int main() {

    InitWindow(500, 500, "TP");

    Clases cla;
    bool end = false;
    bool end1 = false;
    int intentos = 0;
    string usuario, password;
    ClearBackground(BLACK);


    while (!end1 && intentos < 3) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(25, 45, 100, 40, GRAY);
        DrawText("Login \nUsuario:", 30, 50, 30, WHITE);
        EndDrawing();
        cin >> usuario;
        BeginDrawing();
        DrawRectangle(25, 45, 100, 40, GRAY);
        ClearBackground(BLACK);
        DrawText("Login \nPassword:", 30, 50, 30, WHITE);
        EndDrawing();
        cin >> password;


        if (usuario == user && password == pass) {
            while (!end) {
                ClearBackground(BLACK);
                DrawRectangle(20, 25, 250, 35, GRAY);
                DrawText("Bienvenido al sistema: ", 30, 30, 20, WHITE);
                BeginDrawing();
                DrawText(
                        "\n\nIngrese: \n1: Choque \n2: Auto Fantastico \n3: La Carrera \n4: El Rebote \n5: La Secuencia \n6: Finalizar \n\nEleccion:",
                        30, 0, 30, WHITE);
                EndDrawing();
                auto eleccion = GetKeyPressed();
                switch (eleccion) {
                    case KEY_ONE:
                        cla.choque();
                        break;
                    case KEY_TWO:
                        cla.autoFantastico();
                        break;
                    case KEY_THREE:
                        cla.lacarrera();
                        break;
                    case KEY_FOUR:
                        cla.rebote();
                        break;
                    case KEY_FIVE:
                        cla.lasecuencia();
                        break;
                    case KEY_SIX:
                        end = true;
                    default:
                        break;
                }

            }
        } else {
            cout << "La contrasena es incorrecta";
            intentos++;
        }
    }
}