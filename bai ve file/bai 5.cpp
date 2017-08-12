#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// tim so  vua la thuan nghich vua la so nguyen to voi tan suat xuat hien nhieu nhat trong file 

 bool thuannghik( int n )
 {
 	 int m=n ,s=0;
 	  while(n)
 	  {
 	  	 s=s*10+n%10;
 	  	 n=n/10;
	   }
	    if( m==s)
	    return 1;
	    return 0;
 }
 // ham so nguyen to 
  bool snt( int n )
  {
  	 if( n< 2)
  	  return 0;
  	   else 
  	    {
  	    	 for( int i=2 ; i<=sqrt(n); i++)
  	    	 {
  	    	 	 if( n%i==0)
  	    	  return 0;
			   }
  	    	 return 1;
		  }
		 
  }
   // main chose 
   void  tim()
    {
    	FILE *fi=fopen("bai5.txt","r");
    	 int a[100],i,n=0;
    	  float p[100]={0};
    	   while(!feof(fi)){
    	   	n++;
    	   	fscanf(fi,"%d",(a+n));
		   }
		    for( i=1; i<=n ; i++)
		    {
		    	 if(snt(*(a+i))==1 && thuannghik(*(a+i))==1) 
		    	 {
		    	 	int d=1;
			    	 for( int j=i+1; j<=n; j++)
			    	 {
			    	 	 if(*(a+j)==*(a+i)) 
						  d++;
					 }
					 *(p+i) = float(d)/(n-1);
				 }
		    	 
			}
			 float max=0;
			  int t;
			 for( i=1; i<=n; i++)
			 {
			 	 if(snt(*(a+i))==1 && thuannghik(*(a+i))==1) 
			 	 {
			 	 	if( *(p+i)>max)
			 	 	 {
			 	 	 	max=*(p+i);
			 	 	 	t=*(a+i);
					   }
				  }  
			 }
			 printf("\n\t So thoa man la %d voi tan suat la : %f",t,max);
			 fclose (fi);
		 
	}
	 int main()
	 {
	 	tim();
	 	return 0;
	 }
