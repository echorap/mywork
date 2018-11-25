#include <stdio.h>

int main()
{
	int a,b,c,a1,b1,c1;
	scanf("%d:%d:%d",&a,&b,&c);
	scanf("%d:%d:%d",&a1,&b1,&c1);

	c+=c1;
	while(c >= 60){
		b++;
	 	c -= 60;
	}
	b+=b1;
	while(b >= 60){
		a++;
		b -= 60;
	}
	a+=a1;
	while(a >= 24){
		a = a - 24;
	}
	printf("%02d:%02d:%02d\n",a,b,c);
	return 0;
}
