#include <iostream>
#include <string>
#include <vector>
#include "FrameSequence.h"


int main(int argc, char* argv[]){
	// Vector for sequences entered by user
        std::vector<std::string> sequences; 	
	std::vector<int> coordinates;

	std::string imageName = argv[1];  // get Image name
	int x1, y1, x2, y2, frameWidth, frameHeight, n;
	std::string operation, name, option;

	for(int i=2; i < argc; ++i){
		if( std::string (argv[i]) == "-t"){ // Option is -t 
			option = argv[i];
			x1 = std::stoi(argv[i+1]);
			y1 = std::stoi(argv[i+2]);
			x2 = std::stoi(argv[i+3]);
			y2 = std::stoi(argv[i+4]);
		}
		if( std::string (argv[i]) == "-p"){  // Option is -p
			option = argv[i];
			n = std::stoi( argv[i+1]);
			int j = i+2;
			while( std::string (argv[j]) != "-s"){
				coordinates.push_back( std::stoi(argv[j]) );
				++j;
			}
                }
		if( std::string (argv[i]) == "-s"){  // Option is -s
			frameWidth = std::stoi( argv[i+1] );
			frameHeight = std::stoi( argv[i+2] );
		}
		if( std::string (argv[i]) == "-w"){  // Option is -w
			sequences.push_back( argv[i+1] );
			sequences.push_back( argv[i+2] );
		}
	}

	MTLKHU004::FrameSequence frameSeq;  // FrameSequence object 
	frameSeq.readImage(imageName); // Invoke the readImage function

	if( option == "-t" ){
		frameSeq.extractFrames(x1, y1, x2, y2, frameWidth, frameHeight );  // Invoke the extractFrames function	
	}
	if( option == "-p" ){
		frameSeq.mastery(n, coordinates, frameWidth, frameHeight ); // Invoke the mastery function
	}

	frameSeq.formatImages(frameWidth, frameHeight, sequences);   // Invoke the formatImage function

}
