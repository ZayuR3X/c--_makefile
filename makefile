derlecalistir: program

program: main.o
	g++ ./lib/main.o -o ./bin/program

read_me.o: 
	g++ -c ./src/read_me.cpp -o ./lib/read_me.o

main.o:
	g++ -I "./include/" -c ./src/main.cpp -o ./lib/main.o

calistir:
	./bin/program.exe