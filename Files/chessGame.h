/*
    This header file contains th ChessGame class.
    contains the whole game.
*/

#ifndef _CHESSGAME_H
#define _CHESSGAME_H

#include <SFML/Graphics.hpp>
#include <array>
#include <iostream>
#include "board.h"
#include "piece.h"

class ChessGame: public sf::Drawable{
private:
    Board board;
    std::array<Piece, 16> whitePieces;
    std::array<Piece, 16> blackPieces;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:
    ChessGame(sf::Color bordCol1, sf::Color bordCol2);

    void checkPiecePos(int pos);

    //void restartGame(); TODO

    


};


#endif