//
// Created by supti on 20/09/2021.
//

#include <stdio.h>
#include "mesfonctions.h"

void exo1(int a , int b) {
    if (a>b) { printf("%d", a); }
    else { printf("%d" , b); }
}

void exo2(int largeur, int longueur) {
    printf("Le perimetre est egal a %d et l'aire vaut %d.", largeur*2 + longueur*2 , largeur * longueur);
}

void exo3(int n) {
    int a = 3, supDix = 0, multipleTrois = 0;
    if (n%a == 0) { multipleTrois = 1 ;}
    if (n >= 10) { supDix = 1 ; }
    if (multipleTrois == 1 && supDix == 1) {printf("Cet entier est un multiple de 3 et est superieur a 10.") ; }
    else if (multipleTrois == 0 && supDix == 1) {printf("Cet entier n'est pas un multiple de 3 et est superieur a 10.") ; }
    else if (multipleTrois == 1 && supDix == 0) {printf("Cet entier est un multiple de 3 et n'est pas superieur a 10.") ; }
    else if (multipleTrois == 0 && supDix == 0) {printf("Cet entier n'est ni un multiple de 3 ni n'est superieur a 10.") ; }
}

void exo4() {
    int estEtudiant = 0, age = 0;
    printf("Quel est votre age ? \n>");
    scanf("%d" , &age);
    printf("Etes-vous etudiant ? \n>");
    scanf("%d", &estEtudiant);
    if ((age < 18 && age >= 12) || estEtudiant == 1) { printf("Vous avez un tarif jeune de 6€");}
    if (age < 12) { printf("Votre avez un tarif enfant de 4€");}
    if (age > 65) { printf("Vous avez un tarif senior de 6€");}
    else { printf("Vous avez un tarif plein de 9€");}
}

void exo5() {
    int numero = 0;
    printf("Quelle boisson voulez vous ? \n>");
    scanf("%d" , &numero);
    if (numero == 1) { printf("Vous avez choisi un Coca-Cola."); }
    else if (numero == 2) { printf("Vous avez choisi un Iced-Tea."); }
    else if (numero == 3) { printf("Vous avez choisi un Oasis Tropical."); }
    else if (numero == 10) { printf("Vous avez choisi un expresso."); }
    else if (numero == 11) { printf("Vous avez choisi un chocolat chaud."); }
    else { printf("Aucune boisson ne correspond a ce numero."); }

}

void exo6() {
    float note1 = 0.f, note2 = 0.f, note3 = 0.f;
    printf("Les notes sont : ");
    scanf("%f" , &note1);
    printf("%f" , note1);
    printf("et");
    scanf("%f" , &note2);
    printf("et");
    scanf("%f" , &note3);
    printf("La moyenne est :\n> %f" , ((note1+note2+note3)/3));
}

void exo7() {
    int nombreClasse = 0, nombreEleve = 0, classe = 0, i = 0;
    printf("Le nombre de classes est : \n>");
    scanf("%d" , &nombreClasse);
    for (i = 0; i < nombreClasse; i++) {
        printf("Le nombre d'eleves dans la classe est :\n>");
        scanf("%d" , &classe);
        nombreEleve = nombreEleve + classe;
        classe = 0;
    }
    printf("Il y a %d eleves dans l'ecole." , nombreEleve);
}

void exo8() {
    int nombre = 0;
    printf("Entrez la valeur du nombre souhaite : \n>");
    scanf("%d" , &nombre);
    while ( !(nombre%7 == 0 && nombre%2 == 0) ) {
        printf("Ce nombre n'est pas valable. Veuillez recommencer : \n>");
        scanf("%d" , &nombre);
    }
    printf("Ce nombre est valable.");
}

void exo9() {
    int nombrePierre = 0, nombreEtage = 1, pierreParEtage = 1, i = 2;
    printf("Combien de pierres avez-vous a disposition ? \n>");
    scanf("%d", &nombrePierre);
    while (nombrePierre > pierreParEtage) {
        pierreParEtage = pierreParEtage + (nombreEtage*nombreEtage);
        nombreEtage++;
    }
    printf("Avec %d pierres, vous pouvez construire une pyramide de %d etages" , nombrePierre, nombreEtage-1);
}

void exo10() {
    int n = 0, nombreSaisi = 0, total = 0, nombrePositif = 1;

    while (nombrePositif) {
        printf("Veuillez saisir un nouveau nombre :\n>");
        scanf("%d", &nombreSaisi);
        if (nombreSaisi >= 0) {
            total = total + nombreSaisi;
            n++;
        } else {
            nombrePositif = 0;
        }
    }
    printf("La moyenne vaut %d." , total/n);
}
