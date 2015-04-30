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
		IPv4_subnetting();
		~IPv4_subnetting();
		
		void set_subnet_mask_space(string in);
		void set_ip_address_space(string in);
		void set_subnet_users(int in);
		void remove_subnet_users(int in);
		
		string get_subnet_mask_space() const;
		string get_ip_address_space() const;
		std::vector<std::pair<string, string>> compute_subnet() const;
}

#endif
