#include <iostream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "ofMain.h"
#include "ofApp.h"
#include <time.h>

//========================================================================
int main( ){
    srand(time(NULL));
    ofSetupOpenGL(768,768,OF_WINDOW);// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());


}
