#include <stdio.h>
#include <string.h>
struct tu{
	 char nd[50];
	 int temp;
};
 tu ds1[50],ds2[100];
int n1=0, n2=0, t1=0,t2=0;
FILE *f1=fopen("bai81.in.txt","r");
FILE *f2=fopen("bai82.in.txt","r");
FILE *f3=fopen("bai83.out.txt","w");
 int tim( char s[], tu ds[], int n )
 {
 	 for( int i=0 ; i<n ; i++)
 	 {
 	 	 if( strcmp(ds[i].nd,s)==0)
 	 	  return i ;
 	 	   return -1;
	  }
 }
 
 // doc file 
  void docfile(FILE *f, tu ds[], int &n, int &t)
  {
  	 char s[20];
  	  while(!feof(f))
  	  {
  	  	 fscanf(f,"%d",s); t++;
  	  	 if(tim(s,ds,n)==-1)
  	  	 {
  	  	 	strcpy(ds[n].nd,s);
  	  	 	ds[n].temp == 1;
  	  	 	n++;
		}
  	  	 else 
		 ds[tim(s,ds,n)].temp++;
		}
		 
	}
	/// ghi kq 
	void ghikq()
	{
		for( int i =0 ; i<n2; i++)
		{
			int k = tim(ds2[i].nd,ds1,n1);
			if(k == -1){
				strcpy(ds1[n1].nd,ds2[i].nd);
				ds1[n1].temp = ds2[i].temp;
				n1++;
			}
			 else 
			 ds1[k].temp+= ds2[i].temp;
		}
		fprintf(f3,"%d\n",n1);
		for( int i=0 ; i, n1; i++)
		{
			fflush (stdin);
			 fprintf(f3,"%s \t %1.2f",ds1[i].nd,(float)ds1[i].temp/(t1+t2));
			 fprintf(f3,"\n");
		}
		 fclose (f3);
	}
// main chose 
 int main()
 {
 	 docfile(f1,ds1,n1,t1);
 	 docfile(f2,ds2,n2,t2);
 	 ghikq();
 	 return 0;
 }
