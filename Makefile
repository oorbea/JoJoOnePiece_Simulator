program.exe: main.o loadingScreen.o powers.o randomizer.o fruit.o stand.o player.o
	chcp 65001
	g++ -o program.exe *.o

loadingScreen.o: loadingScreen.hh loadingScreen.cc
	g++ -c loadingScreen.cc

randomizer.o: randomizer.hh randomizer.cc
	g++ -c randomizer.cc

stand.o: stand.hh stand.cc
	g++ -c stand.cc

fruit.o: fruit.hh fruit.cc
	g++ -c fruit.cc

player.o: player.hh player.cc stand.o fruit.o
	g++ -c player.cc

powers.o: powers.hh powers.cc player.o randomizer.o stand.o fruit.o
	g++ -c powers.cc

main.o: main.cc loadingScreen.o randomizer.o stand.o fruit.o player.o powers.o
	g++ -c main.cc

clean:
	rm -f *.o
	rm -f *.exe