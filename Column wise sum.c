// WAP in C to derive column wise sum of numbers.


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
printf ("Column wise sum : \n");
for (int j=0;j<b;j++){
	int c =0;
	for (int i=0;i<a;i++) {
		c +=arr[i][j];
	}
}
for (int j=0;j<b;j++){
	int c =0;
	for (int i=0;i<a;i++) {
		c +=arr[i][j];
	}
	printf ("Sum %d : %d \n",j+1,c);
}
return 0;
}
