#include<stdio.h>
#include<math.h>
int main()
{
	printf("Hello");

	double a=acos(-1);
	double xm;
	xm=pow(25,a);
	
	double h=0.001;
	
	double x,y;
	printf(" x\ty\t\n");
	x=0;
	y=a;
	printf("%6.3lf\t%6.6lf\t\n",x,y);
	do
	{
		x=x+h;
		y=y-h*y;
		
		if(x>=0.001&&x<=0.011) printf("%6.3lf\t%6.6lf\n",x,y);
		else if(x>=0.012&&x<=0.013)  printf("......\t......\n");
		else if(x>=0.014&&x<=6.893)  continue;
		else if(x>=6.894&&x<=6.895)  printf("......\t......\n");
		else if(x>=6.896&&x<=6.906) printf("%6.3lf\t%6.6lf\n",x,y);
		else continue;
	}
	while(h*y>=1e-6);
	printf("\n\n");
	printf("The final steady state is  %lf\n\n",y);
	
	return 0;
	 
} 
