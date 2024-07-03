compila:
	gcc soma.c -o soma.o
	gcc area.c -o area.o

mega:
	ls -la

pasta:
	mkdir arqivos

remover:
	rm -rf *.o	
        
limpar:
	clear

runsoma:
	./soma.o
runarea:
	./area.o
