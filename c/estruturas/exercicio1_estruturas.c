#include <stdio.h>

struct Hora {

    int hora, min, seg;

};

struct Data {

    int data, ano;
    char mes[15];

};

struct Compromisso {

    struct Data data_comp;
    struct Hora hora_comp;
    char descricao[100];

};