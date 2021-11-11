#include<unistd.h>
#include<stdio.h>
int main (int argc, char **argv){
	int a,b,c,d,some,moynne;
	printf("donner a\n");
	scanf("%d",&a);
	printf("donner b\n");
	scanf("%d",&b);
	printf("donner c\n");
	scanf("%d",&c);
	printf("donner d\n");
	scanf("%d",&d);
	some = a + b + c + d;
	 moynne = some / 4;
	printf("some:%d,moynne:%d",some,moynne);
	return 0;
}
