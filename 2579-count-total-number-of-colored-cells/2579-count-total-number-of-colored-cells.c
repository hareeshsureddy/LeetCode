long long coloredCells(int n) {
    long long coloredCells=1;
    for(int i=1;i<n;i++){
        coloredCells+=i*4;
    }
    return coloredCells;
}