#include <algorithm>
#include <cstdlib>
#include <iostream>

#include <unistd.h>

int main(int argc, char* argv[])
{
    // parse args
    int c;
    while ((c = getopt(argc, argv, ":l")) != -1) {
        switch (c) {
        case 'l':
            break;

        default:
            break;
        }
    }

    return EXIT_SUCCESS;
}
