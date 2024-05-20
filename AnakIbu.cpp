#include <iostream>

using namespace std;

#ifndef "anak.h"
#define "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* baribu2 = new ibu("novi");
    anak* varAnak1 = new anak("tomo");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAna21);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
}
#endif