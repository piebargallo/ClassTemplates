import game_board;

class ChessPiece
{
};

int main()
{
	GameBoard<ChessPiece> chessBoard{ 8, 8 };

	ChessPiece pawn;
	chessBoard.at(0, 0) = pawn;
	chessBoard.move(0, 0, 0, 1);

	return 0;
}