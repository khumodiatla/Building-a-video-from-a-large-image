# Building-a-video-from-a-large-image
Provided with a very large input imageproduce a video that captures the movement of a much smaller window across this large image

FrameSequence.h contains the function declarations for all functions and class variables

FrameSequence.cpp contains the code for all the functions declared in the FrameSequence.h


#The Makefile can be used to perform the following:

1.  use command "make" to compile the whole project

2.  use command "make run" to run the executable file(.exe) to produce the frame Images 

3.  use command "make clean" to delete object files(.o) and the executable file(.exe)


The EXE_NAME variable in the frametester must be changed to "extractor.exe" since the executable file for this is extractor.exe

When tested with coordinates that go overbounds it make the rest of the frames or part of frames that are overbounds white
