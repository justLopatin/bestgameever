#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);

    sf::Font font;
    
    if (!font.loadFromFile("C:/Windows/Fonts/arial.ttf"))
    {
        return EXIT_FAILURE;
    }

    sf::Text text;

    text.setFont(font);
    text.setString("Hello, World in SFML!");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Green);
    text.setStyle(sf::Text::Bold);

    

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(text);
        window.display();
    }
}