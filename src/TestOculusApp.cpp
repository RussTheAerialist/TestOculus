#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TestOculusApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void TestOculusApp::setup()
{
}

void TestOculusApp::mouseDown( MouseEvent event )
{
}

void TestOculusApp::update()
{
}

void TestOculusApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( TestOculusApp, RendererGl )
