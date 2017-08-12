#include <stdio.h>
#include <string.h>
FILE *f1=fopen ("bai6.in.txt","r");
FILE *f2=fopen ("bai6.out.txt","w");
struct thnghich{
	 char nd[20];
	 int solan;
};
 thnghich ds[100];
 int n=0 ;
 int kt(char s[])
 {
 	 int l=strlen(s);
 	 for( int i =0 ; i<=(l-1)/2; i++)
 	 	 if(s[i]!=s[l-1-i]) return 0;
	   return 1;
 }
  int tim(char s[], thnghich ds[], int n)
  {
  	 for( int i=0 ; i<n ; i++)
  	 	if( strcmp(ds[i].nd,s)==0)
  	 	 return i ;
  	return -1;
	
  }
   void max()
   {
   	 int daimax= strlen(ds[0].nd);
   	 for( int i=1; i<n; i++)
   	 if(strlen(ds[i].nd)>daimax)
   	 	daimax=strlen(ds[i].nd);
   	for( int i =0 ; i<n ; i++)
   	 	if(strlen(ds[i].nd)== daimax)
   	 	fprintf(f2,"%s %d\n",ds[i].nd,ds[i].solan);
   	 	
   }
int main()
   {
   	 char s[20];
   	 while(!feof(f1))
   	 {
   	 	 fscanf(f1,"%s",s);
   	 	 if(kt(s))
   	 	 {
   	 	 	 int t=tim(s,ds,n);
   	 	 	 if(t==-1)
   	 	 	 {
   	 	 	 	 strcpy(ds[n].nd,s);
   	 	 	 	 ds[n].solan =1;
   	 	 	 	 n++;
   	 	 	 }
   	 	 	 else 
   	 	 	 ds[t].solan++;
   	 	 } 
	}
	max();
	fclose(f2);
}
		
   
