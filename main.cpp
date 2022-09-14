#include <iostream>
#include <stdio.h>
using namespace std;
int etlogique();

int main()
{
    char choix;
    cout<<"Choisissez un mode:"<<endl;
    cout<<"a pour calculer une IP en binaire"<<endl;
    cout<<"b pour faire un ET logique entre deux adresses en binaire"<<endl;
    cout<<"c pour faire un OU logique entre deux adresses en binaire"<<endl;
    cin>>choix;
    switch (choix)
    {
        case 'a':
            //appel fonction calcul ip en binaire
            cout<<"Calcul d'IP en Binaire:"<<endl;
            break;
        case 'b':
            //appel fonction et logique
            cout<<"ET logique entre deux adresses:"<<endl;
            etlogique();
            break;
        case 'c':
            //appel fonction ou logique
            cout<<"OU logique entre deux adresses:"<<endl;
            break;

    }
}

int etlogique() {
    int binip[32];
    int binmasque[32];
    int resultat[32];
    int rang=0;

    cout<<"Votre IP en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        binip[rang]=tour;
        cout<<"bit "<<tour+1<<": ";
        cin>>binip[rang];
        rang++;

    }
    cout<<"Votre masque en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        binmasque[rang]=tour;
        cout<<"bit "<<tour+1<<": ";
        cin>>binmasque[rang];
        rang++;

    }
    cout<<"Votre resultat logique:"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        binip[rang]=tour;
        binmasque[rang]=tour;
        resultat[rang]=tour;
        resultat[rang] = binip[rang] && binmasque[rang];
        cout<<resultat[rang];
        rang++;
        if (tour==3 || tour==11 || tour==19 || tour==27)
        {
            cout<<" ";
        }
        if (tour==7 || tour==15 || tour==23)
        {
            cout<<" . ";
        }

    }

    return resultat[32];
};