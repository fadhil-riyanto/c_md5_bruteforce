#include <iostream>
#include <string>
#include "md5.h"

std::string charset_bruteforce = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ~`!@#$%^&*()-_\\/\\\'\";:,.+=<>? "
class bruteforce{
public:
	void cek_password(std::string password);
	void recurse(int width, int position, std::string base_string);
};

void bruteforce::cek_password(std::string password){
	std::string hash_mentah = md5(password);
	std::string hash_hasil = hash_mentah.c_str();
	std::cout << hash_hasil << std::endl;
}
void bruteforce::recurse(int width, int position, std::string base_string){

}


int main(int argc, char** argv){
	bruteforce br;
	br.cek_password("apa ini");
	return 0;
}