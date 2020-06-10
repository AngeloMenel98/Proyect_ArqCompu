#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void mostrarEnBinario(unsigned char);
string mostrarEnBinarioString(unsigned char);
string Password();
void choque();
void autoFantastico();
void lasecuencia();
void lacarrera();


int main() {
    bool end = false;
    int eleccion;
            while(!end){
                cout<<"\n\nIngrese: "
                    <<"\n1: Choque"
                    <<"\n2: Auto Fantastico"
                    <<"\n3: La secuencia"
                    <<"\n4: La carrera"
                    <<"\n5: Finalizar"
                    <<"\n\nEleccion:  ";
                cin>> eleccion;
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
                        lacarrera();
                        break;
                    case 5:
                        end = true;
                        break;
                    default:
                        cout<<"Comando incorrecto";
                }

            }


}

void choque(){
    char a;
    unsigned char tabla[7] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42};
    while (!kbhit())
    {
        for (int i=0; i<7; i++)
        {
            mostrarEnBinarioString(tabla[i]);
            cout<<'\r';
            _sleep(200);
        }
    }
    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void autoFantastico(){
    unsigned char a;
    int i;
    while(!kbhit()) {
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
        for (i=0; i<8; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a=a<<1;
        }
        a = 0x40;
        for (i=0; i<6; i++) {
            mostrarEnBinario(a);
            _sleep(200);
            cout << endl;
            a=a>>1;
        }
    }


    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void lasecuencia(){
    char a;
    unsigned char tabla[15] = {0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3, 0x1};
    while (!kbhit())
    {
        for (int i=0; i<15; i++)
        {
            mostrarEnBinario(tabla[i]);
            cout<<endl;
            _sleep(200);

        }
    }
    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void lacarrera(){
    char a;
    unsigned char tabla[14]= {0x80,0x80,0x40,0x40,0x20,0x20,0x90,0x50,0x28,0x18,0xc,0x4,0x2,0x3};
    while(!kbhit()){
        for ( int i=0; i<14; i++) {
            mostrarEnBinario(tabla[i]);
            _sleep(200);
            cout << endl;
        }

    }

    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}

void mostrarEnBinario(unsigned char byteOriginal){
    for (unsigned char mask = 128; mask > 0; mask/=2)
    {
        if (byteOriginal&mask)
        {
            cout<<"*";
        }
        else
            cout<<"_";
    }
}

string mostrarEnBinarioString(unsigned char byte){
    string aux;
    for (unsigned char mask = 128; mask > 0; mask/=2)
    {
        if (byte&mask)
            aux+="*";
        else
            aux+="_";
    }
}

string Password(){
    string aux;
    cout<<"Ingrese password:";
    while(!kbhit()){
        cin>>aux;
        cout<<"*";
    }

}