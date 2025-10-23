#include <stdio.h>
#include <fcntl.h>
int main()
{       int fd;
        fd = open("./one.txt",O_CREAT|O_RDWR|O_TRUNC,0655);
        if(fd < 0)
        {
        printf("failture!\n");
                }
        else
	{
        printf("sucessful!\n");
        }
        return 0;

}        
