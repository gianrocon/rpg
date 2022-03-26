output: main.o cenario.o gerenciador.o renderizador.o
	g++ main.o cenario.o gerenciador.o renderizador.o -o output

main.o: main.cpp
	g++ -c main.cpp

cenario.o: cenario.cpp cenario.h
	g++ -c cenario.cpp

gerenciador.o: gerenciador.cpp gerenciador.h
	g++ -c gerenciador.cpp

renderizador.o: renderizador.cpp renderizador.h
	g++ -c renderizador.cpp

clean:
	rm *.o output