all : dspd

dspd : main.o MakeFunNode.o InitializeStack.o Push.o Pop.o duplicateStack.o reverseStack.o printStack.o
	gcc main.o MakeFunNode.o InitializeStack.o Push.o Pop.o duplicateStack.o reverseStack.o printStack.o -o dspd

main.o : main.c
	gcc -c main.c

MakeFunNode.o : MakeFunNode.c
	gcc -c MakeFunNode.c

InitializeStack.o : InitializeStack.c
	gcc -c InitializeStack.c

Push.o : Push.c
	gcc -c Push.c

Pop.o : Pop.c
	gcc -c Pop.c

duplicateStack.o : duplicateStack.c
	gcc -c duplicateStack.c

reverseStack.o : reverseStack.c 
	gcc -c reverseStack.c

printStack.o :printStack.c
	gcc -c printStack.c

clean :
	rm -rf *o dspdt
