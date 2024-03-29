#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int etlogique();
int oulogique();
int convertisseur();


int main()
{
    char choix;
    cout<<"Choisissez un mode:"<<endl;
    cout<<"1 pour calculer une IP en binaire"<<endl;
    cout<<"2 pour faire un ET logique entre deux adresses en binaire"<<endl;
    cout<<"3 pour faire un OU logique entre deux adresses en binaire"<<endl;
    cout<<"4 pour convertir une valeur en bases 10, 16, 8, 2"<<endl;
    cin>>choix;
    switch (choix)
    {
        case '1':
            //appel fonction calcul ip en binaire
            cout<<"Calcul d'IP en Binaire:"<<endl;
            break;
        case '2':
            //appel fonction et logique
            cout<<"ET logique entre deux adresses:"<<endl;
            //etlogique();
            break;
        case '3':
            //appel fonction ou logique
            cout<<"OU logique entre deux adresses:"<<endl;
            oulogique();
            break;
        case '4':
            //appel fonction calculatrice
            convertisseur();
            break;

    }
}

int binetlogique() {
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
}

int binoulogique()
{
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
        resultat[tour] = binip[tour] | binmasque[tour];
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
}

int decoulogique()
{
    cout<<"decioulogique";
    return 0;
}

int decetlogique()
{
    int entree;
    int resultat;
    cout<<"Votre valeur en décimal: "<<endl;

    for(int tour=0; tour<4; tour++) {
        cout<<"Octet "<<tour<<": "<<endl;
        cin>>entree;
        //a finir
    }
    return 0;
}

int oulogique() {
    char choix;

    cout<<"1: Entrez l'IP en binaire\n2: Entrez l'IP en décimale"<<endl;
    cin>>choix;

    switch (choix) {
        case '1':
            binoulogique();
            break;

        case '2':
            decoulogique();
            break;
    }
    return 0;
}

int convertisseur()
{
    int entree;
    char choix;

    cout<<"Quelle est la base de votre valeur ? \n1 = dec \n2 = hex \n3 = oct"<<endl;
    cin>>choix;

    switch (choix) {
        case '1':
            cout<<"Saisissez votre valeur: ";
            cin>>dec>>entree;
            cout<<"dec: "<<dec<<entree<<endl;
            cout<<"hex: "<<hex<<entree<<endl;
            cout<<"oct: "<<oct<<entree<<endl;
            break;

        case '2':
            cout<<"Saisissez votre valeur: ";
            cin>>hex>>entree;
            cout<<"dec: "<<dec<<entree<<endl;
            cout<<"hex: "<<hex<<entree<<endl;
            cout<<"oct: "<<oct<<entree<<endl;

        case '3':
            cout<<"Saisissez votre valeur: ";
            cin>>oct>>entree;
            cout<<"dec: "<<dec<<entree<<endl;
            cout<<"hex: "<<hex<<entree<<endl;
            cout<<"oct: "<<oct<<entree<<endl;
    }
    return 0;
}

