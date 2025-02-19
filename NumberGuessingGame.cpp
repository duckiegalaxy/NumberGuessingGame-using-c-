#include <iostream>
#include <ctime>
int main()
{
    srand(time(NULL));
    int guess;
    int tries = 0;
    int num = rand() % 50 + 1;
    while (true)
    {
        std::cout << "ENTER YOUR GUESS FROM 1 TO 50: ";
        std::cin >> guess;
        tries++;
        if (num == guess)
        {
            std::cout << "NUMBER OF TRIES TILL YOU GOT IT RIGHT IS " << tries;
            break;
        }
        else
        {
            std::cout << "FALSE TRY AGAIN! " << '\n';
        }
    }
    return 0;
}
