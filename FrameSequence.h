#include <vector>
#include <string>


#ifndef __FrameSequence__
#define __FrameSequence__

namespace MTLKHU004{
	class FrameSequence{
		char * binaryData; // Pointer to Input Image heap memory  	
		int height, width, intensity; // height, width , intensity of the input Image 		
		std::vector< unsigned char**> imageSequence;
		unsigned char** frameArray;
		int frameWidth, frameHeight;
		
		public:
		// Default non parameterized constructor declaration
		FrameSequence();

		// Destructor declaration
		~FrameSequence();

		// readImage function declaration
		void readImage( std::string imageName);

		// extractFrame function declaration
                void extractFrame(int x1, int y1, int frameWidth, int frameHeight);

		// extractFrames function declaration
		void extractFrames(int x1, int y1, int x2, int y2, int frameWidth, int frameHeight);

		// formatImages function declaration
		void formatImages(int frameWidth, int frameHeight, std::vector<std::string> sequences);		
		
		// mastery function declaration
		void mastery( int n, std::vector<int> coordinates, int frameWidth, int frameHeight);		

		// acceleration / deceleration function declaration
		void accelerate(int val);

	}; 
}

#endif
