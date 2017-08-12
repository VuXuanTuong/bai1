#include <stdio.h>
#include <string.h>


typedef struct sinhvien{
	 int ma;
	 char name[100];
	 char ngaysinh[100];
	 float d1,d2,d3,tong;
}sinhvien;
  //int n ; 
  void nhapfile(sinhvien sv[], int n)
   {
   	 for( int i =1; i <=n ; i++)
   	 {
   	 	
   	 	 printf(" MA : %d \n",i);
   	 	 fflush (stdin);
   	 	 printf("\n ENter name : "); gets(sv[i].name);
   	 	 fflush (stdin);
   	 	 printf("\n Enter ngay sinh :") ;gets(sv[i].ngaysinh);
   	 	 fflush (stdin);
   	 	 printf("cac diem lan luot la : "); scanf("%f%f%%f",&sv[i].d1,&sv[i].d2,&sv[i].d3);
   	 	 fflush (stdin);
   	 	 printf("\n");
		}
		 
   }
   // ghi file 
    void ghifile(FILE *f1,sinhvien sv[], int n)
    {
    	f1=fopen("bai9.txt","wt");
    	for( int i =1; i<=n ; i++)
    	{
    		fprintf(f1,"%d",i);
    		fprintf(f1,"\n");
    		fputs(sv[i].name,f1);
    		fprintf(f1,"\n");
    		fputs(sv[i].ngaysinh,f1);
    		fprintf(f1,"\n");
    		fprintf(f1,"%.2f\n%.2f\n%.2f\n",sv[i].d1,sv[i].d2,sv[i].d3);
    		
		}
		fclose(f1);
	}
   void Docfile(FILE *f2,sinhvien sv1[], int &n)
   {
   	 char t[100];
   	 FILE * f1=fopen("bai9.txt","rt");
   	 f2=fopen("bai9b.txt","wt");
   	 fscanf(f1,"%d",&n);
   	 for( int i=1; i<=n; i++)
   	 {
   	 	 sv1[i].ma=i;
   	 	 fgets(t,100,f1);
   	 	 fgets(sv1[i].name,100,f1);
   	 	 sv1[i].name[strlen(sv1[i].name)-1]='\0';
   	 	 fgets(sv1[i].ngaysinh,100,f1);
   	 	 sv1[i].ngaysinh[strlen(sv1[i].ngaysinh)-1]='\0';
   	 	 fscanf(f1,"%f%f%f",&sv1[i].d1,&sv1[i].d2,&sv1[i].d3);
   	 	 sv1[i].tong=sv1[i].d1+sv1[i].d2+sv1[i].d3;
		}
	fclose (f2);
   }
    void sapxep(sinhvien sv1[], int n)
    {
    	 for( int i ; i<=n-1 ; i++)
    	 {
    	 	 for(int j= i +1; j<=n; j++)
    	 	 {
    	 	 	if(sv1[i].tong>sv1[j].tong)
    	 	 	{
    	 	 		  sinhvien h= sv1[i];
    	 	 		 sv1[i]=sv1[j];
    	 	 		 sv1[j]=h;
				  }
			  }
		 }
	}
	 void xuat(sinhvien sv1[], int n)
	 {
	 	 
	 	 for( int i=1 ; i<=n ; i++)
	 	 {
	 	 	 printf("\n Ma : %d  Ten :%s Ngaysinh :%s Tongdiem:%.2f",sv1[i].ma,sv1[i].name,sv1[i].ngaysinh,sv1[i].tong);
		  }
	 }
	 // main chose 
int main()
	  {
	  	 FILE *f1;
		   FILE *f2;
	  	 sinhvien sv[100];
		   sinhvien sv1[100]; 
	  	 int n ;
	  	 /*printf("\n enter so sinh vien : ");
	  	 scanf("%d",&n);
	  	 nhapfile(sv,n);
	  	 ghifile(f1,sv,n);
	  	 
	  	 */
	  	 Docfile(f2,sv,n);
	  	 sapxep(sv,n);
	  	xuat(sv,n);
	  	
	  	 return 0 ; 
	  }
    
