all: compile

play: compile cPlayer execute

compile: main.cpp
	g++ main.cpp -o notesTo

cPlayer: player.cpp
	g++ player.cpp -o player

execute: player songGrubTune notesTo
	./notesTo --grubTune < songGrubTune | ./player | aplay -r 44100

clean:
	rm notesTo player *~
