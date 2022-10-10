#include <stdio.h>
#include <math.h>
float square_root_calculator(float n)
{
    float srn, sn, mn, bn, dd, i;
    srn = 0.0000;
    sn = 0.0000;
    mn = 0.0000;
    bn = n;
    while(sn<=bn)
    {
        mn = (sn+bn) / 2.0000;
        if((mn*mn)<n)
        {
            srn = mn;
            sn = mn + 1.0000;
        }
        else
        {
            bn = mn - 1.0000;
        }
        if((mn*mn)==n)
        {
            srn = mn;
            break;
        }
    }
    dd = 0.1000;
    for(i=1;i<=4;i++)
    {
        while((srn*srn)<=n)
        {
            srn += dd;
        }
        srn -= dd;
        dd /= 10;
    }
    return (srn);
}
float main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%.4f", &n);
    printf("Square Root of (%.4f) is (%.4f).", n, square_root_calculator(n));
}