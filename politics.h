#ifndef POLITICS_H
#define POLITICS_H

#include "starsystem.h"


class Politics
{
public:
    const char* name;
    char reactionIllegal;   // Reaction level of illegal goods 0 = total acceptance (determines how police reacts if they find you carry them)
    char strengthPolice;    // Strength level of police force 0 = no police (determines occurrence rate)
    char strengthPirates;   // Strength level of pirates 0 = no pirates
    char strengthTraders;   // Strength levcel of traders 0 = no traders
    char minTechLevel;      // Mininum tech level needed
    char maxTechLevel;      // Maximum tech level where this is found
    char bribeLevel;        // Indicates how easily someone can be bribed 0 = unbribeable/high bribe costs
    bool drugsOK;           // Drugs can be traded (if not, people aren't interested or the governemnt is too strict)
    bool firearmsOK;        // Firearms can be traded (if not, people aren't interested or the governemnt is too strict)
    int wanted;             // Tradeitem requested in particular in this type of government
};

static const int MAXPOLITICS = 17;
static const Politics PoliticTypes[MAXPOLITICS] = {
    { "Anarchy",          0, 0, 7, 1, 0, 5, 7, true,  true,  StarSystem::FOOD },
    { "Capitalist State", 2, 3, 2, 7, 4, 7, 1, true,  true,  StarSystem::ORE },
    { "Communist State",  6, 6, 4, 4, 1, 5, 5, true,  true,  -1 },
    { "Confederacy",      5, 4, 3, 5, 1, 6, 3, true,  true,  StarSystem::GAMES },
    { "Corporate State",  2, 6, 2, 7, 4, 7, 2, true,  true,  StarSystem::ROBOTS },
    { "Cybernetic State", 0, 7, 7, 5, 6, 7, 0, false, false, StarSystem::ORE },
    { "Democracy",        4, 3, 2, 5, 3, 7, 2, true,  true,  StarSystem::GAMES },
    { "Dictatorship",     3, 4, 5, 3, 0, 7, 2, true,  true,  -1 },
    { "Fascist State",    7, 7, 7, 1, 4, 7, 0, false, true,  StarSystem::MACHINERY },
    { "Feudal State",     1, 1, 6, 2, 0, 3, 6, true,  true,  StarSystem::FIREARMS },
    { "Military State",   7, 7, 0, 6, 2, 7, 0, false, true,  StarSystem::ROBOTS },
    { "Monarchy",         3, 4, 3, 4, 0, 5, 4, true,  true,  StarSystem::MEDICINE },
    { "Pacifist State",   7, 2, 1, 5, 0, 3, 1, true,  false, -1 },
    { "Socialist State",  4, 2, 5, 3, 0, 5, 6, true,  true,  -1 },
    { "State of Satori",  0, 1, 1, 1, 0, 1, 0, false, false, -1 },
    { "Technocracy",      1, 6, 3, 6, 4, 7, 2, true,  true,  StarSystem::WATER },
    { "Theocracy",        5, 6, 1, 4, 0, 4, 0, true,  true,  StarSystem::NARCOTICS }
};

#endif // POLITICS_H
