#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp1;
    FILE *fp2;
    uint32_t n, m, sum;

    fp1 = fopen(argv[1],"rb");
    fread(&n, sizeof(int), 1, fp1);
    fclose(fp1);

    n = ntohl(n);
    printf("%04x",n);

    fp2 = fopen(argv[2],"rb");
    fread(&m, sizeof(int), 1, fp2);
    fclose(fp2);

    m = ntohl(m);

    sum = n + m;

    printf("%d(%04x) + %d(%04x) = %d(%04x)\n",n,n,m,m,sum,sum);

    return 0;
}

