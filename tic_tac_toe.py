from IPython.display import clear_output

def print_board(board):
        clear_output()
        print(board[1]+' '+'|'+board[2]+' '+'|'+board[3])
        print('---------')
        print(board[4]+' '+'|'+board[5]+' '+'|'+board[6])
        print('---------')
        print(board[7]+' '+'|'+board[8]+' '+'|'+board[9])