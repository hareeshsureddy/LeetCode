bool checkStraightLine(int** coordinates, int coordinatesSize,
                       int* coordinatesColSize) {
    int x = coordinates[1][0] - coordinates[0][0];
    int y = coordinates[1][1] - coordinates[0][1];
    for (int i = 2; i < coordinatesSize; i++) {
        int dx = coordinates[i][0] - coordinates[0][0];
        int dy = coordinates[i][1] - coordinates[0][1];
        if (y * dx != x * dy)
            return false;
    }
    return true;
}