#ifndef PLAYER_H
#define PLAYER_H
#include "vector.h"

class Player{
public:
    //constructor
    Player();
    //deconstructor
    ~Player();

    //getter functions
    Vector *getPassingHand();
    int getScore();
    int getPuddingCount();
    Vector *getRevealedCards();

    //Hand manager functions
    void addCard(Card *card);

    //print functions
    void print();


private:
    Vector *passingHand;
    Vector *revealedCards;
    Vector* hand;
    int score;
    int puddingCount;
     
};

#endif
