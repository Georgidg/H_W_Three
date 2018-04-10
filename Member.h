/*
#ifndef UNTITLED1_MEMBER_H
#define UNTITLED1_MEMBER_H


using namespace std;

#include <map>
#include <iterator>
#include <iostream>
#include <string>
class Member {

private:
	map<int, Member*> followers;
	map<int, Member*> following;

public:
	int id;
	static int countId;
	static int class_size;
	Member();
	~Member();
	static int count();
	void follow(Member &m);
	void unfollow(Member &m);
	int numFollowers();
	int numFollowing();



};


#endif //UNTITLED1_MEMBER_H*/
/********************************************************/


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