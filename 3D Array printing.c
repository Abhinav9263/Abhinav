// WAP in C to print a 3D array by taking user input.


#include <stdio.h>
int main () {
int a,b,c;
printf ("Define the Dimension on 3D array (x,y,z) : ");
printf ("x = ");
 scanf ("%d",&a);
 printf ("y = ");
 scanf ("%d",&b);
 printf ("z = ");
 scanf ("%d",&c);
int arr[a][b][c];  
printf ("Enter element of Array : \n");
for (int i=0;i<a;i++){ 
for (int j=0;j<b;j++){ 
for (int k=0;k<c;k++){ 
printf ("Enter elements for position [%d] [%d] [%d] : ",i,j,k);
scanf ("%d",&arr[i][j][k]);
}
}
}
printf ("The 3D Array is : \n");
for (int i=0;i<a;i++){ 
for (int j=0;j<b;j++) { 
for (int k=0;k<c;k++) {
	printf ("%d ",arr [i] [j] [k]);
}
printf (" \n");
}
printf (" \n");
}
return 0;
}

