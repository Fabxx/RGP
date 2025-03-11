int main(int *argc, int **argv)
{
    constexpr std::string_view key {"AAAA-Z10N-42-OK"};

    std::cout << (argc != 0 ? "Checking License\n" : "Usage: <key>\n");

    if (!strcmp(key.c_str(), argv[2])) {
            std::cout << "ERROR: Invalid Key.\n";
        } else {
            std::cout << "INFO: Access Granted\n";
        }
    }
    return 0;
}
