#include <iostream>

using namespace std;

int main()
{
    /*
    int a{ 5 };
    int b{ 7 };
    
    bool f;

    f = (a == b);
    f = (a != b);

    int start = 8;
    int end = 20;

    int breakStart = 13;
    int breakEnd = 15;

    int time;
    cout << "input time: ";
    cin >> time;
    
    cout << ((time >= start) && (time < breakEnd) ||
        (time >= breakStart) && (time < end));

    cout << ((time >= start) && (time < end) &&
        !((time >= breakStart) && (time < breakEnd)));
    
    int var;

    if ((time >= start) && (time < breakEnd) ||
        (time >= breakStart) && (time < end))
    {
        var = 100;
        cout << "You luck!\n";
    }
    else
    {
        var = 0;
        cout << "You loos!\n";
    }
    */

    /*
    double a, b, c;
    cout << "input a, b, c: ";
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if (d > 0)
    {
        cout << "x1 = " << (-b + sqrt(d)) / 2 / a << "\n";
        cout << "x2 = " << (-b - sqrt(d)) / 2 / a << "\n";
    }
    else
    {
        if (d == 0)
            cout << "x = " << -b / 2 / a << "\n";
        else
            cout << "not roots\n";
    }

    if (d >= 0)
    {
        if (d > 0)
        {
            cout << "x1 = " << (-b + sqrt(d)) / 2 / a << "\n";
            cout << "x2 = " << (-b - sqrt(d)) / 2 / a << "\n";
        }
        else
            cout << "x = " << -b / 2 / a << "\n";
    }
    else
        cout << "not roots\n";
    */

    /*
    int day;
    cout << "input number day of week: ";
    cin >> day;

    if (day == 1)
        cout << "monday\n";
    else if(day == 2)
        cout << "tuesday\n";
    else if (day == 3)
        cout << "wednesday\n";
    else if (day == 4)
        cout << "thursday\n";
    else if (day == 5)
        cout << "friday\n";
    else if (day == 6)
        cout << "saturday\n";
    else if (day == 7)
        cout << "sunday\n";
    else
        cout << "wrong number of day\n";

    cout << "\n";

    int a;
    switch (day)
    {
    case 1:
        cout << "monday\n"; 
        a = 10; 
        break;
    case 2: 
        cout << "tuesday\n"; 
        break;
    case 3: cout << "wednesday\n"; break;
    case 4: cout << "thursday\n"; break;
    case 5: cout << "friday\n"; break;
    case 6: cout << "saturday\n"; break;
    case 7: cout << "sunday\n"; break;
    default: cout << "wrong number of day\n";
    }
    
    cout << "\n";

    switch (day)
    {
    case 1: 
    case 2: 
    case 3: 
    case 4: 
    case 5: 
        cout << "weekday\n"; 
        break;
    case 6: 
    case 7: cout << "holyday\n"; break;
    default: cout << "wrong number of day\n";
    }
    */

    /*
    int a, b;
    char sign;
    cout << "input operands a, b: ";
    cin >> a >> b;
    cout << "input sign of operation (+, -, *, /): ";
    cin >> sign;


    cout << a << " " << sign << " " << b << " = ";
    switch (sign)
    {
    case '+': cout << a + b << "\n"; break;
    case '-': cout << a - b << "\n"; break;
    case '*': cout << a * b << "\n"; break;
    case '/': cout << (float)a / b << "\n"; break;
    default:
        break;
    }
    */

    int a;
    cout << "input a: ";
    cin >> a;

    cout << "number " << a << " is ";
    if (a % 2)
        cout << "odd\n";
    else
        cout << "even\n";
    
    cout << "\n";

    (a % 2) ? cout << "number " << a << " is odd\n" 
        : cout << "number " << a << " is even\n";

    cout << "\n";

    cout << "number " << a << " is " 
            << ((a % 2) ? "odd" : "even");

}
