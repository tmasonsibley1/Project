/*
 * game.cpp
 * CS11 Sushi Go
 */

#include "game.h"
#include "player.h"
#include "card.h"

//constructor
Game::Game(string filename, string play_chopsticks){
    //include chopsticks or not
    if(play_chopsticks == "true"){
        this->play_chopsticks = true;
    }else{
        this->play_chopsticks = false;
    }  

    /*-----------------------------------------------*/
    /*   TODO (Part I): FINISH SETTING UP THE GAME   */
    /*                                               */
    /*   Read from the input file to initialize the  */
    /*   deck.                                       */
    /*-----------------------------------------------*/ 
    ifstream file(filename);
    file.ignore(1000, '\n');
    string type;
    while (file >> type) {
        int maki_count = -1;
        if (type == "Maki"){
            file >> maki_count;
        }
        this->deck.push_back(new Card(type, maki_count));
        //cout << "added card: " << type << " " << maki_count << endl;
    }
}

//main game loop
void Game::playGame(){
    int card_index;
    string play_on;

    //play three rounds
    for (int round = 0; round < ROUNDS; round++) {
        for (int player = 0; player < PLAYER_COUNT; player++) {
        // Deal 9 cards to each player
            for (int i = 0; i < 9; i++) {
                Card* card = deck.front();
                deck.pop_back();
                players[player].addCard(card);
            }
        }

        

        for (int card = 0; card < CARD_HAND; card++) {
            for (int player = 0; player < PLAYER_COUNT; player++) {
                cout << "Drawing board for player: " << player << endl;
                board.drawBoard(players, player);  // Pass the array and current player's index

          cout << " Player " << player + 1 << ", select a card: ";
          cin >> card_index;
          if (!cin) {  // bail out of game if they enter a non-number
            cerr << " INVALID INPUT: No game for you!\n";
            exit(EXIT_FAILURE);
          }

          /*   TODO (Part I): Set aside selected card      */
        }
        /*   TODO (Part I): Reveal selected cards            */
        /*   TODO (Part I): Pass deck to the right           */
      }

      break;
      /*   TODO (Part II): Remove the above break statement    */
      /*   TODO (Part II): Update Scores                       */
      /*   TODO (Part II): Call board.drawScore(players);      */
      /*   TODO (Part II): Prompt to go on to next round
      if(round < 2){
          cout << " End of round! Ready for Round "
               << round + 2 << " ? (y/n): ";
          cin >> play_on;
          if(play_on != "y"){
              break;
          }
      }                                                        */

      /*   TODO (Part II): Reset for next round                */
    }

    /*   TODO (Part II): Score pudding and determine winner      */
    /*   TODO (Part II): Call board.drawWinner(players, winner); */
}

//destructor
Game::~Game(){
    /*-----------------------------------------------*/
    /*   TODO (Parts I and II): CLEAN UP THE GAME    */
    /*                                               */
    /*   Make sure you are passing valgrind.         */
    /*-----------------------------------------------*/ 
}

