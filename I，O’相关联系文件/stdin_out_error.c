#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //char * ch = malloc(100);
    //fgets(ch,100,stdin);
    //printf("你好：%s\n",ch);
    //标准输入
    char * ch = malloc(100);
    char *a = fgets(ch,100,stdin);//这样也是可以的，我直接使用了字符指针完成这项工作
    printf("你好：%s\n",a);
    //错误输出
   // fputs(ch,stderr);
    //printf("\n");
    //标准输出
    fputs(ch,stdout);

    free(ch);

    return 0;
}
