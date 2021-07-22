#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp1;
    FILE *fp2;
    uint32_t n, m;

    fp1 = fopen(argv[1],"rb");
    fread(&n, sizeof(int), 1, fp1);
    fclose(fp1);

    n = ntohl(n);
    
    fp2 = fopen(argv[2],"rb");
    fread(&m, sizeof(int), 1, fp2);
    fclose(fp2);

    m = ntohl(m);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",n,n,m,m,n+m,n+m);

    return 0;
}

