#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>


int main (){

    int longueur = 100; // La longueur doit être set à plus de 50, sinon le string c devient beaucoup trop long.
    int nombre = 0;

    char c1[] = "dbbbbadccbbadccbbadccbbcadbbbbbb";          // 1
    char c2[] = "dcbbbbadbbccbbadcccbbadccbbadbbbbbb";       // 2
    char c3[] = "dcbbbbadbbccbbadcccbbbadbbccbbadcbbbb";     // 3
    char c4[] = "dbbccbbadbbccbbadbbbbbbadccccbbadccccbb";   // 4
    char c5[] = "dbbbbbbadbbadbbbbbadccccbbadbbbbb";         // 5
    char c6[] = "dcbbbbadbbadbbbbbadbbccbbadcbbbb";          // 6
    char c7[] = "dbbbbbbadcccbbadccbbadcbbadbb";             // 7
    char c8[] = "dcbbbbadbbccbbadcbbbbadbbccbbadcbbbb";      // 8
    char c9[] = "dcbbbbadbbccbbadcbbbbbadccccbbadcbbbb";     // 9
    char checker;
    char c[longueur];
    int compteur = 0;

//**************************************************************************************************************//

       int temps_boucles = 2; // A changer si besoin de plus de délai ( en secondes ).
       int repet_boucles = 10000; // A changer si besoin de plus de répétitions. ( /!\ NE PAS DEPASSER 999999999 )

//**************************************************************************************************************//

/*printf("Entrez le temps d'attente entre chaque iteration :");
scanf("%d",temps_boucles);
printf("Entrez le nombre d'itérations ( <= 1000 -> infini )");
scanf("%d",repet_boucles);*/

       int longueur_rep = 100;
       char rep[7] = "INFINI";
       char rep2[256];
       char transfo[256];

       sprintf(transfo,"%d",repet_boucles);
       longueur_rep = strlen(transfo); // longueur_rep = nombre de caractères de repet_boucles. 

       if(repet_boucles<=1000)
       {   
              for(int m=0;m<longueur_rep;m++)
              {
                     rep2[m] = transfo[m];
              }
       }
       else if (repet_boucles >= 1001)
       {
              for(int l=0; l<7 ;l++)
              {
                     rep2[l] = rep[l];
              }
       }

    printf("\n- Nombre de repetitions initialisees a : %s\n- Temps (secondes) entre chaque boucle, initialise a : %d\n\n",rep2,temps_boucles);
    printf("Debut dans : \n\n 3");
    sleep(1);
    printf("\t 2");
    sleep(1);
    printf("\t 1\n\n\n\n");


// *************************************************/|\******************************************************* //
// *************************************************|||******************************************************* //
// *************************************Paramètres d'avant execution****************************************** //


    const int MIN = 1, MAX = 9; // chiffre minimum et maximum
    srand(time(NULL)); // pour avoir une vrai valeure aléatoire (utilise suite + temps donc aléatoire), /!\ ne pas utiliser plusieurs fois dans la meme seconde sinon suites ==.
         
    for(int i=0;i<repet_boucles;i++) // le chiffre après i< = nombre d'itérations
       {      
              /*printf("%d",nombre); // afficher en petit le chiffre 
              compteur += nombre;
              printf("%d",compteur);*/ // compteur additionne chaque nouveau chiffre au dernier

              nombre = (rand() % (MAX + 1 - MIN)) + MIN; // MIN <= nombre <= MAX
              //test printf("%d\t", nombre);
              //sleep(temps_boucles);// attendre entre chaque tour de boucle ( 1 seconde )
              

              switch (nombre)
                     {
                     case 1:
                            longueur = strlen(c1);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c1[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 2:
                            longueur = strlen(c2);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c2[i];
                                   }
                            //printf("\n%s",c); 
                     break;
                     case 3:
                            longueur = strlen(c3);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c3[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 4:
                            longueur = strlen(c4);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c4[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 5:
                            longueur = strlen(c5);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c5[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 6:
                            longueur = strlen(c6);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c6[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 7:
                            longueur = strlen(c7);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c7[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 8:
                            longueur = strlen(c8);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c8[i];
                                   }
                            //printf("\n%s",c);
                     break;
                     case 9:
                            longueur = strlen(c9);
                            //printf("La longueur du string est de %d caracteres.", longueur);
                            
                            for (int i=0 ; i < longueur; i++)
                                   {
                                          c[i] = c9[i];
                                   }
                            //printf("\n%s",c);

                     break;
                     }
              sleep(temps_boucles);// attendre entre chaque tour de boucle ( 1 seconde )

              for ( int i=0 ; i < longueur; i++) // builder de lettre graphiquement
              {
              checker = c[i];

                     
                     if (checker == 'b'){ // si lettre b, alors print le chiffre correspondant au bigchiffre
                            printf("%d",nombre); // possible de remplacer l'appel de variable par un caractère fixe type : printf("0");
                     }
                     else if(checker == 'a'){ // si lettre a, alors print un retour à la ligne
                            printf("\n");
                     }
                     else if(checker == 'c'){// si lettre c, alors print un espace
                            printf(" ");
                     }else if(checker == 'd'){
                            printf("\t");
                     }

              }  
       printf("\n\n\n");
       }

}