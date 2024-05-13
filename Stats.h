/*
Stats.h
Diego
A class that cointains all the stats for each entity
5/13/24
*/
#ifndef STATS_H
#define STATS_H


class Stats {

protected:
    int strength = 1;
    int intelligence = 1;
    int speed = 1;
    int maxHealth = 10;
    int maxMana = 10;


public:
    Stats();

    Stats(int st, int in, int sp, int maxHP, int maxMA);

//getters
    int getSt() { return strength; }

    int getIn() { return intelligence; }

    int getSp() { return speed; }

    int getMaxHP() { return maxHealth; }

    int getMaxMA() { return maxMana; }

//setters
    int setSt(int newSt) { strength = newSt; }

    int setIn(int newIn) { intelligence = newIn; }

    int setSp(int newSp) { speed = newSp; }

    int setHp(int newMH) { maxHealth = newMH; }

    int setMp(int newMM) { maxMana = newMM; }

};


#endif