#include "tpmod8.h"

void create_list_1301213241(listLagu &L)
{
    first(L) = nil;
}
void createElemen_1301213241(infotype laguBaru, adr &pLagu)
{
    pLagu = new element;
    laguBaru.playtime = 0;
    info(pLagu) = laguBaru;
    next(pLagu) = nil;
}
void insertFirst_1301213241(listLagu &L, adr pLagu)
{
    if (first(L) == nil){
        first(L) = pLagu;
        next(first(L)) = first(L);
    }else{
        adr q;
        q = first(L);
        while (next(q) != first(L)){
            q = next(q);
        }
        next(q) = pLagu;
        next(pLagu) = first(L);
        first(L) = pLagu;
    }
}
void deleteLast_1301213241(listLagu &L, adr pLagu)
{
    if(next(first(L)) != nil){
        adr q;
        q = first(L);
        pLagu= first(L);
        while(next(pLagu) != first(L)){
            q = pLagu;
            pLagu = next(pLagu);
        }
        next(q) = first(L);
        next(pLagu) = nil;
    }
}
void showSemuaLagu_1301213241(listLagu L)
{
    if(first(L) == nil){
        cout<<"List Kosong"<<endl;
    }else{
        adr p;
        p = first(L);
        int i = 1;
        cout<<"========= List Lagu =============="<<endl;
        while(next(p) != nil && next(p) != first(L))
        {

          cout<<"["<<i<<"]"<<endl;
          cout<<"Artis \t\t: "<<info(p).artis<<endl;
          cout<<"Judul Lagu \t: "<<info(p).judul<<endl;
          cout<<"Genre \t\t: "<<info(p).genre<<endl;
          cout<<"Playtime \t: "<<info(p).playtime<<endl;
          cout<<endl;
          p = next(p);
          i++;
        }

        cout<<"["<<i<<"]"<<endl;
        cout<<"Artis \t\t: "<<info(p).artis<<endl;
        cout<<"Judul Lagu \t: "<<info(p).judul<<endl;
        cout<<"Genre \t\t: "<<info(p).genre<<endl;
        cout<<"Playtime \t: "<<info(p).playtime<<endl;
        cout<<endl;
    }

}
