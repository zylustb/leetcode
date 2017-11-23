/*判断一个整形数是不是回文，负数都不是*/

bool isPalindrome(int x) {

    if(x < 0)
        return false;
    int a[10], i=0, j;

    while(x) {
        a[i++] = x % 10;
        x /= 10;
    }

    //位数：i位，第i位没有，第i-1位开始
    for (j = 0; j < i/2; j++) {
        if (a[j] != a[i-1-j])
            return false;
    }

    return true;
}
