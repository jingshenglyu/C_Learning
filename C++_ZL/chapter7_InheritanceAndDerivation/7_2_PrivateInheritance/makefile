obj = main.o 

main: $(obj)
	g++ $(obj) -o main

main.o: main.cpp Rectangle.h Point.h
	g++ -c main.cpp

.PHONY:clean  #phony target	
clean:
	rm *.o #clean all .o files
