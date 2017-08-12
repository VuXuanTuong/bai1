#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void nhap ( int a[][100], int row, int column)
{ 
	for(  int i=0 ; i < row; i++)
	{
		 for(int j =0 ; j< column; j++)
		 {
	 	 	  a[i][j]=rand()%10 ;
		  }
	}
	 	 
	 
}
void xuat(int a[][100], int row, int column)
{
	for(  int i=0 ; i < row; i++)
	{
		 for(int j =0 ; j< column; j++)
		 {
		 	printf("\t %d",a[i][j]);
		 }
		  printf("\n\n");
	}
}
 void ghi(FILE *h, int a[][100], int row, int column)
 {
 	 h=fopen("test.TXT","wt");
 	 //fprintf(h,"\n\t so hang va cot  thoa man la : %d va %d",row,column);
 	 fprintf(h,"\n%d ",row);
 	 fprintf(h,"\n%d ",column);
 	for( int i=0 ; i <row ; i++)
 	{
 		 for( int j=0 ; j < column ; j++)
 		 {
 		 	fflush (stdin);
 		 	fprintf(h,"\t%d",a[i][j]);
		 }
		  fprintf(h,"\n\n");
		  }
		fclose (h);
 		 
 }
  void doc(FILE *h, int a[][100], int row, int column)
  {
  	
    h=fopen("test.TXT","rt");
    fscanf(h,"\n %d",&row);
    fscanf(h,"\n%d",&column);
    printf("\n%d",row);
    printf("\n%d",column);
    
  
  	for( int i=0 ; i <row ; i++)
 	{
 		 for( int j=0 ; j < column ; j++)
 		 {
	    	fscanf(h,"\t%d",&a[i][j]);
	    	 printf("\t%d",a[i][j]);
	    }
	     printf("\n\n");
	}
	fclose (h);
	
}
  // main chose 
   int main()
   {
   	 int a[100][100],b[100][100] ,row,column ;
   	 FILE *h;
   	 /* printf("\n\t Enter so hang : ");
   	 scanf("%d",&row);
   	  printf("\n\t Enter so cot : ");
   	  scanf("%d",&column);
   	 //FILE *h=fopen("test.TXT"," r ");
   	 nhap(a ,row,column);
   	 ghi(h,a,row,column);
   	  */doc(h,a,row,column);
   	  //xuat(a,row,column);
   	 /*while( !feof(h))
   	  {
   	  	 doc(h,a,row,column);
   	  	 xuat(a,row,column);
		 }
		
   	 fclose(h);
   	 */
   	 return 0;
   }
