#ifndef TYPES_H
#define TYPES_H

/*
    Auteur : Rayan ROGAI + Jordan QUAGLIATINI
    Date : 16/02/2016
    Description du programme : Déclaration des types
*/

typedef struct joueur{
    char* nom;
    int suivant;
    int precedent;
}Joueur;

typedef struct liste{
    Joueur tab[10];
    int nb_elements;
} Liste;

typedef enum bool {true, false} Bool;

#endif //TYPES_H