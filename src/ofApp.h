#pragma once

#include "ofMain.h"
#include "pingPongBuffer.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofVboMesh particles;
    ofShader render, updatePos;
    ofEasyCam cam;
    pingPongBuffer pingPong;
    ofVec3f emitterPos, prevEmitterPos;
    int particleNum, texRes;
    bool showTex;
};
