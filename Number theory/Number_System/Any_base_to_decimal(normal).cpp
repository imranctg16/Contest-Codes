ll convert(ll a, ll b)
{
    ll r = 0, c = 1;
    while(a > 0)
    {
        ll x = a % 10;
        if(x >= b)  /// special checking
            return -1;
        a /= 10;
        r += x * c;
        c *= b;
    }
    return r;
}
