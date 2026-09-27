#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b;
    cout<<"cu26250157\nKrish Choudhary\n";

    do
    {
        cout << "\nSCIENTIFIC CALCULATOR\n";
        cout << "1.  Addition\n";
        cout << "2.  Subtraction\n";
        cout << "3.  Multiplication\n";
        cout << "4.  Division\n";
        cout << "5.  Modulus\n";
        cout << "6.  Power\n";
        cout << "7.  Square\n";
        cout << "8.  Cube\n";
        cout << "9.  Square Root\n";
        cout << "10. Absolute Value\n";
        cout << "11. Sin\n";
        cout << "12. Cos\n";
        cout << "13. Tan\n";
        cout << "14. Cot\n";
        cout << "15. Sec\n";
        cout << "16. Cosec\n";
        cout << "0.  Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Addition = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Subtraction = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Multiplication = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if(b != 0)
                    cout << "Division = " << a / b << endl;
                else
                    cout << "Division by zero is not possible." << endl;
                break;

            case 5:
                int x, y;

                cout << "Enter two integers: ";
                cin >> x >> y;

                if(y != 0)
                    cout << "Modulus = " << x % y << endl;
                else
                    cout << "Modulus by zero is not possible." << endl;
                break;

            case 6:
                cout << "Enter base: ";
                cin >> a;

                cout << "Enter power: ";
                cin >> b;

                cout << "Power = " << pow(a, b) << endl;
                break;

            case 7:
                cout << "Enter a number: ";
                cin >> a;

                cout << "Square = " << a * a << endl;
                break;

            case 8:
                cout << "Enter a number: ";
                cin >> a;

                cout << "Cube = " << a * a * a << endl;
                break;

            case 9:
                cout << "Enter a number: ";
                cin >> a;

                if(a >= 0)
                    cout << "Square Root = " << sqrt(a) << endl;
                else
                    cout << "Invalid number." << endl;
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> a;

                cout << "Absolute Value = " << fabs(a) << endl;
                break;

            case 11:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;
                cout << "Sin = " << sin(a) << endl;
                break;

            case 12:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;
                cout << "Cos = " << cos(a) << endl;
                break;

            case 13:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;

                if(cos(a) != 0)
                    cout << "Tan = " << tan(a) << endl;
                else
                    cout << "Tan is not defined." << endl;
                break;

            case 14:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;

                if(sin(a) != 0)
                    cout << "Cot = " << 1 / tan(a) << endl;
                else
                    cout << "Cot is not defined." << endl;
                break;

            case 15:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;

                if(cos(a) != 0)
                    cout << "Sec = " << 1 / cos(a) << endl;
                else
                    cout << "Sec is not defined." << endl;
                break;

            case 16:
                cout << "Enter angle in degrees: ";
                cin >> a;

                a = a * 3.14159 / 180;

                if(sin(a) != 0)
                    cout << "Cosec = " << 1 / sin(a) << endl;
                else
                    cout << "Cosec is not defined." << endl;
                break;

            case 0:
                cout << "\nCalculator closed. Thank you!" << endl;
                break;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while(choice != 0);

    return 0;
}