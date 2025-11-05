//
// Created by 王羿秋 on 25-11-2.
//
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    //fork之前
    int status;
    printf("老学员在等待新学员.\n");
    pid_t const pid = fork();
    if (pid < 0) {
        perror("fork");
        return 1;
    }else if (pid == 0) {
        printf("新学员%d联系海哥\n", getpid());
        char *args[] = {"/sbin/ping", "-c","10","baidu.com", NULL};
        char *envp[] = {NULL};
        int const re = execve(args[0], args, envp);
        if (re == -1) {
            perror("execve error");
            return 1;
        }
    }else {
        printf("老学员%d等待新学员%d联系完成\n",getpid(),pid);
        waitpid(pid, &status, 0);
        //waitpid(pid_t, int *, int) __DARWIN_ALIAS_C(waitpid);
    }
    printf("老学员等待新学员联系完成");
    return 0;
}
