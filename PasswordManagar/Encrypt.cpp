#include <string>
#include <random>
#include <iostream>


class CreateRandom {
private:
	std::string nums = "0123456789";
	std::string symbols = "!@#$%^&*";
	std::random_device rd;
protected:
	std::string encryptString = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string pass = "";
public:
	CreateRandom() {}

	~CreateRandom() {}

protected:
	void createDataForEncrypt(bool nums, bool symbols) {
		if (nums)
			this->encryptString += this->nums;
		if(symbols)
			this->encryptString += this->symbols;
	}
	void random() {
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, this->encryptString.size() - 1);
		for (int i = 0; i < 14; ++i) {
			this->pass += this->encryptString[dis(gen)];
		}

	}
};

class Encrypt : public CreateRandom {
private:

protected:

public:

	Encrypt() {}

	~Encrypt() {}


	void init() {
		createDataForEncrypt(true, true);
		random();
		std::cout << "готовый пароль: " << pass << "\n";
	}

};