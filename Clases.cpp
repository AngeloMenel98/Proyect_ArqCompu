//
// Created by martin on 15/6/20.
//

#include "Clases.h"

void Clases::choque() {
    while (IsKeyUp(KEY_E)) {
        char a;
        unsigned char tabla[7] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42};
        for (unsigned char i : tabla) {

            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Choque", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(i);
            EndDrawing();
            CheckInput();
        }
    }
}

void Clases::mostrarEnBinario(unsigned char byteOriginal) {
    int aux = 0;
    for (unsigned char mask = 128; mask > 0; mask /= 2) {
        if (byteOriginal & mask) {
            DrawText("*", 100 + aux, 200, 50, WHITE);
            aux += 40;
        } else {
            DrawText("_", 100 + aux, 200, 50, WHITE);
            aux += 40;
        }
    }
}

void Clases::autoFantastico() {
    while (IsKeyUp(KEY_E)) {
        unsigned char a;
        int i;
        a = 0x1;
        for (i = 0; i < 8; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Auto Fantastico", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            EndDrawing();
            CheckInput();
            a = a << 1;
        }
        a = 0x40;
        for (i = 0; i < 6; i++) {
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Auto Fantastico", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            EndDrawing();
            CheckInput();
            a = a >> 1;
        }
    }
}

void Clases::lasecuencia() {
    while (IsKeyUp(KEY_E)) {
        char a;
        unsigned char tabla[15] = {0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3,
                                   0x1};
        for (unsigned char i : tabla) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Secuencia", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(i);
            EndDrawing();
            CheckInput();
        }
    }
}

void Clases::lacarrera() {
    while (IsKeyUp(KEY_E)) {
        char a;
        unsigned char tabla[14] = {0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x90, 0x50, 0x28, 0x18, 0xc, 0x4, 0x2, 0x3};
        for (unsigned char i : tabla) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Carrera", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(i);
            EndDrawing();
            CheckInput();
        }
    }
}

void Clases::rebote() {
    while (IsKeyUp(KEY_E)) {
        unsigned char a;
        int i;
        a = 0x80;
        for (i = 0; i < 8; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a >> 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x1;
        for (i = 0; i < 7; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a << 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x40;
        for (i = 0; i < 7; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a >> 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x1;
        for (i = 0; i < 4; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a << 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x8;
        for (i = 0; i < 4; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a >> 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x1;
        for (i = 0; i < 2; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a << 1;
            EndDrawing();
            CheckInput();
        }
        a = 0x2;
        for (i = 0; i < 2; i++) {
            BeginDrawing();
            DrawRectangle(20, 25, 250, 35, GRAY);
            DrawText("Rebote", 30, 30, 20, WHITE);
            DrawText("Press E to exit", 30, 460, 20, WHITE);
            mostrarEnBinario(a);
            a = a >> 1;
            EndDrawing();
            CheckInput();
        }
    }
}

void Clases::Vel() {
    if (IsKeyDown(KEY_DOWN)) {
        Vel_ACt += 50000;
        if (Vel_ACt > Vel_Min)
            Vel_ACt = Vel_Min;
    }
    if (IsKeyDown(KEY_UP)) {
        Vel_ACt -= 50000;
        if (Vel_ACt < Vel_Max)
            Vel_ACt = Vel_Max;
    }

}

void Clases::CheckInput() {
    if (!IsKeyUp(KEY_E))
        return;
    Vel();
    usleep(Vel_ACt);
    if (!IsKeyUp(KEY_E))
        return;
    Vel();
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
}
