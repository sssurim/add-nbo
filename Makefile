#Makefile

all: add-nbo

add-nbo :
	g++ -o add-nbo add-nbo.cpp

clean:
	rm add-nbo *.bin

