#include <stdio.h>

int main()
{
    char reponse[4] = "aaa";
    char code[4];
    //char alphabet[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
  
    printf("Entrez votre code a 3 lettres :\n");
    scanf("%s",code);

    for (int i = 0; i<26 ; i++)
    { 
      if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
        {
        goto fin;
        } 
          else
          {
            for (int i = 0; i<26 ; i++)
            { 
              if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                {
                goto fin;
                } 
                  else
                  {
                    for (int i = 0; i<26 ; i++)
                    { 
                      if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                        {
                        goto fin;
                        }   
                      reponse[2] = alphabet[i];
                      printf("%s\n",reponse);
                    }
                
                  reponse[1] = alphabet[i];
                  printf("%s\n",reponse);
                  }   
            }
            reponse[0] = alphabet[i];
            printf("%s\n",reponse); 
          }
    
    }
  fin:
    printf("fin du programme !");
}
