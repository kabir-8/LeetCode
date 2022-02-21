class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Checking rows for duplicacy
        for r in board:
            tmp = [i for i in r if i != '.']
            if len(tmp) != len(set(tmp)):
                return False

        # Checking column for duplicacy
        for i in range(9):
            tmp = []
            for j in range(9):
                if board[j][i] != '.':
                    tmp.append(board[j][i])
            if len(tmp) != len(set(tmp)):
                return False

        # Checking each 3*3 box for duplicacy
        for i in (0, 3, 6):
            for j in (0, 3, 6):
                square = [board[x][y] for x in range(i, i + 3) for y in range(j, j + 3)]
                tmp = [i for i in square if i != '.']
                if len(tmp) != len(set(tmp)):
                    return False

        return True