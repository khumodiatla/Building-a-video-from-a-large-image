CC=g++
NAME = Assignment2_MTLKHU004.tar

extractor.exe: compile
	$(CC) extractor.o FrameSequence.o -o extractor.exe

compile: extractor.cpp FrameSequence.cpp
	$(CC) -c extractor.cpp FrameSequence.cpp

run:
	./extractor.exe sloan_image.pgm -p 3 0 0 100 100 0 0 -s 100 100 -w invert invseq -w none sequence2 -w reverse revseq -w revinvert revinvseq

clean:
	rm *.o extractor.exe


package:
	tar -c -f $(NAME) * .git
	gzip $(NAME)
