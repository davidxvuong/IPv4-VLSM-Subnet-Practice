#ifndef IPv4_subnetting
#define IPv4_subnetting

#ifndef nullptr
#define nullptr 0
#endif

#include <iostream>
#include <string>
#include <vector>

class IPv4_subnetting {
	private:
		int* ip_address_space;
		int* subnet_mask_space;
		std::vector<int> subnet_users;
	public:
		IPv4_subnetting(string ip_address, string subnet_mask);
		~IPv4_subnetting();
		
		void push_subnet_user_top(int in);
		void pop_subnet_user_top();
		
		string get_subnet_mask_space() const;
		string get_ip_address_space() const;
		std::vector<std::pair<string, string>> compute_subnet() const;
}

IPv4_subnetting::IPv4_subnetting(string ip_address, string subnet_mask):ip_address_space(new int[4]),
subnet_mask_space(new int[4]) {
	
	ip_address_space[0] = ip_address.substr(0, ip_address.find("."));
	
}

~IPv4_subnetting::IPv4_subnetting() {
	delete []ip_address_space;
	delete []subnet_mask_space;
}

string IPv4_subnetting::get_subnet_mask_space() {
}

string IPv4_subnetting::get_ip_address_space() {
}

void IPv4_subnetting::push_subnet_user_top(int in) {
}

void IPv4_subnetting::pop_subnet_user_top() {
}

std::vector<std::pair<string, string>> compute_subnet() {
}

#endif
