#include <stdio.h>
void mangHaiChieu(int a[100][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j = 0 ; j<n;j++){
            printf("hay nhap phan tu arr[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void print(int arr[100][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j = 0 ; j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
int main(int argc, const char * argv[]) {
    int arr[100][100];
    int m,n;
    printf("hay nhap so hang cho mang : ");
    scanf("%d",&m);
    printf("hay nhap so cot cho mang : ");
    scanf("%d",&n);
    mangHaiChieu(arr, m, n);
    print(arr, m, n);
    return 0;
}
