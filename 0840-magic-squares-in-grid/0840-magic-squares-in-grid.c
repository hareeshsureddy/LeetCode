int numMagicSquaresInside(int** grid, int gridSize, int* gridColSize) {
    int numMagicSquaresInside=0;
    for (int i = 0; i <= gridSize - 3; i++) {
        for (int j = 0; j <= *gridColSize - 3; j++) {
            bool map[10] = {false};
            bool status = false;
            for (int r = i; r < i + 3; r++) {
                int rowSum = 0;
                for (int c = j; c < j + 3; c++) {
                    int num = grid[r][c];
                    if (num >= 1 && num <= 9 && !map[num]) {
                        map[num] = true;
                        rowSum += num;
                    } else {
                        status = true;
                        break;
                    }
                }
                if (status)
                    break;
                if (rowSum != 15){
                    status=true;
                    break;
                }
            }
            if (!status) {
                for (int c = j; c < j + 3; c++) {
                    int colSum = 0;
                    for (int r= i; r< i + 3; r++) {
                        colSum+=grid[r][c];
                    }
                   if (colSum != 15){
                    status=true;
                    break;
                   } 
                }
            }
             if (!status) {
                if((grid[i][j]+ grid[i+1][j+1]+ grid[i+2][j+2])==15){
                     if((grid[i][j+2]+ grid[i+1][j+1]+ grid[i+2][j])==15){
                            numMagicSquaresInside++;
                     }
                }
             }
        }
    }
    return numMagicSquaresInside;
}