#include <SFML/Graphics.hpp>

int main()
{
	sf::Window window;
	window.create(sf::VideoMode({800, 600}), "EcoSim");

	while (window.isOpen())
	{

		while (const std::optional event = window.pollEvent()) // Poll for events
		{
			
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}
	}
}
