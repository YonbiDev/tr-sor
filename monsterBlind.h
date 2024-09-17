#ifndef MONSTERBLIND_H
#define MONSTERBLIND_H

#include "monster.h"

class monsterBlind : public monster
{
    public:
        monsterBlind(int x,int y,int health,double pointForce,bool player,char symbol,int pourcentageHabilite);
        void chooseDirection(std::vector<std::pair<int, int>>& wallPositions,character* character = nullptr) override;


};

#endif // MONSTERBLIND_H
