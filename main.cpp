#include <QApplication>
#include "mainmenu.h"

#define SCALE 0.5
#define RES_X 960
#define RES_Y 660

//IT IS IMPORTANT TO OBSERVE THE FOLLOWING

//Utilize as many C++ concepts as you can that are covered in the module as part of your game. The demonstration of this knowledge and related explanation is a central aspect
//of the project and should include concepts such as :

//Classes DONE, Objects DONE, Destructors DONE, Pre-processor directives DONE, Function Prototypes DONE and Coercion ????, Pointers DONE, Inheritance PLAYER CLASS (including virtual methods) keyPressedEvent
// Memory Management ALL THEM DELETES YO , Templates Dunno what we'd do with this, Operator overloading DONE << and []

//In your presentation you will be required to describe all aspects of your code as well as a number of event driven features that are part of your game code.

//You should view this assignment as a means to create a relevant portfolio that you might present to a future employer, so feel free to utilize a blog that records
//your progression. This blog can also be used as a basis of your final presentation.




int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MainMenu menu;
    menu.show();

    return a.exec();
}
