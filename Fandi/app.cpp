/***************************************************************
* Normalize function takes care of three fraction invariants. *
***************************************************************/
void Fraction ::normalize()
{
    // Handling a denominator of zero
    if (denom == 0)
    {
        cout << "Invalid denomination. Need to quit." << endl;
        assert(false);
    }
    // Changing the sign of denominator
    if (denom < 0)
    {
        denom = − denom;
        numer = − numer;
    }
    // Dividing numerator and denominator by gcd
    int divisor = gcd(abs(numer), abs(denom));
    numer = numer / divisor;
    denom = denom / divisor;
}
/***************************************************************
* The gcd function finds the greatest common divisor between *
* the numerator and the denominator. *
***************************************************************/
int Fraction ::gcd(int n, int m)
{
    int gcd = 1;
    for (int k = 1; k <= n && k <= m; k++)
    {
        if (n % k == 0 && m % k == 0)
        {
            gcd = k;
        }
    }
    return gcd;
}