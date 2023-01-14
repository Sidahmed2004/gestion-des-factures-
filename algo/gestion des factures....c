#include<stdio.h>

int main () {
    struct information {
        char nome [30];
        char prenome[35];
        int code ;
        int date;
        int prix;
    };

    struct information p1 [4];
    int i ;
    for(i=1 ; i<=1 ; i++) {
        printf("entre le nom : \t");
        scanf("%s",&p1[i].nome);
        printf("entre le prenome : \t");
        scanf("%s",&p1[i].prenome);
        printf("entre le code : \t");
        scanf("%d",&p1[i].code);
        printf("entre date \'ANS\' : \t");
        scanf("%d",&p1[i].date);
        printf("entre le prix: \t");
        scanf("%d",&p1[i].prix);
    }
    printf("\n...................................\n");
    for(i=1 ; i<=1 ; i++) {
        printf("le nome:%s | le prenome:%s | le code:%d | date: %d | le prix: %s",&p1[i].nome,&p1[i].prenome,&p1[i].code,&p1[i].date,&p1[i].prix);
    }
    return 0;
}
