 q = p / pow(26, a);
    r = p % int(pow(26, a));

    for (int i = a + 1; i < k; i++)
    {
        s += 'a';
    }
    s += (97 + q);
    for (int i = a - 1; i >= 0; i--)
    {
        q = r / pow(26, i);
        r = r % int(pow(26, i));
        s += (97 + q);
    }
    cout << s << "\n";