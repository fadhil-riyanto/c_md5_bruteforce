#include <iostream>
#include <string>
#include "md5.h"

std::string charset_bruteforce = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ~`!@#$%^&*()-_\\/\\\'\";:,.+=<>? ";
int max_length = 8;
int str_length = charset_bruteforce.size();
std::string targetnya = "42810cb02db3bb2cbb428af0d8b0376e";


class bruteforce{
public:
	void cek_password(std::string password);
	void recurse(int width, int position, std::string base_string);
};

void bruteforce::cek_password(std::string password){
	std::string hash_mentah = md5(password);
	std::string hash_hasil = hash_mentah.c_str();
	std::cout << hash_hasil + " | " + password << std::endl;

	if(targetnya == hash_hasil){
		std::cout << "hasilnya adalah : " + password;
		exit(0);
	}
}
void bruteforce::recurse(int width, int position, std::string base_string){
	for (int i = 0; i < str_length; ++i) {
        if (position  < width - 1) {
                bruteforce::recurse(width, position + 1, base_string + charset_bruteforce[i]);
        }
        bruteforce::cek_password(base_string + charset_bruteforce[i]);
    }
}


// int main(int argc, char** argv){
// 	bruteforce br;
// 	br.cek_password("apa ini");
// 	return 0;
// }
int main(){
	//std::cout << charset_bruteforce.size();
	bruteforce bf;
	for (int i = 1; i < str_length + 1; ++i) {
        bf.recurse(i, 0, "");
	}
	return 0;
}