CC = g++

CFLAGS = -c -Wall

book: book.out
	
book.out: book.o linkedlist.o
	$(CC) book.o linkedlist.o -o book.out
	
book.o: book.cpp linkedlist.h error.h
	$(CC) $(CFLAGS) book.cpp
	
linkedlist.o: linkedlist.cpp linkedlist.h
	$(CC) $(CFLAGS) linkedlist.cpp
	
prob1: prob1.out
	
prob1.out: prob1.o functions.o
	$(CC) prob1.o functions.o -o prob1.out
	
prob1.o: prob1.cpp functions.h
	$(CC) $(CFLAGS) prob1.cpp
	
functions.o: functions.cpp functions.h
	$(CC) $(CFLAGS) functions.cpp
	
	
prob2: prob2.out
	
prob2.out: prob2.o
	$(CC) prob2.o -o prob2.out

prob2.o: prob2.cpp
	$(CC) $(CFLAGS) prob2.cpp
	
prob3: prob3.out
	
prob3.out: prob3.o prob3_functions.o
	$(CC) prob3.o prob3_functions.o -o prob3.out
	
prob3.o: prob3.cpp prob3_functions.h
	$(CC) $(CFLAGS) prob3.cpp
	
prob3_functions.o: prob3_functions.cpp prob3_functions.h
	$(CC) $(CFLAGS) prob3_functions.cpp
	
prob4: prob4.out
	
prob4.out: prob4.o
	$(CC) prob4.o -o prob4.out

prob4.o: prob4.cpp
	$(CC) $(CFLAGS) prob4.cpp
	
prob5: prob5.out
	
prob5.out: prob5.o
	$(CC) prob5.o -o prob5.out

prob5.o: prob5.cpp
	$(CC) $(CFLAGS) prob5.cpp
	
prob7: prob7.out
	

prob7.out: prob7.o
	$(CC) prob7.o -o prob7.out

prob7.o: prob7.cpp
	$(CC) $(CFLAGS) prob7.cpp
	
clean:
	rm -rf *o *out
	
