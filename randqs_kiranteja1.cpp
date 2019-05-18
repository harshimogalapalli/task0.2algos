#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void swap(int s,int d)
{
	int y;
	y=s;
	s=d;
	d=y;
}
int n;
int a[100];
int part(int l,int h)
{
	int i=l,j=h,pvt;
	pvt=a[l];
	while(i<j)
	{
	do
	{
		i++;
	}while(a[i]<=pvt);
	do 
	{
		j--;
	}while(a[j>pvt]);
	if(i<j)
	{
	swap(a[i],a[j]);
    }
}
    swap(a[l],a[j]);
    return j;
}
int randm(int l,int h)
{
	srand(time(0));
	int rdm=rand();
	if((rdm>=l)&&(rdm<h))
	{
		swap(a[l],a[rdm]);
	return part(l,h);
}
	else
	randm(l,h);
}
void quicksrt(int l,int h)
{
	int p;
	if(l<h)
	{
		p=randm(l,h);
		quicksrt(l,p);
		quicksrt(p+1,h);
    }
    
}
void print()
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int i,l=0,h=n;
	a[n]=32700;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d ",&a[i]);
	}
	quicksrt(l,h);
	printf("sorted array is\n");
	print();
	return 0;
}


