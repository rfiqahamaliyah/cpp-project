#ifndef TPMOD8_H_INCLUDED
#define TPMOD8_H_INCLUDED

#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL
using namespace std;


struct infotype{
    string artis, judul, genre;
    int playtime;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct listLagu{
    adr first;
};

void create_list_1301213241(listLagu &L);
void createElemen_1301213241(infotype laguBaru, adr &pLagu);
void insertFirst_1301213241(listLagu &L, adr pLagu);
void deleteLast_1301213241(listLagu &L, adr pLagu);
void showSemuaLagu_1301213241(listLagu L);

#endif // TPMOD8_H_INCLUDED
