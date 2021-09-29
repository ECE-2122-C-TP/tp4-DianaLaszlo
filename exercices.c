//
// Created by Laszlo Diana on 29/09/2021.
//
#include "exercices.h"
#include "fonctions.h"

void exo1(){
    getMax(saisirEntier(),saisirEntier()); //saisirEntier retourne un entier donc on peut le mettre dans la fct
    return;

}

void exo3(){
    int longueur=0, largeur=0;
    longueur=saisirEntier();
    largeur=saisirEntier();
    calculAire(longueur,largeur);
    calculPerimetre(longueur,largeur);
    return;
}

void exo4(){
    int entier = saisirEntier();
    multiplede3(entier);
    plusGrandQue10(entier);
    return;

}
void exo5(){
    calculMoyenne(saisirEntier(),saisirEntier(),saisirEntier());
    return;
}