//
//  ChutesAndLaddersGame.cpp
//

#include <iostream>
#include <string>

#include "ChutesAndLaddersGame.hpp"
#include "GameBoard.hpp"
#include "Player.hpp"

using namespace std;

// TODO: implement the constructor with all your team members
// constructor with the default value of a minimum players
ChutesAndLaddersGame::ChutesAndLaddersGame(int nPlayers) : winner("no winner") {
    
    
    // TODO: implement this function properly
 //throw std::logic_error("not implemented yet");
}

ChutesAndLaddersGame::ChutesAndLaddersGame(const ChutesAndLaddersGame& ob){
   
    
    chuteLadder = new ChutesAndLaddersGame;
    chuteLadder = ob.chuteLadder;
  
    
}
// TODO: implement the destructor
// destructor - dequeue players from the queue
ChutesAndLaddersGame::~ChutesAndLaddersGame() {
    //arrPtr->dequeue();
    delete playPtr;
    
   // TODO: implement this function properly
  // throw std::logic_error("not implemented yet");
}

// TO DO: implement this function properly
// reset the game - rebuild the list of players
//        (i.e., the list should be the same as in the constructor).
//        Place all players at the figurative square zero
void ChutesAndLaddersGame::resetGame() {
   // TODO: implement this function properly
  // throw std::logic_error("not implemented yet");
}

// TO DO: implement this function properly
// Play the chutes and ladders until a player reaches the winning square 100
//    - Each player takes turn to roll the die and moves to the new square by invoking rollDieAndMove.
//         If the new square is outside of the board, the player stays put
//    - Player's new position is checked against the game board's checkChutesLadders
//    - checkChutesLadders returns a different square if player lands on a chute or a ladder
//    - Player's position is then set to the new position as indicated by checkChutesLadders
//          If player lands on a chute or a ladder, player slides down or climbs up
//    - If player lands on the winning square 100, game is over
//    - playGame returns after congratulating and printing the winner's name
void ChutesAndLaddersGame::playGame() {
    playPtr = new Player("Ryan");
    playerQueue.enqueue(*playPtr);
    

    while (winner == "no winner"){
        
    
        try {
            playerQueue.enqueue(*playPtr);
            
            quePlayer = playerQueue.front();
            gameBoard.checkChutesLadders(quePlayer.rollDieAndMove());
            curPosition = gameBoard.checkChutesLadders(quePlayer.rollDieAndMove());
            
            
            playPtr->setPostion(curPosition);
            
            playerQueue.dequeue();
            if (quePlayer.getPostion() == 100){
                cout << quePlayer.getName() << " is the winner winner chicken dinner";
                winner = "winner";
                break;
            }

        } catch (range_error) {
            cout << "input position is outside of the game board" <<endl;
        }
        
    
    
    cout << "hello" << endl;
        
        while (playerQueue.empty()){
            playerQueue.dequeue();
        }
        
    
   
    }
       // TODO: implement this function properly
//   throw std::logic_error("not implemented yet");
   
}

