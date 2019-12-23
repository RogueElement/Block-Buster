// Block Buster.cpp : Defines the entry point for the application.
//

// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".

//
//#include "frame.h"
//
//class App : public wxApp
//{
//public:
//	virtual bool OnInit();
//};
//
//wxIMPLEMENT_APP(App);
//
//bool App::OnInit()
//{
//	MainFrame* frame = new MainFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
//	frame->Show(true);
//	return true;
//}

#include <SFML/Window.hpp>

int main()
{
	sf::Window window(sf::VideoMode(800, 600), "My window");

	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}

	return 0;
}
