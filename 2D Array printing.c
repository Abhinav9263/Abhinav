// WAP in C to print a 2D array by taking user input.


#include <stdio.h>
int main () {
int a,b;
printf ("Enter the number of Rows : ");
scanf ("%d",&a);
printf ("Enter the number of Columns : ");
scanf ("%d",&b);
int arr[a][b];
printf ("Enter element of Array : \n");
for (int i=0;i<a;i++){ 
for (int j=0;j<b;j++){ 
printf ("Enter elements for position [%d] [%d] : ",i,j);
scanf ("%d",&arr[i][j]);
}
}
printf ("The 2D Array is : \n");
for (int i=0;i<a;i++){ 
for (int j=0;j<b;j++) {
	printf ("%d ",arr [i] [j]);
}
printf (" \n");
}
return 0;
}
