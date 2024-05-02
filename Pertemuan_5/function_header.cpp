#include <iostream>
#include "operasi.h"
#include "preprocessor.h"

uns;

void sayHello(string name) {
    o << "Hello " << name << n;
}

void garis() {
    o << "================" << n;
}

void bintang() {
    o << "***************" << n;
}

int main() {
    system("cls");
    sayHello("AP6");
    garis();
    bintang();
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;
    o << PI << n;
    return 0;
}