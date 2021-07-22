#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp;

    uint32_t n, m, sum;

    fp = fopen(argv[1],"rb");
    fread(&n, sizeof(int), 1, fp);
    fclose(fp);

    n = ntohl(n);

    fp = fopen(argv[2],"rb");
    fread(&m, sizeof(int), 1, fp);
    
    fclose(fp);

    m = ntohl(m);

    sum = n + m;

    printf("%d(0X%x) + %d(0x%x) = %d(0x%x)\n",n,n,m,m,sum,sum);

    return 0;
}

