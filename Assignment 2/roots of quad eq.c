#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c , d , q, w, r1, r2, i1, i2;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&a, &b, &c);
	d = (b*b)-(4*a*c);
	if(d>=0)
	{
		q = (-b) + (sqrt(b*b - 4*a*c));
		w = (-b) - (sqrt(b*b - 4*a*c));
		r1 = (q)/(2*a);
		r2 = (w)/(2*a);
		printf("The roots are %d & %d", r1 , r2);
	}
	else
	{
		r1 = -b/2;
		r2 = sqrt(d)/2;
		i1 = r1 + r2;
		i2 = r1 - r2;
		printf("The roots are %d& %d",i1 ,i2);
	}
}