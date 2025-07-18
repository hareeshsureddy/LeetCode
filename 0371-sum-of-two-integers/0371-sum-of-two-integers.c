int getSum(int a, int b) {
    //return a+b;
    uint32_t bit_a=0,bit_b=0,carry=0;
    uint32_t curr_bit=0,res=0;
    for(uint32_t i=0;i<32;i++){
        bit_a=(a>>i)&1;
        bit_b=(b>>i)&1;
        curr_bit=bit_a^bit_b^carry;
        carry=((bit_a+bit_b+carry)>=2)?1:0;
        if(curr_bit)
        res|=(uint32_t)(1u<<i);
    }
    return (int)res;
    /*
        while (b != 0) {
           uint32_t carry = (uint32_t)(a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
        */
}