using namespace std;
#include <iostream>


class menuOption {
  private:
    bool toggleable;
    string state;
  public:
    void toggle() { }
    void setState() { }
    string getState() { return "Unfinished"; }
};



/*
 * generate userId
 * 
 * if userId not in database {
 *   add userId to database
 * }
 *
 * grab recent posts based on userId
*/



int main() {
	cout << "---Welcome to the Private Yolk---" <<
	endl << "An open news platform so peole can be updated" <<
	endl << "on whats happening faster and easier" << endl;
  menuOption menu;
  cout << endl << menu.getState() << endl;
}
