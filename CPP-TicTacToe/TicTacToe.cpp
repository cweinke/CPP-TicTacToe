#include "TicTacToe.h"
#include <iostream>


char m_board[9];

int player = 0;

int TurnCount = 1;

bool TicTacToe::IsGameOver() const {


	if (m_board[0] == m_board[1] && m_board[1] == m_board[2]) {
		if (m_board[0] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[0] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[3] == m_board[4] && m_board[4] == m_board[5]) {
		if (m_board[3] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[3] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[6] == m_board[7] && m_board[7] == m_board[8]) {
		if (m_board[6] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[6] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[0] == m_board[3] && m_board[3] == m_board[6]) {
		if (m_board[0] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[0] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[1] == m_board[4] && m_board[4] == m_board[7]) {
		if (m_board[1] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[1] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[2] == m_board[5] && m_board[5] == m_board[8]) {
		if (m_board[2] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[2] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[0] == m_board[4] && m_board[4] == m_board[8]) {
		if (m_board[0] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[0] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}
	if (m_board[2] == m_board[4] && m_board[4] == m_board[6]) {
		if (m_board[2] == 'X') {
			std::cout << "Player 1 wins! ";
			return 1;
		}
		else if (m_board[2] == 'O') {
			std::cout << "Player 2 wins! ";
			return 1;
		}
		else {
			return 0;
		}
	}

	if (TurnCount > 10) {
		std::cout << "Tie.";
		return 1;
	}
}

void TicTacToe::TakeTurn() {
	int pos = 0;
	if (TurnCount == 1 || TurnCount == 3 || TurnCount == 5 || TurnCount == 7 || TurnCount == 9) {
		player = 1;
	}
	else {
		player = 2;
	};
	int i = 0;
	while (i == 0) {
		std::cout << "Player " << player << ", please select an unclaimed board position (1 - 9): ";
		std::cin >> pos;

		if (pos > 0 || pos < 10) {
			if (m_board[(pos - 1)] != 'X' && m_board[(pos - 1)] != 'O')
			{
				if (player == 1) {
					m_board[(pos - 1)] = 'X';
					i++;
				}
				else {
					m_board[(pos - 1)] = 'O';
					i++;
				}

			}
			else {
				std::cout << "That position is already taken.";
				i = 0;
			}
		}
		else {
			std::cout << "Please enter a valid position.";
			i = 0;
		}

	}

	TurnCount++;
}

void TicTacToe::Display() const {

	std::cout << m_board[0] << " | " << m_board[1] << " | " << m_board[2] << "\n";
	std::cout << m_board[3] << " | " << m_board[4] << " | " << m_board[5] << "\n";
	std::cout << m_board[6] << " | " << m_board[7] << " | " << m_board[8] << "\n";
}