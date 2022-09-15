#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int etlogique();
int oulogique();

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
            oulogique();
            break;

    }
}

int etlogique() {
    int binip[32];
    int binmasque[32];
    int resultat[32];



    cout<<"Votre IP en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        cout<<"bit "<<tour+1<<": ";
        cin>>binip[tour];

    }
    cout<<"Votre masque en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        cout<<"bit "<<tour+1<<": ";
        cin>>binmasque[tour];

    }
    cout<<"Votre resultat logique:"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        resultat[tour] = binip[tour] & binmasque[tour];
        cout<<resultat[tour];

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

int oulogique() {
    int binip[32];
    int binmasque[32];
    int resultat[32];



    cout<<"Votre IP en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        cout<<"bit "<<tour+1<<": ";
        cin>>binip[tour];

    }
    cout<<"Votre masque en binaire bit par bit"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        cout<<"bit "<<tour+1<<": ";
        cin>>binmasque[tour];

    }
    cout<<"Votre resultat logique:"<<endl;
    for (int tour=0; tour<32; tour++)
    {
        resultat[tour] = binip[tour] & binmasque[tour];
        cout<<resultat[tour];

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