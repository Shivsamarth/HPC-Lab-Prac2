#include <omp.h>
#include <stdio.h>

int main() {

	int n;
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++) scanf("%d",&b[i]);
	
	#pragma omp parallel for default(shared)
		for(int i=0;i<n;i++)
			c[i] = a[i] + b[i];
	
	for(int i=0;i<n;i++)
		printf("%d ",c[i]);
}
