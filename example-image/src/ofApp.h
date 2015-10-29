#pragma once

#include "ofMain.h"
#include "ofxRpiLED.h"

class ofApp : public ofBaseApp{
	public:
		ofxRpiLED 	led;
		ofImage 	image;
		void setup();
		void update();
		void draw();
};
