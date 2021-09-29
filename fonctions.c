//
// Created by Laszlo Diana on 29/09/2021.
//
#include "stdio.h"

// fonction qui donne le plus grand entier parmi 2
// IN : deux entiers
// OUT : le plus grand des 2

int getMax (entier1,entier2){
    int lePlusGrandEntier=0;
    if (entier1 >entier2 ){
        lePlusGrandEntier=entier1;
        printf("%d", lePlusGrandEntier);
    }
    else {
        lePlusGrandEntier=entier2;
        printf("%d", lePlusGrandEntier);
    }
    return(0);
}
//exo 2 fonction saisir un entier par l'utilisateur
int saisirEntier(){
    int entier=0;
    printf("saissisez un entier :");
    scanf("%d", &entier);
    return (entier);
}

int calculAire(longueur,largeur){
    printf("l'aire du rectangle est : %d",longueur*largeur);
    return (longueur*largeur);
}
int calculPerimetre(longueur,largeur){
    printf("le perimetre du rectangle est : %d", (2*longueur+2*largeur));
    return(2*longueur+2*largeur);
}

int multiple(entiera,entierb){
    if (entiera % entierb==0){
        printf("1");
    }
    else {
        printf("0");
    }
}
int multiplede3(entiera){
    if (entiera % 3==0){
        printf("1");
    }
    else {
        printf("0");
    }
}
int plusGrandQue10(entier){
    if (entier >=10){
        printf("cet entier est plus grand que 10");
    }
    else {
        printf("cet entier est plus petit que 10");
    }
}

int calculMoyenne(a,b,c){
    float moyenne=0;
    if (a>0 && a<20 && b>0 && b<20 && c>0 && c<20){
        moyenne = (a+b+c)/3;
        printf("la moyenne de ces notes est: %f",moyenne);
    }
    else{
        printf("-1");
    }
    return 0;
}

// a finir ce soir //exo7
///*int classesouvertes=0;
//int nombreEleves=0;
//int i=0;
//int totalEleves=0;
//printf("saisissez le nombre de classes ouvertes:");
//scanf("%d",&classesouvertes);
//for (i=0;i<classesouvertes;i++){
//    printf("saisissez le nombre deleves dans la classe %d:",i+1);
//    scanf("%d",&nombreEleves);
//    totalEleves=totalEleves+nombreEleves;
//}
//printf("le nombre total d'eleves dans l'écoles est :%d",totalEleves);
//
//*/