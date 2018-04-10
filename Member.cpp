
#include"Member.h"

int Member::Next_Key = 0;
int Member::NumOfAllMembers = 0;

Member::Member() {
	Member_Key = ++Next_Key;
	NumOfAllMembers++;
}

Member::~Member() {
	NumOfAllMembers--;
	map <int, Member*>::iterator iterator;//Initialization of the iterator

	iterator = Member_Following.begin();
	while (iterator != Member_Following.end()) {//erasing Member from all followers map.
		iterator->second->Member_Followers.erase(Member_Key);
		iterator++;
	}
	iterator = Member_Followers.begin();
	while (iterator != Member_Followers.end()) {//erasing Member from all other others followings map.
		iterator->second->Member_Following.erase(Member_Key);
		iterator++;
	}
}


void Member::follow(Member &x) {
	if (this->Member_Key != x.Member_Key) {
		Member_Following[x.Member_Key] = &x;
		x.Member_Followers[this->Member_Key] = this;

	}
}


void Member::unfollow(Member &x) {
	if (x.Member_Key != this->Member_Key) {
		Member_Following.erase(x.Member_Key);
		x.Member_Followers.erase(Member_Key);
	}
}




int Member::numFollowers() {
	return (int)(this->Member_Followers.size());
}

int Member::numFollowing() {
	return (int)(this->Member_Following.size());
}
int Member::count() {
	return NumOfAllMembers;
}






