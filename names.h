#ifndef NAMES_H
#define NAMES_H

#include "politics.h"

namespace Names {

static const int MAXRESOURCES = 13;
static const char* SpecialResourceNames[MAXRESOURCES] = {
                                                                "Nothing special",
                                                                "Mineral rich",
                                                                "Mineral poor",
                                                                "Desert",
                                                                "Sweetwater oceans",
                                                                "Rich soil",
                                                                "Poor soil",
                                                                "Rich fauna",
                                                                "Lifeless",
                                                                "Weird mushrooms",
                                                                "Special herbs",
                                                                "Artistic populace",
                                                                "Warlike populace"
                                                        };

static const int MAXACTIVITY = 8;
static const char* Activity[MAXACTIVITY] = {
                                              "Absent",
                                              "Minimal",
                                              "Few",
                                              "Some",
                                              "Moderate",
                                              "Many",
                                              "Abundant",
                                              "Swarms"
                                           };
;
static const int MAXSIZE = 4;
static const char* SystemSize[MAXSIZE] = {
        "Tiny",
        "Small",
        "Medium",
        "Large",
        "Huge"
};


static const int MAXTECHLEVEL = 8;
static const char* TechLevelNames[MAXTECHLEVEL] = {
    "Pre-agricultural",
    "Agricultural",
    "Medieval",
    "Renaissance",
    "Early Industrial",
    "Industrial",
    "Post-industrial",
    "Hi-tech"
};


static const int MAXPOLITICS = 17;
static const Politics PoliticTypes[MAXPOLITICS] = {
    { "Anarchy",          0, 0, 7, 1, 0, 5, 7, true,  true,  FOOD },
    { "Capitalist State", 2, 3, 2, 7, 4, 7, 1, true,  true,  ORE },
    { "Communist State",  6, 6, 4, 4, 1, 5, 5, true,  true,  -1 },
    { "Confederacy",      5, 4, 3, 5, 1, 6, 3, true,  true,  GAMES },
    { "Corporate State",  2, 6, 2, 7, 4, 7, 2, true,  true,  ROBOTS },
    { "Cybernetic State", 0, 7, 7, 5, 6, 7, 0, false, false, ORE },
    { "Democracy",        4, 3, 2, 5, 3, 7, 2, true,  true,  GAMES },
    { "Dictatorship",     3, 4, 5, 3, 0, 7, 2, true,  true,  -1 },
    { "Fascist State",    7, 7, 7, 1, 4, 7, 0, false, true,  MACHINERY },
    { "Feudal State",     1, 1, 6, 2, 0, 3, 6, true,  true,  FIREARMS },
    { "Military State",   7, 7, 0, 6, 2, 7, 0, false, true,  ROBOTS },
    { "Monarchy",         3, 4, 3, 4, 0, 5, 4, true,  true,  MEDICINE },
    { "Pacifist State",   7, 2, 1, 5, 0, 3, 1, true,  false, -1 },
    { "Socialist State",  4, 2, 5, 3, 0, 5, 6, true,  true,  -1 },
    { "State of Satori",  0, 1, 1, 1, 0, 1, 0, false, false, -1 },
    { "Technocracy",      1, 6, 3, 6, 4, 7, 2, true,  true,  WATER },
    { "Theocracy",        5, 6, 1, 4, 0, 4, 0, true,  true,  NARCOTICS }
};

static const int MAXSOLARSYSTEM = 120;
static const char* SolarSystemName[MAXSOLARSYSTEM] = {
                                                         "Acamar",
                                                         "Adahn",		// The alternate personality for The Nameless One in "Planescape: Torment"
                                                         "Aldea",
                                                         "Andevian",
                                                         "Antedi",
                                                         "Balosnee",
                                                         "Baratas",
                                                         "Brax",			// One of the heroes in Master of Magic
                                                         "Bretel",		// This is a Dutch device for keeping your pants up.
                                                         "Calondia",
                                                         "Campor",
                                                         "Capelle",		// The city I lived in while programming this game
                                                         "Carzon",
                                                         "Castor",		// A Greek demi-god
                                                         "Cestus",
                                                         "Cheron",
                                                         "Courteney",	// After Courteney Cox...
                                                         "Daled",
                                                         "Damast",
                                                         "Davlos",
                                                         "Deneb",
                                                         "Deneva",
                                                         "Devidia",
                                                         "Draylon",
                                                         "Drema",
                                                         "Endor",
                                                         "Esmee",		// One of the witches in Pratchett's Discworld
                                                         "Exo",
                                                         "Ferris",		// Iron
                                                         "Festen",		// A great Scandinavian movie
                                                         "Fourmi",		// An ant, in French
                                                         "Frolix",		// A solar system in one of Philip K. Dick's novels
                                                         "Gemulon",
                                                         "Guinifer",		// One way of writing the name of king Arthur's wife
                                                         "Hades",		// The underworld
                                                         "Hamlet",		// From Shakespeare
                                                         "Helena",		// Of Troy
                                                         "Hulst",		// A Dutch plant
                                                         "Iodine",		// An element
                                                         "Iralius",
                                                         "Janus",		// A seldom encountered Dutch boy's name
                                                         "Japori",
                                                         "Jarada",
                                                         "Jason",		// A Greek hero
                                                         "Kaylon",
                                                         "Khefka",
                                                         "Kira",			// My dog's name
                                                         "Klaatu",		// From a classic SF movie
                                                         "Klaestron",
                                                         "Korma",		// An Indian sauce
                                                         "Kravat",		// Interesting spelling of the French word for "tie"
                                                         "Krios",
                                                         "Laertes",		// A king in a Greek tragedy
                                                         "Largo",
                                                         "Lave",			// The starting system in Elite
                                                         "Ligon",
                                                         "Lowry",		// The name of the "hero" in Terry Gilliam's "Brazil"
                                                         "Magrat",		// The second of the witches in Pratchett's Discworld
                                                         "Malcoria",
                                                         "Melina",
                                                         "Mentar",		// The Psilon home system in Master of Orion
                                                         "Merik",
                                                         "Mintaka",
                                                         "Montor",		// A city in Ultima III and Ultima VII part 2
                                                         "Mordan",
                                                         "Myrthe",		// The name of my daughter
                                                         "Nelvana",
                                                         "Nix",			// An interesting spelling of a word meaning "nothing" in Dutch
                                                         "Nyle",			// An interesting spelling of the great river
                                                         "Odet",
                                                         "Og",			// The last of the witches in Pratchett's Discworld
                                                         "Omega",		// The end of it all
                                                         "Omphalos",		// Greek for navel
                                                         "Orias",
                                                         "Othello",		// From Shakespeare
                                                         "Parade",		// This word means the same in Dutch and in English
                                                         "Penthara",
                                                         "Picard",		// The enigmatic captain from ST:TNG
                                                         "Pollux",		// Brother of Castor
                                                         "Quator",
                                                         "Rakhar",
                                                         "Ran",			// A film by Akira Kurosawa
                                                         "Regulas",
                                                         "Relva",
                                                         "Rhymus",
                                                         "Rochani",
                                                         "Rubicum",		// The river Ceasar crossed to get into Rome
                                                         "Rutia",
                                                         "Sarpeidon",
                                                         "Sefalla",
                                                         "Seltrice",
                                                         "Sigma",
                                                         "Sol",			// That's our own solar system
                                                         "Somari",
                                                         "Stakoron",
                                                         "Styris",
                                                         "Talani",
                                                         "Tamus",
                                                         "Tantalos",		// A king from a Greek tragedy
                                                         "Tanuga",
                                                         "Tarchannen",
                                                         "Terosa",
                                                         "Thera",		// A seldom encountered Dutch girl's name
                                                         "Titan",		// The largest moon of Jupiter
                                                         "Torin",		// A hero from Master of Magic
                                                         "Triacus",
                                                         "Turkana",
                                                         "Tyrus",
                                                         "Umberlee",		// A god from AD&D, which has a prominent role in Baldur's Gate
                                                         "Utopia",		// The ultimate goal
                                                         "Vadera",
                                                         "Vagra",
                                                         "Vandor",
                                                         "Ventax",
                                                         "Xenon",
                                                         "Xerxes",		// A Greek hero
                                                         "Yew",			// A city which is in almost all of the Ultima games
                                                         "Yojimbo",		// A film by Akira Kurosawa
                                                         "Zalkon",
                                                         "Zuul"			// From the first Ghostbusters movie
                                                     };

}
#endif // NAMES_H
