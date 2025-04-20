#include "BitcoinExchange.hpp"

int main(int ac, char** av) 
{
    if (ac != 2) 
        return (std::cout << "Usage: ./btc <input_file>" << std::endl, 1);
    
    BitcoinExchange btcExchange("data.csv"); 
    btcExchange.processInput(av[1]);

    return 0;
}
