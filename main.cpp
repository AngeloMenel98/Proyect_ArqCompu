#include <iostream>
#include <conio.h>
#include <stdlib.h>



using namespace std;

void mostrarEnBinario(unsigned char);

string mostrarEnBinarioString(unsigned char);

//string Password();
void choque();

void autoFantastico();

void lasecuencia();

void lacarrera();

void rebote();

string user = {"Angelo"};
string pass = {"Arquitectura"};

int main() {
    bool end = false;
    bool end1 = false;
    int eleccion,intentos = 0;
    string usuario,password;
    while(!end1 && intentos < 3){
        cout<<"\nLogin Usuario"
            <<endl
            <<endl
            <<"Usuario: ";
        getline(cin, usuario);
        cout<<"Password: ";

        char caracter;
        caracter = getch ();
        password = "";

        while(caracter != 13){
            if(caracter != 8){
                password.push_back(caracter);
                cout<<"*"; }
            else{
                if(password.length()>0)
                    cout<< "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            caracter=getch();
        }
        if(usuario == user && password == pass){
            cout<<"Bienvenido al sistema: "<<endl;
            end1 = true;
            while (!end) {
                cout << "\n\nIngrese: "
                     << "\n1: Choque"
                     << "\n2: Auto Fantastico"
                     << "\n3: La secuencia"
                     << "\n4: La cola"
                     << "\n5: Finalizar"
                     << "\n\nEleccion:  ";
                cin >> eleccion;
                switch (eleccion) {
                    case 1:
                        choque();
                        break;
                    case 2:
                        autoFantastico();
                        break;
                    case 3:
                        lasecuencia();
                        break;
                    case 4:
                        rebote();
                        break;
                    case 5:
                        end = true;
                        break;
                    default:
                        cout << "Comando incorrecto";
                }

            }
        }else{
            cout<<"La contrasena es incorrecta";
            intentos++;
        }
    }
}

void choque() {
    char a;
    unsigned char tabla[7] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42};
    while (!kbhit()) {
        for (int i = 0; i < 7; i++) {

            mostrarEnBinario(tabla[i]);
            cout << "\r" << flush;
            _sleep(200);

        }
    }
    cout << "\nPresione una tecla para regresar_";
    cin >> a;
}

void autoFantastico() {
    unsigned char a;
    int i;
    while (!kbhit()) {
//        for (a = 0x1; a != 0x0; a = a << 1) {
//            mostrarEnBinario(a);
//            _sleep(200);
//            cout << endl;
//        }
//        for (a = 0x40; a >= 0x2; a = a >> 1) {
//            mostrarEnBinario(a);
//            _sleep(200);
//            cout << endl;
//        }
        a = 0x1;
        for (i = 0; i < 8; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a << 1;
        }
        a = 0x40;
        for (i = 0; i < 6; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a >> 1;
        }
    }


    cout << "\nPresione una tecla para regresar_";
    cin >> a;
}

void rebote() {
    unsigned char a;
    int i;
    while (!kbhit()) {
        a = 0x80;
        for (i = 0; i < 8; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a >> 1;
        }
        a=0x1;
        for (i = 0; i < 7; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a << 1;
        }
        a=0x40;
        for (i = 0; i < 7; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a >> 1;
        }
        a=0x1;
        for (i = 0; i < 4; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a << 1;
        }
        a=0x8;
        for (i = 0; i < 4; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a >> 1;
        }
        a=0x1;
        for (i = 0; i < 2; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a << 1;
        }
        a=0x2;
        for (i = 0; i < 2; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a = a >> 1;
        }
    }
}

void lasecuencia() {
    char a;
    unsigned char tabla[15] = {0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3, 0x1};
    while (!kbhit()) {
        for (int i = 0; i < 15; i++) {
            mostrarEnBinario(tabla[i]);
            cout << endl;
            _sleep(200);

        }
    }
    cout << "\nPresione una tecla para regresar_";
    cin >> a;
}

void lacarrera() {
    char a;
    unsigned char tabla[14] = {0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x90, 0x50, 0x28, 0x18, 0xc, 0x4, 0x2, 0x3};
    while (!kbhit()) {
        for (int i = 0; i < 14; i++) {
            mostrarEnBinario(tabla[i]);
            _sleep(200);
            cout << endl;
        }

    }

    cout << "\nPresione una tecla para regresar_";
    cin >> a;
}

void mostrarEnBinario(unsigned char byteOriginal) {
    for (unsigned char mask = 128; mask > 0; mask /= 2) {
        if (byteOriginal & mask) {
            cout << "*";
        } else
            cout << "_";
    }
}

string mostrarEnBinarioString(unsigned char byte) {
    string aux;
    for (unsigned char mask = 128; mask > 0; mask /= 2) {
        if (byte & mask)
            aux += "*";
        else
            aux += "_";
    }
    return aux;
}

/*string Password(){
    string aux;
    cout<<"Ingrese password:";
    while(!kbhit()){
        cin>>aux;
        cout<<"*";
    }

}*/