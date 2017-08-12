#include <stdio.h>
#include <conio.h>
#include <string.h>
FILE *f1=fopen("mathang.txt","r");
FILE *f2=fopen("mathang1.txt","w");
 typedef struct matHang{
 	 int maMH;
 	 char name[100];
 	 char nhom[100];
 	 float mua,ban,loinhuan;
 }matHang;
  void docfile(matHang s[], int &somh)
  { 
  	char dem[100];
  	//fscanf(f1,"%d",&somh);
  	for( int i=1; i<=somh; i++)
  	{
  		 s[i].maMH=i;
  		 fgets(dem,100,f1);
  		 fgets(s[i].name,100,f1);
  		 s[i].name[strlen(s[i].name)-1]='\0' ;
  		 fgets(s[i].nhom,100,f1);
  		 s[i].nhom[strlen(s[i].nhom)-1]='\0' ;
  		 fscanf(f1,"%f",&s[i].mua);
  		 fscanf(f1,"%f",&s[i].ban);
  		//s[i].loinhuan=s[i].ban - s[i].mua;
	  }
  }
   float tinhLoiNhuan(matHang s[], int &somh)
   {
	   	for( int i=1; i<=somh; i++)
	   	{
	   		 return s[i].loinhuan=s[i].ban-s[i].mua;
		   }
	   	
		   
   }
   void sapxep(matHang s[], int somh)
   {
   	 for( int i=1 ; i<=somh; i++)
   	 {
   	 	 for(int j=i+1; j<=somh; j++)
   	 	 {
   	 	 	 if(s[i].loinhuan>s[j].loinhuan)
   	 	 	 {
   	 	 	 	 matHang temp=s[i];
   	 	 	 	 s[i]=s[j];
   	 	 	 	 s[j]=temp;
				  }
			 }
		}
   }
    void xuat(matHang s[], int somh)
    {
    	 for( int i=1; i<=somh; i++)
    	 {
    	 	 fprintf(f2,"%d %s %s %.f \n",s[i].maMH,s[i].name,s[i].nhom,s[i].loinhuan);
    	 	 
		 }
	}
	// main chose 
	 int main()
	 {
	 	 matHang s[100];
		int somh;
	 	 printf("\n\t nhap so mat hang ");
	 	 scanf("%d",&somh);
	 	 docfile(s,somh);
	 	 sapxep(s,somh);
	 	 xuat(s,somh);
	 }
