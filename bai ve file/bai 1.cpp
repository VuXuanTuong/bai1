#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void nhap ( int a[], int n)
{
	 int M ,i;
	 printf("\n\t Enter so M : ");
	 scanf("%d",&M);
	 do
	 {
	 	 for(  i=0 ; i < n; i++)
	 	 {
	 	 	  a[i]=rand()%10 ;
		  }
	 }while( a[i] >(fabs(M)));
}
void xuat(int a[], int n)
{
	 for( int i =0 ; i< n ; i++)
	 {
	 	 printf("\t %d ",a[i]);
	 }
}
 void ghi(FILE *h, int a[], int n)
 {
 	 fprintf(h,"\n\t so cac so thoa man la : %d",n);
 	 fprintf(h," \n\t Danh sach cac so la ");
 	for( int i=0 ; i <n ; i++)
 	{
 		 
 		 fflush (stdin);
 		 fprintf(h,"\n\t%d",a[i]);
	 }
 }
  // main chose 
   int main()
   {
   	 int a[100], n ;
   	  printf("\n\t Enter so n : ");
   	  scanf("%d",&n);
   	 FILE *h=fopen("SOIN.TXT"," w");
   	 nhap(a,n);
   	 ghi(h,a,n);
   	 fclose(h);
   	 return 0;
   }
