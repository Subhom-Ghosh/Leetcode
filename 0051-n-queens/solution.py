from typing import List
class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        def isSafe(row,col,board):
            #check column
            for i in range(n):
                if board[i][col]=='Q':
                    return False
            #check left diagonal
            i,j=row-1,col-1
            while i>=0 and j>=0:
                if board[i][j]=='Q':
                    return False
                i-=1
                j-=1
                #check right diagonal
            i,j=row-1,col+1
            while i>=0 and j<n:
                if board[i][j]=='Q':
                    return False
                i-=1
                j+=1
        
            return True
        def backtrack(row):
            if row==n:
                ans.append([''.join(r) for r in board])
                return 
            for col in range(n):
                if isSafe(row,col,board):
                    board[row][col]='Q'
                    backtrack(row+1)
                    board[row][col]='.'
        ans=[]
        board=[['.' for _ in range(n)] for _ in range(n)]
        backtrack(0)
        return ans
