bool isPowerOfFour(int n) {
    if(n<1) return false;
    return ((!(n&(n-1))) && (n&0x55555555));
  /*  if((n&(n-1))) return false;
    else
    if(n&0x55555555) return true;
    else
    return false;*/
}