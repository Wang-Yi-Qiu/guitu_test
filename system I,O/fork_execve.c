//
// Created by 王羿秋 on 25-10-31.
//
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(int argc, char *argv[]) {
    printf("我是学员WangYiQiu%d继续在一楼精进，邀请WangXiYu过来学习！\n",getpid());
    pid_t pid = fork();
    if (pid == -1) {
        perror("学员2无法被邀请");
    }
    else if (pid == 0) {
        char *name = "WangXiYu";
        char *args[] = {"/Users/wangyiqiu/Desktop/guitu/system I,O/hello",name, NULL};
        char *envp[] = {NULL};
        int re = execve(args[0], args, envp);
        if (re == -1) {
            perror("WangXiYu上楼失败！");
        }
    }else {

        printf("WangYiQiu%d送完WangXiYu%d之后继续学习\n",getpid(),pid);
        sleep(1);
    }
}
