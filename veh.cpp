#include "veh.h"
#include <string>
#include <vector>

class Vigenere {
    private:
        std::string key;
        std::vector<int> numbers;
    public:
        Vigenere(std::string key) {
            this->key = key;
            for(char letter : key) {
                int number = letter - 'A' + 1;
                numbers.push_back(number);
            }
        };
        std::string encrypt(std::string msg) {
        
            for(int i = 0; i < msg.size(); i++) {
                msg[i] += numbers[i % numbers.size()];
                if((msg[i] - 'Z') > 0) {
                    msg[i] = msg[i] - 'Z' - 1 + 'A';
                }
            }
            return msg;
        };
        std::string decrypt(std::string msg) {
            for(int i = 0; i < msg.size(); i++) {
                msg[i] -= numbers[i % numbers.size()];
                if((msg[i] - 'A') < 0) {
                    msg[i] = 'Z' - ('A' - msg[i]);
                }
            }
            return msg;
        };
        bool isEncrypted(std::string encryptedMsg, std::string decryptedMessage) {
            return decrypt(encryptedMsg) == decryptedMessage;
        };
        void setKey(std::string key) {
            this->key = key;
        };
        ~Vigenere() {};
}

