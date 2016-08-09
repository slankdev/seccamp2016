

all:
	gcc little.c -o little
	gcc packetCompiler.c -o packetCompiler
	gcc calcrc.c -o calcrc


clean:
	rm -rf packetCompiler
	rm -rf little
	rm -rf calcrc
