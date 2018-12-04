#define FG_LIGHT_RED 91
#define FG_LIGHT_GREEN 92
#define FG_LIGHT_BLUE 94
#define FG_LIGHT_YELLOW 93
#define FG_DEFAULT 39

std::string czerwony()
{
    return "\033[" + std::to_string(FG_LIGHT_RED) + "m";
}

std::string zolty()
{
    return "\033[" + std::to_string(FG_LIGHT_YELLOW) + "m";
}

std::string standardowy()
{
    return "\033[" + std::to_string(FG_DEFAULT) + "m";
}

std::string niebieski()
{
    return "\033[" + std::to_string(FG_LIGHT_BLUE) + "m";
}

std::string zielony()
{
    return "\033[" + std::to_string(FG_LIGHT_GREEN) + "m";
}

std::string podswietlenie(unsigned int tab) /* funkcja do podswietlania liczby produktow */
{
    if (tab != 0) {
        return zielony() + std::to_string(tab) + standardowy(); //Zamienia standardowy kolor na zielony kolor
    }
    else {
        return czerwony() + std::to_string(tab) + standardowy(); //Zamienia standardowy kolor na czerwony kolor
    }
}
