#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<functional>
#include<map>
#include<algorithm>


int main() {

	int N;
	std::cin>>N;

	std::vector<int> s;
	for(int i = 0; i < N; i++) {
		std::string str;
		std::cin>>str;
		if(str == "Push") {
			int Key;
			std::cin>>Key;
			s.push_back(Key);
		} else if(str == "Pop") {
			if(s.size() == 0) {
				std::cout<<"Invalid"<<std::endl;
			} else {
				int Key = s.back();
				s.pop_back();
				std::cout<<Key<<std::endl;
			}
		} else {
			if(s.size() == 0) {
				std::cout<<"Invalid"<<std::endl;
			} else {
				std::vector<int> temp;
				temp.assign(s.begin(),s.end());
				std::sort(temp.begin(),temp.end());
				int size = temp.size();
				std::cout<<temp[size / 2 + size % 2 - 1]<<std::endl;
			}
		}
	}
	return 0;
}
