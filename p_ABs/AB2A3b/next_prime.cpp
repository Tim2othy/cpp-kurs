# include <iostream>

int main()
{


    for (int input = 20000; ; input++)
    {

        for (int n = 2; n * n < input; n++)
        {
            if ((input % n) == 0)
            {
                std::cout << "Not prime" << std::endl;
                break;
            }
            std::cout << "Could be prime" << std::endl;
        }





    }
}