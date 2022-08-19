
#include <stdio.h>


int main() {

    int x; 
    int y;     /*x et y deux chiffres qu'on choisit */
    
    printf("Entrez le premier nombre ( entre 10 et 20 ):\n");
    scanf("%d",&x);
    printf("Entrez le deuxième nombre ( entre 10 et 20 ):\n");
    scanf("%d",&y);

    int l = x;
    int m = y;
    int z;
    int zx = x - 10;
    int zy = y - 10;

    if (10 <= x && y <= 20){
        if (x > y){
            
            printf("x = %d est le nombre le plus grand\ny = %d est le nombre le plus petit\n",x,y);
            int intermediaire = y - 10; // on prend ici une valeur intermediaire pour mettre y à 10 et ajouter le reste de ses dizaines à x.
            x += intermediaire; // x = x + intermédiaire
            y = 10; // on set y à 10 puisque on a envoyé ses dizaines à x.
            printf("- On ajoute les dizaines du chiffre le plus petit au chiffre le plus grand de manière à ce qu'il ne reste plus que %d au chiffre déjà initialement le plus petit.\n", y);
            printf("x = %d\ty = %d\n",x,y);

            // fin de la première étape

            z = zx * zy; 
            printf("- On prend ensuite les chiffres des dizaines de %d et %d puis on les multiplie entre eux, ce qui nous donne : %d.\n",l,m,z);
            
            // fin de la deuxième étape

            printf("- On multiplie x par y : %d * %d.\n",x,y);
            x *= 10; // x = x * 10
            printf("On a donc x = %d\n",x);

            // fin de la troisième étape
            
            int n = x + z;
            printf("- On n'a plus qu'à additionner x avec le produit des dizaines de x et y soit : %d + %d = %d.",x,z,n);

            // fin de la quatrième étape
            
            }   
        else if(x < y){

            printf("y = %d est le nombre le plus grand\nx = %d est le nombre le plus petit\n",y,x);
            int intermediaire = x - 10; // on prend ici une valeur intermediaire pour mettre y à 10 et ajouter le reste de ses dizaines à x.
            y += intermediaire;
            x = 10; // on set y à 10 puisque on a envoyé ses dizaines à x.
            printf("- On ajoute les dizaines du chiffre le plus petit au chiffre le plus grand de manière à ce qu'il ne reste plus que %d au chiffre déjà initialement le plus petit.\n", x);
            printf("y = %d\tx = %d\n",y,x); 

            // fin de la première étape

            z = zx * zy;
            printf("- On prend ensuite les chiffres des dizaines de %d et %d puis on les multiplie entre eux, ce qui nous donne : %d.\n",l,m,z);

            // fin de la deuxième étape

            printf("- On multiplie y par x : %d * %d.\n",y,x);
            y *= 10;
            printf("On a donc y = %d\n",y);

            // fin de la troisième étape
            
            int n = y + z;
            printf("- On n'a plus qu'à additionner y avec le produit des dizaines de y et x soit : %d + %d = %d.",y,z,n);

            // fin de la quatrième étape

            }
        else {

            printf("Si les deux nombres sont égaux, il faut donner les dizaines d'un deux deux à l'autre, ici %d et %d donneront ",x,y);
            int intermediaire = y - 10;
            x += intermediaire;
            y = 10;
            printf("%d et %d.\n",x,y);

            // fin de la première étape

            z = zx * zy;
            printf("- On prend ensuite les chiffres des dizaines de %d et %d puis on les multiplie entre eux, ce qui nous donne : %d.\n",l,m,z);

            // fin de la deuxième partie 
            
            printf("- On multiplie x par y : %d * %d.\n",x,y);
            x *= 10;
            printf("On a donc x = %d\n",x);
            
            // fin de la troisième étape
            
            int n = x + z;
            printf("- On n'a plus qu'à additionner x avec le produit des dizaines de x et y soit : %d + %d = %d.",x,z,n);

            
        }
    }else 
    {
        printf("Entrez des chiffres entre 10 et 20.");
    }
}
