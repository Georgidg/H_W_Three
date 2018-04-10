

#pragma once
#include <iostream>
#include <map>

using namespace std;

class Member {

private:
	map<int, Member*> Member_Following;
	map<int, Member*> Member_Followers;
	
public:
	int Member_Key;
	static int Next_Key;
	static int NumOfAllMembers;
	Member();
   ~Member();
	void follow(Member &x);
	void unfollow(Member &x);
	int numFollowers();
	int numFollowing();
	static int count();
};
