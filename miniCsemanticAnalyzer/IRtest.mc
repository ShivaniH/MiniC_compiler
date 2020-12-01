char main(int arg1)
{
    int i, w, a;
    w = 1;
    a = w + 3;

    w = callout("scanInt");

    for(i = 0; i < 5; i += 1)
    {
        if(a > 5)
        {
            a = 5 + 1;

            callout("printf", "if: value of a = %d\n", a);

            break;
        }
        else {
            a = 7 * 2;

            callout("printf", "else: value of a = %d\n", a);
        }

        callout("printf", "for: value of a = %d\n", a);
    }

    w = a;

    callout("printf", "value of a = %d\n", a);

    return 'x';
}