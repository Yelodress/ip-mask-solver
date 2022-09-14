#include <iostream>
#include <stdio.h>
using namespace std;
int etlogique();

int main()
{
    char choix;
    cin>>choix;
    switch (choix)
    {
        case 'a':
            //appel fonction calcul ip en binaire
            cout<<"a saisi"<<endl;
            break;
        case 'b':
            //appel fonction et logique
            etlogique();
            break;
        case 'c':
            //appel fonction ou logique
            break;

    }
}

int etlogique() {
    int binip[32];
    int binmasque[32];
    int resultat[32];
    int rang=0;

    for (int tour=0; tour<32; tour++)
    {
        binip[rang]=tour;
        //cin>>binip[rang];
        cout<<"test";
        rang++;

    }
    return resultat[rang];
};