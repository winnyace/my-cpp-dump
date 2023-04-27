#include <iostream>
#include <string>
#include <ctime>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

struct Girl
{
	sf::Texture texture;
	sf::Sprite sprite;
	sf::SoundBuffer buffer;
	sf::Sound sound;
	sf::Text text;
};

int main()
{
	Girl Asuka, Misaki, Mashiro, Rika;
	sf::RenderWindow rootWindow(sf::VideoMode(200, 200), "Aokana... thing", sf::Style::Close);
	sf::Font font;
	srand(time(0));
	int RNG = rand() % 4 + 1;
	bool soundonce = false;

	// some settings before the window loop
	rootWindow.setPosition(sf::Vector2i(650, 300));
	
	if (!font.loadFromFile("fonts/Roboto-Regular.ttf"))
	{
		std::cout << "\nERROR: Font not loaded" << std::endl;
		return -1;
	}

	while (rootWindow.isOpen())
	{
		sf::Event event;
		while (rootWindow.pollEvent(event)) 	
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					rootWindow.close();
					break;
				case sf::Event::MouseButtonReleased:
					rootWindow.close();
					break;
				case sf::Event::KeyReleased:
					Asuka.sound.play();
					break;
				default:
					break;
			}
		}	
		
		switch (RNG)
		{
			case 1:
				rootWindow.clear(sf::Color::Black);

				if (!Asuka.texture.loadFromFile("sprites/asuka.png", sf::IntRect(-100, -100, 128, 128)))
				{
					std::cout << "\nERROR: Asuka's texture didn't load.\n";
					return -1;
				}

				Asuka.texture.setSmooth(true);
				Asuka.sprite.setTexture(Asuka.texture);
				rootWindow.draw(Asuka.sprite);

				Asuka.text.setFont(font);
				Asuka.text.setString("Asuka's case");
				Asuka.text.setPosition(0.f, 125.f);
				rootWindow.draw(Asuka.text);

				rootWindow.display();
				while (1)
				{
					if (soundonce == false)
					{
						soundonce = true;
						if (!Asuka.buffer.loadFromFile("audio/asuka.wav"))
						{
							std::cout << "\nERROR: Asuka's sound buffer didn't load.\n";
							return -1;
						}
						Asuka.sound.setBuffer(Asuka.buffer);
						Asuka.sound.play();
						sf::sleep(Asuka.buffer.getDuration());
					}
					else
						break;
				}
				break;
			case 2:
				rootWindow.clear(sf::Color::Black);

				if (!Misaki.texture.loadFromFile("sprites/misaki.png", sf::IntRect(-100, -100, 128, 128)))
				{
					std::cout << "\nERROR: Misaki's texture didn't load.\n";
					return -1;
				}

				Misaki.texture.setSmooth(true);
				Misaki.sprite.setTexture(Misaki.texture);
				rootWindow.draw(Misaki.sprite);

				Misaki.text.setFont(font);
				Misaki.text.setString("Misaki's case");
				Misaki.text.setPosition(0.f, 125.f);
				rootWindow.draw(Misaki.text);

				rootWindow.display();
				while (1)
				{
					if (soundonce == false)
					{
						soundonce = true;
						if (!Misaki.buffer.loadFromFile("audio/misaki.ogg"))
						{
							std::cout << "\nERROR: Misaki's sound buffer didn't load.\n";
							return -1;
						}
						Misaki.sound.setBuffer(Misaki.buffer);
						Misaki.sound.play();
						sf::sleep(Misaki.buffer.getDuration());
					}
					else
						break;
				}
				break;
			case 3:
				rootWindow.clear(sf::Color::Black);

				if (!Mashiro.texture.loadFromFile("sprites/mashiro.png", sf::IntRect(-100, -100, 128, 128)))
				{
					std::cout << "\nERROR: Mashiro's texture didn't load.\n";
					return -1;
				}

				Mashiro.texture.setSmooth(true);
				Mashiro.sprite.setTexture(Mashiro.texture);
				rootWindow.draw(Mashiro.sprite);

				Mashiro.text.setFont(font);
				Mashiro.text.setString("Mashiro's case");
				Mashiro.text.setPosition(0.f, 125.f);
				rootWindow.draw(Mashiro.text);

				rootWindow.display();
				while (1)
				{
					if (soundonce == false)
					{
						soundonce = true;
						if (!Mashiro.buffer.loadFromFile("audio/mashiro.ogg"))
						{
							std::cout << "\nERROR: Mashiro's sound buffer didn't load.\n";
							return -1;
						}
						Mashiro.sound.setBuffer(Mashiro.buffer);
						Mashiro.sound.play();
						sf::sleep(Mashiro.buffer.getDuration());
					}
					else
						break;
				}
				break;
			case 4:
				rootWindow.clear(sf::Color::Black);

				if (!Rika.texture.loadFromFile("sprites/rika.png", sf::IntRect(-100, -100, 128, 128)))
				{
					std::cout << "\nERROR: Rika's texture didn't load.\n";
					return -1;
				}

				Rika.texture.setSmooth(true);
				Rika.sprite.setTexture(Rika.texture);
				rootWindow.draw(Rika.sprite);

				Rika.text.setFont(font);
				Rika.text.setString("Rika's case");
				Rika.text.setPosition(0.f, 125.f);
				rootWindow.draw(Rika.text);

				rootWindow.display();
				while (1)
				{
					if (soundonce == false)
					{
						soundonce = true;
						if (!Rika.buffer.loadFromFile("audio/rika.ogg"))
						{
							std::cout << "\nERROR: Rika's sound buffer didn't load.\n";
							return -1;
						}
						Rika.sound.setBuffer(Rika.buffer);
						Rika.sound.play();
						sf::sleep(Rika.buffer.getDuration());
					}
					else
						break;
				}
				break;
		}
	}
	return 0;
}