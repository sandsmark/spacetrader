#ifndef STARSYSTEM_H
#define STARSYSTEM_H

class StarSystem
{
public:
    StarSystem();

    enum TradeItems {
        WATER,
        FURS,
        FOOD,
        ORE,
        GAMES,
        FIREARMS,
        MEDICINE,
        MACHINERY,
        NARCOTICS,
        ROBOTS,
        MAXTRADEITEM
    };
};

#endif // STARSYSTEM_H
