#include "card.h"

const int TYPES_COUNT = 8;
const int MAKI_COUNT = 3;
const string TYPES[] = { "Maki", "Tempura", "Sashimi", "Dumpling",
                         "Nigiri" , "Wasabi", "Pudding", "Chopsticks" };
/*
 * Constructor: Option #1
 * When no arguments are specified, the type of the
 * card are randomly generated.
 */
/*Card::Card(){
   srand(time(0)); // Initialize the random number generator
   
   this->type = TYPES[rand() % TYPES_COUNT]; // give types a string based off the consts
    if(this->type == "Maki"){
        this->maki_count = rand() % maki_count;
    }
} */

/*
 * Constructor: Option #3
 * The card's suit and number are both specified.
 */
Card::Card(string type, int maki_count){
    if(type == "Maki" && (maki_count < 1 || MAKI_COUNT < maki_count)){
        cerr << "Error: Specified Maki_count out of range" << endl;
        cout << "test" << endl;
        exit(EXIT_FAILURE);
    }
    
    this->type = type;
    this->maki_count = maki_count;
}

// SushiType getter
string Card::getSushiType(){
    return type;
}

int Card::getMakiCount(){
    return maki_count;
}

