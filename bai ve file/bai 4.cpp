#include <stdio.h>
#include <string.h>
#include <iostream>
// dem so tu khac nhau trong mot file van ban 
FILE *f1=fopen("bai4.txt","r");
FILE *f2=fopen("bai4b.txt","w");
int main(){
	 char s[100],ss[100][100];
	  int i, j=0,d=0;
	  while(!feof(f1))
	  {
	  	 fgets(s,100,f1);
	  	 char *t;
	  	 t=strtok(s," ");
	  	 while(t!=NULL){
	  	 	 strupr(t);
	  	 	 if(t[strlen(t-1)]=='\n'){
				t[strlen(t-1)]= '\0';
				}
			int co=1;
			for( int i=1; i<=j; i++){
				if(strcmp(t,ss[i])==0){
					co=0;
					break;
				}
			}
			 if(co){
			 	d++;
			 	j++;
			 	strcpy(ss[j],t);
			 }
			 t=strtok(NULL," ");
		   }
	  }
	  fprintf(f2, "%d" ,d);
	  fclose (f1);
	  fclose (f2);
	  return 0;
}
