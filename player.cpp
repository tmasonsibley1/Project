#include "player.h"
#include "vector.h"

int const PLAYER_COUNT = 3;

Player::Player(){
    hand = new Vector();
    passingHand = new Vector();\
    revealedCards = new Vector();
    score = 0;
    puddingCount = 0;

}

Player::~Player(){
    delete hand;
    delete passingHand;
    delete revealedCards;
}

Vector *Player::getPassingHand(){
    return passingHand;
}

Vector *Player::getRevealedCards(){
    return revealedCards;
}

int Player::getPuddingCount(){
    return puddingCount;
}

int Player::getScore(){
    return score;
}

void Player::addCard(Card* card){
    if(!hand){
        hand = new Vector();
    }
    hand->push_back(card);//use vector function to add the card
                          //to the back of the deck
}



