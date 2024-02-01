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
    int pointer = 0;

  public:
    vector<menuOption> menuOptions;

    void addMenuOption(const menuOption& var) {
      menuOptions.push_back(var);
    }

    void printMenu() {
      for (int i = 0; i < menuOptions.size(); i++) {
        cout << menuOptions[i].getName() << menuOptions[i].getState() << endl;
      } 
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


  class menu exampleMenu;

  menuOption option1(false, "Option One: ", "State");
  menuOption option2(true, "Option Two: ", "false");
  menuOption option3(true, "Option Three: ", "false");

  exampleMenu.addMenuOption(option1);
  exampleMenu.addMenuOption(option2);
  exampleMenu.addMenuOption(option3);

  exampleMenu.menuOptions[2].toggle();

  exampleMenu.printMenu();

}











