// Sheet 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//problem 1 
bool is_prime(int);

//problem 2
int factorial(int);

//problem 3
int Calculate(int, int);

//problem 4
int digits_count(long);

//problem 5
int digit_value(int, int);

//problem 6
int terms_number(double);

//problem 7
int terms_pi();

//problem 8 
char ToLower(char);
char ToUpper(char);

//problem 9 
int capital_letters();
//problem 10
double Z(int);

//problem 11
double S(int);

int main()
{
    int user_input1;
    int user_input2;
    double sum;

    cout << "Insert number: ";
    cin >> user_input1;
    cout << "Insert number: ";
    cin >> user_input2;
    cout << "Insert sum: ";
    cin >> sum;

    cout << is_prime(user_input1) << endl;

    //cout << "Factorial " << user_input << " is " << factorial(user_input1) << endl;

    //cout << "Value of C: " << Calculate(user_input1, user_input2) << "\n";

    //cout << "Number " << user_input1 << " digit count is " << digits_count(user_input1) << "\n";

    //cout << "The " << user_input2 << "th digit from the right in " << user_input1 << " is " << digit_value(user_input1, user_input2) << "\n";

    //cout << "Number of terms is " << terms_number(sum) <<"\n";

    //cout << "Terms of PI to reach 3.14159 is " << terms_pi() << "\n";

   // cout << "The lower case of letter A is " << ToLower('A') << "\n"
     //   << "The Upper case of letter b is " << ToUpper('b') << "\n";

    //cout << capital_letters() << "\n";
   
    //cout << "Formula Z for " << user_input1 << ": " << Z(user_input1) << "\n";

    cout << "Formula S for " << user_input1 << ": " << S(user_input1) << "\n";
}

bool is_prime(int num)
{
    bool prime = 1;
    if (num == 1 || num == 0)
        prime = 0;

    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}

int factorial(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    else
        return i * factorial(i - 1);
}

int Calculate(int x, int R)
{
    int C = factorial(x) / (factorial(R) * factorial(x - R));
    return C;
}

int digits_count(long num)
{
    int count = 0;
    cout << "Number " << num << " reversed is ";
    do
    {
        cout << num % 10;
        num /= 10;
        count++;
    } while (num != 0);
    cout << "\n";
    return count;
}

int digit_value(int n, int k)
{
    int digit = 0;
    for (int i = 0; i < k; i++)
    {
        digit = n % 10;
        n /= 10;
    }
    return digit;
}

int terms_number(double sum)
{
    int term = 0;
    int i = 1;
    while (sum > 0 && sum < 2)
    {
        sum -= (1.0 / i);
        i++;
        term++;
    }
    return term;
}

int terms_pi()
{
    double pi = 4;
    int terms = 1;
    int n = 2;
    do
    {
        pi += 4 * (pow(( - 1), (n - 1)) / (2 * n - 1));
        n++;
        terms++;
    } while (pi <= 3.14159);
    return terms;
}

//ASCII value of lowercase char a to z ranges from 97 to 122
//ASCII value of uppercase char A to Z ranges from 65 to 92
//For conversion we are subtracting or adding 32 from the ASCII value of input char.
//If you don't know the range just add or subtract ('a' - 'A')
char ToLower(char ch)
{
    char c = ch + ('a' - 'A');
    return c;
}

char ToUpper(char ch)
{
    char c = ch - ('a' - 'A'); 
    return c;
}

int capital_letters()
{
    int count = 0;
    int letter_count = 0;

    while (1)
    {
        char input = _getch();
        cout << input; //To display the charachters for the user
        count++;
        if (input >= 'A' && input <= 'Z')
        {
            letter_count++;
        }
        if (input == '.' || count == 100)
            break;
    }
    cout << "\n";
    return letter_count;
}

//We will only calculate first 10 terms
double Z(int x)
{
    double z = 0;
    for (int i = 0; i < 10; i++)
    {
        z += (pow(-1, i) * pow(x, (2 * i + 1))) / (factorial(2 * i + 1));
    }
    return z;
}

double S(int x)
{
    double s = 0;
    for (int t = 0; t <= 100; t++)
    {
        s += exp(-x * t);
    }
    return s;
}