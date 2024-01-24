#include <iostream>
#include <vector>
using namespace std;



class menuOption {
  private:
    bool toggleable = false;
    string state = "undefined";
    string name = "undefined";

  public:
    menuOption(bool var1, string var2, string var3) :
      toggleable(var1), name(var2), state(var3) { }

    void setState(string var) { state = var; }

    void toggle() {
      if (toggleable == false) {
        cerr << endl << "attempted to toggle menuOption when toggleable is false" << endl;
      } else {
        if (state == "false") {
          state = "true";
        } else if (state == "true") {
          state = "false";
        }
      }
    }

    string getState() { return state; }

    string getName() { return name; }
};

class menu {
  private:
    vector<menuOption> menuOptions;
  public:
    void addMenuOption(const menuOption& var) {
      menuOptions.push_back(var);
    }
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

  menuOption menu(false, "CurrentName: ", "Current State");
  cout << menu.getName() << menu.getState() << endl;
}
