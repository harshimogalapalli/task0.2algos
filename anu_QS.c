#include<stdio.h>
#include<conio.h>
using namespace std;

void swap(int *x,int *y) {
	int t;
	t=*a;*a=*b;*b=t;
}

int part(int a[],int l,int h) {
	int piv,ind,i;
	ind=l;
	piv=h;
	for (i=l;i<h;i++) {
		if (a[i]<a[piv]) {
			swap(&a[i],&a[ind]);
			ind++;
		}
	}
	swap(&ind,&piv);
	return ind;
}

int randPart(int a[],int l,int h) {
	int p,n;
	n=rand();
	p=l+n%(high-low);
	swap(&a[p],&a[h]);
	return part(a,l,h);
}

void sort(int a,int l,int h) {
	int p;
	if (l<h) {
		p=randPart(a,l,h);
		sort(a,l,p-1);
		sort(a,p+1,h);
	}
}

void main()
{
	int i,n,a[50];
	printf("Enter no of elemets:"); scanf("%d",&n);
	printf("Enter array elements:");
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	sort(a,0,n-1);
	printf("Array after sorting:");
	printf(a);
}
