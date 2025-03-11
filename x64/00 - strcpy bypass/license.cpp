#include <iostream>
#include <string_view>

int main(int argc, char **argv)
{
    constexpr std::string_view defaultKey {"AAAA-Z10N-42-OK"};

    if (argc >= 2) {
         std::string_view receivedKey {argv[1]};
        if (defaultKey != receivedKey) {
            std::cout << "ERROR: Invalid Key.\n";
        } else {
            std::cout << "INFO: Access Granted\n";
        }
    } else {
        std::cout << "Usage: <key>\n";
    }

    return 0;
}
