//
// Created by ThinkPad on 2021-05-31.
//
#define ROW 3
#define COL 3

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//��������������Ϸ��״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'C'

char IsWin(char board[ROW][COL], int row, int col);


#endif //CLIONCODE_GAME_H
