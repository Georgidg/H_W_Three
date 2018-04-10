
#include"Member.h"
using namespace std;
Member avi, beni, chana;

void test1() {

	Member dana;

	chana.follow(dana);

	dana.follow(avi);

	cout << "" << chana.numFollowers() << "" << chana.numFollowing() << endl; // 0 1

	cout << "  " << avi.numFollowers() << " " << avi.numFollowing() << endl; // 1 0

	cout << "  " << Member::count() << endl; // 4

}
void test_keys() {//check if keys provided correctly
	if (avi.Member_Key != 1) cout << "ERROR! Wrong Key"<<endl;
	if (beni.Member_Key != 2) cout << "ERROR! Wrong Key" << endl;
	if (chana.Member_Key != 3) cout << "ERROR! Wrong Key" << endl;
	Member avi;
	if (avi.Member_Key == 1) cout << "ERROR! Wrong Key" << endl;


}



int main() {
	test_keys();
	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 0
	avi.follow(beni);
	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 1
	cout << beni.numFollowers() << " " << beni.numFollowing() << endl; // 1 0
	cout << Member::count() << endl; // 3
	cout << endl;

	avi.follow(beni); // duplicate follow has no effect
	avi.follow(beni); avi.follow(beni); avi.follow(beni); avi.follow(beni); avi.follow(beni);
	cout << "avi.numFollowers()" << avi.numFollowers() << "avi.numFollowing()" << avi.numFollowing() << endl; // 0 1
	avi.unfollow(beni);
	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 0
	cout << endl;

	cout << chana.numFollowers() << " " << chana.numFollowing() << endl; // 0 0
	test1();
	cout << chana.numFollowers() << " " << chana.numFollowing() << endl; // 0 0
	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 0
	cout << Member::count() << endl; // 3

}




