        bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;//algorithm to find the no. of //columns in a matrix 0th row how many columns?
        while(row<=(matrix.size()-1)&&col>=0)//row size=matrix.size()
        {
            if(target==matrix[row][col])
            {
                return 1;
            }
            if(target>matrix[row][col])
            {
             row++;
            }
            else
            {
                col--;
            }
        }
        return 0;
    }
/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
matrix =      [[1,  4,   7,11,15],
              [2,   5,   8,12,19],
              [3,   6,   9,16,22],
              [10,13,14,17,24],
              [18,21,23,26,30]]*/
