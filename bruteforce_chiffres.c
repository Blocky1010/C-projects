#include <stdio.h>

int main()
{
    char reponse[6] = "00000";
    char code[6];
    char alphabet[10] = "0123456789";
  
    printf("Entrez votre code a 5 chiffres :\n");
    scanf("%s",code);

    for (int i = 0; i<10 ; i++)
    { 
      if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
        {
        goto fin;
        } 
          else
          {
            for (int i = 0; i<10 ; i++)
            { 
              if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                {
                goto fin;
                } 
                  else
                  {
                    for (int i = 0; i<10 ; i++)
                    { 
                      if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                        {
                        goto fin;
                        }
                          else
                          {
                            for (int i = 0; i<10 ; i++)
                            { 
                                if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                                    {
                                    goto fin;
                                    }
                                        else
                                        {
                                            for (int i = 0; i<10 ; i++)
                                                { 
                                                    if(code[0] == reponse[0] && code[1] == reponse[1] && code[2] == reponse[2])
                                                        {
                                                            goto fin;
                                                        }
                                                
                                                reponse[4] = alphabet[i];
                                                printf("%s\n",reponse);
                                            }
                                        }
                                    
                                reponse[3] = alphabet[i];
                                printf("%s\n",reponse);
                                }
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
