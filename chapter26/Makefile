book: book.out
	
book.out: book.o functions.o functions2.o
	g++ book.o functions.o functions2.o -o book.out
	
book.o: book.cpp functions.h functions2.h
	g++ -c book.cpp
	
functions.o: functions.cpp functions.h functions2.h
	g++ -c functions.cpp

functions2.o: functions2.cpp functions.h functions2.h
	g++ -c functions2.cpp 
	
prob1: prob1.out
	
prob1.out: prob1.o prob1func.o
	g++ prob1.o prob1func.o -o prob1.out
	
prob1.o: prob1.cpp prob1func.h
	g++ -c prob1.cpp
	
prob1func.o: prob1func.cpp prob1func.h
	g++ -c prob1func.cpp
	
prob3 : prob3.out
	
prob3.out: prob3.o prob3funct.o
	g++ prob3.o prob3funct.o -o prob3.out
	
prob3.o: prob3.cpp prob3funct.h
	g++ -c prob3.cpp 
	
prob3funct.o: prob3funct.cpp prob3funct.h
	g++ -c prob3funct.cpp
