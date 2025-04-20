#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <climits> 
#include <iomanip>



class BitcoinExchange 
{
    private:
        std::map<std::string, double> btcData;
        void loadDatabase(const std::string& filename);
        double stod(const std::string& str) const;
        float stof(const std::string& str) const;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        BitcoinExchange(const std::string& dbFilename);

        void processInput(const std::string& inputFilename) const;
};

#endif