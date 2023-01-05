#include "tpmod8.h"

int main()
{
   listLagu L;
   create_list_1301213241(L);
   adr baru,a;
   create_list_1301213241(L);

   string artiss, judull, genree;
   for(int i = 1; i<=9; i++){
        infotype p;
        cout<<"Inputan ke-"<<i<<endl;
        cout<<"Artis : ";
        cin>>artiss;
        cout<<"Judul : ";
        cin>>judull;
        cout<<"Genre : ";
        cin>>genree;
        cout<<endl;

        p.artis = artiss;
        p.judul = judull;
        p.genre = genree;

        createElemen_1301213241(p, baru);
        insertFirst_1301213241(L, baru);
    }
    showSemuaLagu_1301213241(L);
    cout<<"======== SETELAH DELETE =========="<<endl;
    deleteLast_1301213241(L, a);
    showSemuaLagu_1301213241(L);

 return 0;
}
