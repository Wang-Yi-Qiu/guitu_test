#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void){
	int i = 10000000;
	while(i>0){
		printf("000 \n");
		sleep(3);
		i--;
	}
	return 0;

}
