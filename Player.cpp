//
//  Player.cpp
//

#include "Player.hpp"

// TO DO: implement Player's assignment operator
Player& Player::operator=(const Player& p) {
   
        
    
   /// ptr = new int;
    //*ptr = getDie().getFaceValue();

   setName(p.playerName);
   setPostion(p.position);
   die = p.die;
   // position = p.getPostion();

    //playerName = p.getName();
    


    // TODO: implement this function properly
    return *this;
   // throw std::logic_error("not implemented yet");
}

// return player's new position after player rolls die
// If the new position is outside of the board, player stays put
// If not, player moves to the new square = player's postion + die's face value
// TO DO: implement this function to move player to the new postion
//        after player rolls die. Position must be inside the board
int Player::rollDieAndMove() {
    
    die = getDie();
    die.roll();
    position = getPostion();
    
    if (position + die.getFaceValue() > 100){
        return position;
    }
    else
        return position + die.getFaceValue();
    
    
    
    // TODO: implement this function properly
  // throw std::logic_error("not implemented yet");
}
