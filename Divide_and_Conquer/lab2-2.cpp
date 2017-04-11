/* 在一个2^n * 2^n个方格组成的棋盘中若恰有一个方格与其他方格不同，则称该方格为一特殊方格，且该棋盘为一特殊棋盘（脏位）
 * 有4种不同形态的L型股牌：
 *			**		**		*		*
 *			*	   	 *		**	   **
 *		   (a)		(b)	    (c)	   (d)
 *
 * 用递归分治的策略可以设计棋盘覆盖问题*/


#include <iostream>
using namespace std;

int board[1025][1025];
int tile = 1;

//row col为棋盘左上角方格坐标 drow dcol为特殊方格坐标 size为行号
void ChessBoard(int row, int col, int drow, int dcol, int size){
	if(size == 1)
		return;

	int t = tile++;
	int s = size / 2;

//铺左上角
	if(drow < row + s && dcol < col + s)
		ChessBoard(row, col, drow, dcol, s);//递归下去直至找到脏位
	else{
		board[row + s - 1][col + s - 1] = t;//覆盖棋盘右下角
		ChessBoard(row, col, row + s -1, col + s - 1, s);//覆盖其余方格
	}

//铺右上角
	if(drow < row + s && dcol >= col + s)
		ChessBoard(row, col + s, drow, dcol, s);
	else{
		board[row + s - 1][col + s] = t;
		ChessBoard(row, col + s, row + s - 1, col + s, s);
	}

//铺左下角
	if(drow >= row + s && dcol < col + s)
		ChessBoard(row + s, col, drow, dcol, s);
	else{
		board[row + s][col + s - 1] = t;
		ChessBoard(row + s, col, row + s, col + s - 1, s);
	}

//右下角
	if(drow >= row + s && dcol >= col + s)
		ChessBoard(row + s, col + s, drow, dcol, s);
	else{
		board[row + s][col + s] = t;
		ChessBoard(row + s, col + s, row + s, col + s, s);
	}
}

int main(){
	int x, y;//图坐标
	int i, j;
	int n;
	while(cin >> n){
		tile = 1;
		cin >> x >> y;
		int size = 1 << n;
		board[x][y] = 0;
		ChessBoard(0, 0, x, y, size);
		for(i = 0; i < size; i++){
			for(j = 0; j < size; j++)
				cout << board[i][j] << "\t";
			cout << endl;
		}
	}
	return 0;
}

