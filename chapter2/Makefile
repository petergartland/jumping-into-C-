CC = g++

CFLAGS = -c -Wall

practice: practice.out
	
practice.out: practice.o 
	$(CC) practice.o -o practice.out
	
practice.o: practice.cpp
	$(CC) $(CFLAGS) practice.cpp
	
prob1: prob1.out
	
prob1.out: prob1.o 
	$(CC) prob1.o -o prob1.out
	
prob1.o: prob1.cpp
	$(CC) $(CFLAGS) prob1.cpp
	
prob2: prob2.out
	
prob2.out: prob2.o
	$(CC) prob2.o -o prob2.out

prob2.o: prob2.cpp
	$(CC) $(CFLAGS) prob2.cpp
	
clean:
	rm -rf *o *.out
	
