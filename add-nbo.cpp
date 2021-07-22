#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <stdlib.h>
#include "add-nbo.h"

int add-nbo(char *a, char *b){

    FILE *fp1;
    FILE *fp2;
    int buf_t, buf_h;
    uint32_t n;
    uint32_t m;

    fp1 = fopen(a,"rb");
    fread(&buf_t, sizeof(int), 1, fp1);
    fclose(fp1);

    n = ntohl(buf_t);
    //printf("%04x\n",n);
    //printf("%d\n",n);

    fp2 = fopen(b,"rb");
    fread(&buf_h, sizeof(int), 1, fp2);

    fclose(fp2);


    m = ntohl(buf_h);
    printf("%04x\n",m);
    printf("%d\n",m);

    uint32_t sum = n+m;
    //printf("%d\n",sum);
    //printf("%04x\n",sum);
	
	uint32_t sum = n+m;
    printf("%d(%04x) + %d(%04x) = %d(%04x)\n",n,n,m,m,sum,sum);

}

