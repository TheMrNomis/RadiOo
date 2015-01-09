# g++ -std=c++0x main.cpp -o ../RadiOo.out -L/home/nomis/sfml/lib -lsfml-audio

CC=g++
CFLAGS=-std=c++0x
CLIBS=-L/usr/lib/sfml/lib -lsfml-audio
SRC=main.cpp
OBJ=$(SRC:.cpp=.o)
EXEC=../RadiOo.out

all: objects
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC) $(CLIBS)

objects:
	$(CC) -c $(SRC)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
