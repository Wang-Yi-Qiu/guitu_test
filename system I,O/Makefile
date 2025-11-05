CC:=gcc
openR: open.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
hello: hello_argc.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
execve: execev.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
fork_execve: fork_execve.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
waitpid: waitpid.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
pstree: ps_tree.c
	-$(CC) $^ -o $@
	-./$@
	-rm $@
pipe:pipe.c
	-$(CC) $^ -o $@
	-./$@ 'tree'
	-rm ./$@