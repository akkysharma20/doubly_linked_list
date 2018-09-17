main: main.o menu.o creatlist.o display.o search.o addatbeg.o addatend.o delete.o
	gcc -g -o main main.o menu.o creatlist.o display.o search.o addatbeg.o addatend.o delete.o
main.o:	main.c
	gcc -g -c -o main.o main.c
menu.o: menu.c
	gcc -g -c -o menu.o menu.c
creatlist.o: creatlist.c
	gcc -g -c -o creatlist.o creatlist.c
display.o: display.c
	gcc -g -c -o display.o display.c
search.o: search.c
	gcc -g -c -o search.o search.c
addatbeg.o: addatbeg.c
	gcc -g -c -o addatbeg.o addatbeg.c
addatend.o: addatend.c
	gcc -g -c -o addatend.o addatend.c
delete.o: delete.c
	gcc -g -c -o  delete.o delete.c
clean:
	rm -rf *.o main
