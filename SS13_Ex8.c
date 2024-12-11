#include<stdio.h>
  int ucln(int a , int b){
    if ( a== 0) return b;
    if ( b== 0) return a;
    while (a!= b ) {
    	if (a<b){
		   b = b - a;
		   	}else {
           a = a - b ;	     
		  }   
		}
	 return a;
	 }	
	 int main() {
    int a,b;
    printf("hay nhap so thu nhat : ");
    scanf("%d",&a);
    printf("hay nhap so thu hai : ");
    scanf("%d",&b);
    printf("Uoc chung lon nhat cua 2 so tren la %d", ucln(a, b));
    return 0;
    }
