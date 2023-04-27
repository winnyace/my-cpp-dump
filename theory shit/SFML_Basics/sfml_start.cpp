#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main()
{
	// below, we make it so when we start the program, Asuka says "I love you"
	sf::SoundBuffer buffer;
	sf::Sound sound;
	if (!buffer.loadFromFile("audio/asuka.wav"))
		return -1;
	else
		sound.setBuffer(buffer);
	sound.play();

	// below, we make a window and then display Asuka in it, hehe
	sf::RenderWindow rootWindow(sf::VideoMode(120, 120), " ", sf::Style::Close);
	rootWindow.setPosition(sf::Vector2i(650, 300));

	sf::Texture texture;
	texture.setSmooth(true);
	sf::Sprite asuka;

	while (rootWindow.isOpen()) {
		sf::Event event;
		while (rootWindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				rootWindow.close();
		}
		rootWindow.clear(sf::Color::Black);

		if (!texture.loadFromFile("sprites/asuka.png", sf::IntRect(-100, -100, 128, 128)))
			return -1;
		asuka.setTexture(texture);
		rootWindow.draw(asuka);

		rootWindow.display();
	}
	return 0;
}
