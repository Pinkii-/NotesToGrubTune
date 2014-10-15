all: compile

compile: main.cpp
	g++ main.cpp -o notesToHz

clean:
	rm notesToHz
