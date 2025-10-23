#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void){
	int i = 10000000;
	FILE *fp = popen("/Users/wangyiqiu/Desktop/guitu/one >> /dev/null 2>&1 &","r");
	if (fp == NULL)
	{
	perror("popen failed");
	return 1;
}
	pclose(fp);
	while(i>0){
		printf("i = %d\n",i);
		i--;
	}
	return 0;

}
