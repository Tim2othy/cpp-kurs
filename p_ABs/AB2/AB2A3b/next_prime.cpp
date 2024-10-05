# include <iostream>

int main()
{
    for (int input = 40000; true; input++)
    {
        int is_prime = 10;

        int output = input;

        std::cout << "At the start" << std::endl;


        for (int n = 2; n * n < input; n++)
        {
            std::cout << "I'm loop" << std::endl;

            if ((input % n) == 0)
            {
                is_prime = 0;
                std::cout << "Jetzt Break" << std::endl;

                break;
            }
            std::cout << "Hierhin?" << std::endl;

            is_prime = 1;
        }

        std::cout << "Is_prime = " << is_prime << std::endl;


        if (is_prime == 1)
        {
            std::cout << "Passiert?" << std::endl;

            std::cout << "Der output ist: " << output;
            break;
        }
    }
}