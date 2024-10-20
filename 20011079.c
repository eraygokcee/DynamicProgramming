#include <stdio.h>
#include <string.h>
#define M 20
int max(int a, int b) {
    return (a > b) ? a : b;
}
void printMatrix(int m,int n,int matrix[m+1][n+1]){
    int i,j;
    printf("Table created:\n");
    for(i = 0; i <=m;i++){
        for(j=0;j<=n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}

void printLCS(char *str1, char *str2, int m, int n, int matrix[m + 1][n + 1]) {
    int length = matrix[m][n];
    char longStr[length + 1];
    longStr[length] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            longStr[length - 1] = str1[i - 1];
            i--;
            j--;
            length--;
        } else if (matrix[i - 1][j] > matrix[i][j - 1]) { //ÜSTTEKİ SOLDAN BÜYÜKSE ÜSTE GİT
            i--;
        } else { 
            j--;
        }
    }

    printf("%s\n", longStr);
}

int dynamicMatrix(char *str1, char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);
    int matrix[m + 1][n + 1];
    int i,j;
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0) { //OTO. SIFIR OLACAK
                matrix[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) { //STRİNG İFADELERİ ESİTSE SOL CAPRAZDAN AL VE 1 EKLE
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            } else {
                matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]); // STRİNG İFADELERİ ESİT DEGİLSE SOL VE ÜSTTEN MAX I AL
            }
        }
    }
    printMatrix(m,n,matrix);
    printf("Size of longest phrase: %d\n", matrix[m][n]);
    printf("Longest phrase:\n");
    printLCS(str1, str2, m, n, matrix);
}

int main() {
    //Kullanıcıdan karsılastırılması istenen stringleri istiyoruz.
    char str1[M];
    char str2[M];
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string :");
    scanf("%s",str2);

    dynamicMatrix(str1, str2);

    return 0;
}
