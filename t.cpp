#include <stdio.h>
#include <stdlib.h>
void nhap(int *a , int n)
{
	 for( int i=0 ; i<n; i++)
	 {
	 	 printf("\n\t Enter element array a[%d]= ",i);
	 	 scanf("%d",a+i);

	 }
}
 void xuat( int *a, int n )
 {
 	 for( int i=0 ; i<n ; i++)
 	 {
 	 	 printf("\t%d",*(a+i));
	  }
 }
  int swap( int *a, int *b)
  {
  	 int t=*a;
  	 *a=*b;
  	 *b=t;
  }
 // sapxep mang
void sapxep(int *a, int n )
{
	for( int i=0 ; i<n-1; i++)
	{
		 for( int j=i+1; j<n; j++)
		 {
		 	 if(*(a+i)>*(a+j))
		 	 {
		 	 	swap((a+i),(a+j));
			  }
		 	 
		 }
	}
}
 // tim phan tu am min !!!!
  void timammin(int *a, int n)
  {
  	 int min=0,t,dem=0;
  	 for(int i=0 ; i<n; i++)
  	 {
  	 	 if( *(a+i)<min);
  	 	 {
  	 	 	min=*(a+i);
  	 	 	 t=i;
  	 	 	 dem++;
		}
	}

	if( dem !=0)
	    printf("\n\t Element Min <0 in array is %d tai vi tri a[%d] ",min,t);
	else 
	    printf("\n\tmang ko co phan tu am ");
  }
  // tim phan tu duong max 
  void timduongmax(int *a, int n )
   {
   	 int max=*a,t,temp=0;
   	 for( int i=0 ; i<n; i++)
   	 {
   	 	 if(*(a+i)>=max &&*(a+i)>0)
   	 	 {
   	 	 	 max=*(a+i);
   	 	 	 t=i;
   	 	 	 temp++;
			 }
		}
		if( temp !=0)
	    printf("\n\t Element MAX >0 in array is %d tai vi tri a[%d] ",max,t);
	    else 
	    printf("\n\tmang ko co phan tu duong ");
   }
  int main()
  {
  	int *a,n;
  	a=(int *)malloc(n*sizeof(int));
  	printf("\n\t Enter  numbers element : ");
  	scanf("%d",&n);
  	nhap(a,n);
  	xuat(a,n);
  	sapxep(a,n);
  	printf("\n\n\t mang sau khi sap xep la\n ");
  	xuat(a,n);
  	timammin(a,n);
  	timduongmax(a,n);
  	return 0;
  }
