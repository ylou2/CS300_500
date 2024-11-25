#ifndef VEH_H
#define VEH_H
#include <string>

class Vigenere{
    private:
        std::string key;
    public:
    /**
     * @brief Constructs a Vigenere cipher object with a given key.
     * 
     * @param key The encryption key to use for this cipher.
     */
        Vigenere(std::string key) {};
        /**
     * @brief Encrypts a plaintext message using the Vigenere cipher.
     *
     * @param msg The plaintext message to encrypt.
     * @return The encrypted message.
     */
        std::string encrypt(std::string msg) {};
        /**
     * @brief Decrypts an encrypted message using the Vigenere cipher.
     *
     * @param msg The encrypted message to decrypt.
     * @return The decrypted plaintext message.
     */
        std::string decrypt(std::string msg) {};
        /**
     * @brief Checks if a given encrypted message matches its plaintext equivalent.
     *
     * @param encryptedMsg The encrypted message.
     * @param decryptedMessage The decrypted plaintext message to verify against.
     * @return True if the encrypted message matches the plaintext after encryption; false otherwise.
     */
        bool isEncrypted(std::string encryptedMsg, std::string decryptedMessage) {};
        /**
     * @brief Sets a new encryption/decryption key.
     *
     * @param key The new key to be used by the Vigenere cipher.
     */
        void setKey(std::string key) {};
        /**
     * @brief Destructor for the Vigenere cipher object.
     */
        ~Vigenere() {};
};
#endif