all : test.exe
test.exe : test1.o test2.o main.o 
	gcc test1.o test2.o main.o -o test.exe 
test1.o : test1.c 
	gcc -C test1.c -o test1.o 
test2.0 : test2.c 
	gcc -C test1.c -o test1.0 
main.o : main.c 
	gcc -C main.c -o main.o 
clean : 
rm -rf *.o *.exe  
