/*给一个数字的每个位数都取反 -321 => -123  247=>742*/

int reverse(int x) {
    int sign = x & 0x80000000 ;// the higgest bit;
    int revs = 0, remainder;

    if (sign) {
        x -= sign;//mod value
        if (!x) //overflow check: no zero
            return 0;

        x = ~x;
        x &= 0x7fffffff;
        x++;
    }

    while (x) {
        remainder = x % 10;
        if (revs > (0x7fffffff/10)) //overflow check
            return  0;
        revs = revs * 10 + remainder;
        x /= 10;
    }

    if (sign) {
        revs = ~revs;
        revs &= 0x7fffffff;
        revs += 1;
        revs += sign;
    }

    return revs;
}
