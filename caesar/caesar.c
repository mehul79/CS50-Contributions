#include <cs50.h>
#include<ctype.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, string argv[])
{
        printf("%d\n",argc);
        if(argc !=2  ){
            printf("Usage: ./caesar key\n");
            return 1;
        }
        for(int i=0; i<strlen(argv[1]); i++){
            if(!isdigit(argv[1][i])){
                printf("Usage: ./caesar key\n");
                return 1;
        }
        }
        int k;
        k = atoi(argv[1]);
        printf("%d\n", k);
        string strin = get_string("plaintext: ");
        int n = strlen(strin);
        printf("ciphertext: ");
        for(int j=0; j<strlen(strin); j++){

            if(isupper(strin[j])){
                printf("%c",(strin[j] - 65 + k)%26 + 65);
            }

            else if(islower(strin[j])){
                printf("%c",(strin[j] - 97 + k)%26 + 97);
            }
            else{
                printf("%c", strin[j]);
            }
        }
        printf("\n");

}

