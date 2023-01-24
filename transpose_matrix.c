#include<stdio.h>

int main(){
    int n,m,i,j;

    scanf("%d %d", &n, &m);
    int  t[m][n];

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            scanf("%d", &t[j][i]);
        }
    }
    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
