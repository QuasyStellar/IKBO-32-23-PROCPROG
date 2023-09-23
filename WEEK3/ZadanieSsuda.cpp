long double S2, n2, p2, r2, m2, m0;
        cout << "Введите положительные S, n, m0" << endl;
        cin >> S2 >> n2 >> m0;
        p2 = 0.05;
        m2 = 0;
        if ((S2 > 0) && (n2 > 0) && (m0 > 0)) 
        {
            while (abs((m2 - m0) < 1))
            {
                r2 = p2 / 100;
                m2 = (S2 * r2 * pow((1 + r2), n2) / (12 * (pow((1 + r2), n2) - 1)));
                p2 += 0.05;
            }
            if (p2 > 100)
                cout << "Нет решений в диапазоне p(1-100)" << endl;
            else
                cout << "P = " << p2 << endl;
        }
    
