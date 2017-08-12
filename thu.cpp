#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void gptb2(float *a, float *b, float *c)
{
	
	float delta=( (*b)*(*b)-4*(*a)*(*c)),x1,x2;
	if( delta < 0 )
	printf("\n\t PTVN ");

	 else 
	 {
	 	 x1=(-sqrt(delta)-(*b))/2*(*a);
	 	 x2=(sqrt(delta)-(*b))/2*(*a);
	 	 printf("\n\t PT co 2 nghiem  la x1=%.2f va x2=%.2f",x1,x2);
	 }
	
}
int main ()
{
	float a,b,c;
	printf("\n\t nhap vo cac gai tri a,b,c : ");
	scanf("%f%f%f",&a,&b,&c);
	gptb2(&a,&b,&c);
	return 0;
}
