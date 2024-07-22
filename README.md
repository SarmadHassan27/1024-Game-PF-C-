1024 Game C++

Overview
The 1024 Game is a simple sliding puzzle game where the objective is to combine tiles with the same number to form the tile with the number 1024. The game is played on a 4x4 grid and uses the keys 'w', 'a', 's', 'd' for movement.

How to Play
1.	The game starts with one tile on a 4x4 board.
2.	Use the following keys to move the tiles:
o	'w' to move up
o	'a' to move left
o	's' to move down
o	'd' to move right

3.	When two tiles with the same number touch, they merge into one tile with double the value.
4.	After each move, a new tile with a value of 2 or 4 is added to a random empty position on the board.
5.	The game is won when a tile with the number 1024 is created.
6.	The game is lost when no moves are possible, i.e., the board is full, and no adjacent tiles can be merged.

Controls
•	w - Move tiles up
•	a - Move tiles left
•	s - Move tiles down
•	d - Move tiles right

Code Structure
•	initBoard(): Initializes the board with one random tile.
•	printBoard(): Prints the current state of the board.
•	moveLeft(): Moves tiles left and merges them if possible. Similar functions should be implemented for moveRight(), moveUp(), and moveDown().
•	addRandomTile(): Adds a new tile with a value of 2 or 4 at a random empty position on the board.
•	gameWon(): Checks if a tile with the number 1024 exists on the board.
•	gameLost(): Checks if no more moves are possible.
