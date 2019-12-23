// Block Buster.cpp : Defines the entry point for the application.
//

// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".

#include <SFML/Graphics.hpp>

#define BLOCK_BUSTER "Block Buster"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), BLOCK_BUSTER);

	window.setFramerateLimit(120);

	sf::CircleShape shape(50.f);

	// set the shape color to green
	shape.setFillColor(sf::Color(100, 250, 50));
	// shape.setOrigin(sf::Vector2f(400, 600));

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

		// clear the window with black color
		window.clear(sf::Color::Black);

		// draw everything here...
		// window.draw(...);
		window.draw(shape);

		// shape.rotate(1);

		// end the current frame
		window.display();

	}

	return 0;
}
