#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
typedef struct sinhvien
{
	 char name [50];
	char namsinh[40];
	 char masv[30];
	 
}sinhvien;

void nhap(sinhvien s[], int sosv)
{
	for( int i=1; i<=sosv; i ++)
	{
		fflush (stdin);
		 printf("\n\t Enter name sinh vien %d : ",i); gets(s[i].name);
		 fflush (stdin);
		 printf("\n\t Enter ma sinh vien %d : ",i); gets(s[i].masv);
		 fflush (stdin);
		 printf("\n\t Enter nam sinh cua  sinh vien %d : ",i); gets(s[i].namsinh);
		 fflush (stdin);
	}
}
 void xuat(sinhvien s[], int sosv)
 {
 	 for( int i=1 ; i<=sosv; i++)
 	 {
 	 	printf("\n Ten : %s \n MASV : %s \n NAMSINH :%s",s[i].name,s[i].masv,s[i].namsinh);
	  }
 }
 // ghi file 
  void ghi(FILE *f, sinhvien s[],int sosv)
  {
  	f=fopen("SVDAT.TXT","wt");
  	 //fprintf(f,"%d ",sosv);
  	 for( int i=1; i<=sosv; i++)
  	 {
  	 	//fprintf(f,"\n");
	  	 fputs(s[i].name,f);
	  	// fprintf(f,"\n MASV");
	  	fprintf(f,"\n");
	  	 fputs(s[i].masv,f);
	  	 fprintf(f,"\n");
	  	 fprintf(f,"%s",s[i].namsinh);
	  	 fprintf(f,"\n");
	   }
	    fclose(f);
  	
  }
  // doc file 
   void doc(FILE *f, sinhvien s[],int sosv)
   {
   	 f=fopen("SVDAT.TXT","rb");
   	 //fscanf(f,"\n%d",&sosv);
   	 for( int i=1; i<=sosv; i++)
   	 {
   	 	 fflush (stdin);
   	 //	char dem[20];
   	 	 //fgets(dem,20,f);
   	 	 fscanf(f,"%s",&s[i].name);
   	 	 fflush (stdin);
   	 	 fscanf(f,"%s",&s[i].masv);
   	 	 fflush (stdin);
   	 	 fscanf(f,"%s",&s[i].namsinh);
   	 	 printf("\n Ten : %s \n MASV : %s \n NAMSINH :%s",s[i].name,s[i].masv,s[i].namsinh);
   	 	 
		}
		 fclose(f);
   }
 
   int main()
   { 
   	
	   sinhvien s[100];
	   int sosv ;
	   FILE *f;
	   
	  doc(f,s,sosv);
  /*printf("\n\t Enter so sinh vien ");
	scanf("%d",&sosv);
    nhap(s,sosv);
    ghi(f,s,sosv);
   	 FILE *f=fopen("SVDAT.TXT","rt");
   	  ghi(f,s,sosv);
   	   
		  while(!feof(f))
		  {
		  	 doc(f,s,sosv);
		  	 
		  }
		  
   	 fclose(f);
   	*/
   	 return 0;
   }
