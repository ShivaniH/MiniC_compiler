// Note: This program does not do anything meaningful, it was just used for testing while writing the parser rules.

ulong someVariable, another_variabl3[7], _9MoreVariablE;
char truth[8][3];

int someFunc()
{
    char a, b[15];

    a = 'p';
    strcpy(b, "testString");
    strcpy(b, "");

    uint val, val2;

    val2 = -5;
    val = 8;
    val2 += val;

    b[5] = b[4] % 3;
    
    someVariable = 5;

    while(someVariable <= 15) {
        callout("printf", "val2 = %d", val2);
        someVariable += 1;
    }
    
    for(someVariable = 0; someVariable % 10 + !4 <= 8; someVariable += 1 )
    {
        val = 2 ^ val2 ^ 3;
    }

    return 0;
}

long anotherFunc(int x, char y, bool flag)
{
    1 - someFunc() % 5 * 0 + 4 - -11;

    2 * 7 / 7 * 11 % 10 * -12 + 10 * -4 - 8;

    ulong arr[5][4];

    arr[3][1] = 7 * var45 - 9 - _an0th3r_VAR / -2 + -3 * oneMoreVariable;     // Test comment

    bool boolX;

    boolX = z && 55 || !0;
    
    if(flag)
    {
        -5 * (11 + -11) * 8;
    }
    else {
        -7 * 6 < -42 * -foobar * -2 == 650 >= 54 + 92;
    }

    return 5;
}
