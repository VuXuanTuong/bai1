#include <stdio.h>
#include <conio.h>
#include <string.h>
struct tu{
	char nd[50];
	int solan;
};
tu ds[1000];
int n=0 , i;
char s[50];
FILE *f1=fopen("bai7.txt","r");
FILE *f2=fopen("bai7b.txt","w");
int tim(char s[])
{
	 for( int i=0; i<n; i++)
	 if(strcmp(ds[i].nd,s)==0)
	 return i;
	 return -1;
}

// doc file 
 void docfile()
 {
 	 while(!feof(f1))
 	 {
 	 	fscanf(f1,"%s",s);
 	 	int i=tim(s);
 	 	if(i==-1){
 	 		strcat(ds[n].nd,s);
 	 		ds[n].solan=1;
 	 		n++;
		  }
		  else ds[i].solan++;
	  }
 }
  void ghikq()
  {
  	 int i , max = 0 ;
  	 for( int i = 0 ; i < n; i++)
  	 if(strlen(ds[i].nd)>max)
  	 	max=strlen(ds[i].nd);
  	for( int i=0 ; i< n ; i++)
  		if(strlen(ds[i].nd)==max)
  		fprintf(f2,"%s %d\n",ds[i].nd,strlen(ds[i].nd));
  		fclose(f2);
  }
   int main()
   {
   	 docfile();
   	 ghikq();
   }
 
 
 
 
 
 
 
 
 
 
 
