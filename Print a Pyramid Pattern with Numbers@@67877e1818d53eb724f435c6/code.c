#include <stdio.h>
int main()
int rows,i,j;
scanf("%d",&rows);
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < rows - i; j++) {
 printf("%c ", 'A' + j);
 }
 printf("\n");
 }
