#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include <ctime> 
#include "termfuncs.h"

using namespace std;

class Card {
public:
    // Constructors
    Card(string type, int maki_count); 
    
    // Getters
    int getMakiCount();
    string getSushiType();
    
    // Setters
    void setType(string suit_str);
    void setMakiCount(string num_str);
    
    // Print function
    
private:
    int maki_count;
    string type;
};

#endif
