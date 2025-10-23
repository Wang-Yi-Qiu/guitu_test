//
// Created by 王羿秋 on 25-9-22.
//
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
void watch_(){
	int result = system("cat /proc/cpuinfo");
	if (result == 0){
		printf("SUCCESSFUL!");
}	else{
	perror("Faliure!");
}
}

int main(){
	watch_();	
	return 0;
}
