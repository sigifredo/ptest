

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int limit = std::atoi(argv[1]);
        int n = std::atoi(argv[2]);
        std::srand(std::time(NULL));

        for (int i = 0; i < n; i++)
            std::cout << (rand() % limit) << std::endl;

        return 0;
    }
    else
    {
        std::printf("Use:\n\t%s <limite> <número de enteros a generar>\n", argv[0]);
        return -1;
    }
}
