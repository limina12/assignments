#include<stdio.h>
#include<string.h>
// Read only region start

int createPIN(int input1,int input2,int input3)
{
    // Read only region end
	int a,b,c,a1,a2,b1,b2,c1,c2,e,d,e1,e2,d1,d2,sum,max;
	a=input1%10;
	input1/=10;
	a1=input1%10;
	input1/=10;
	a2=input1;
	b=input2%10;
	input2/=10;
	b1=input2%10;
	input2/=10;
	b2=input2;
	c=input3%10;
	input3/=10;
	c1=input3%10;
	input3/=10;
	c2=input3;
	
	e=a<b?(a<c?a:c):(b<c?b:c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	max=d;
	e1=a1<b1?(a1<c1?a1:c1):(b1<c1?b1:c1);
	d1=a1>b1?(a1>c1?a1:c1):(b1>c1?b1:c1);
	
	if(max<d1)
	{
		max=d1;
	}
	e2=a2<b2?(a2<c2?a2:c2):(b2<c2?b2:c2);
	d2=a2>b2?(a2>c2?a2:c2):(b2>c2?b2:c2);
	if(max<d2)
	{
		max=d2;
	}
	sum=((max*1000)+(e*100)+(e1*10)+(e2));
	printf("%d",sum);
	
	
	
}
