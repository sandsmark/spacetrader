#ifndef POLITICS_H
#define POLITICS_H

class Politics
{
public:
    char* name;
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

#endif // POLITICS_H
