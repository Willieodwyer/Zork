//#include "Room.h"


//Room::Room(string description) {
//	this->description = description;
//}


//string Room::longDescription() {
//	return "room = " + description + ".\n" + displayItem() + exitString();
//}

//void Room::addItem(Item *inItem) {
//    //cout <<endl;
//    //cout << "Just added" + inItem->getLongDescription();
//    itemsInRoom.push_back(*inItem);
//}

//string Room::displayItem() {
//    string tempString = "items in room = ";
//    int sizeItems = (itemsInRoom.size());
//    if (itemsInRoom.size() < 1) {
//        tempString = "no items in room";
//        }
//    else if (itemsInRoom.size() > 0) {
//       int x = (0);
//        for (int n = sizeItems; n > 0; n--) {
//            tempString = tempString + itemsInRoom[x].getShortDescription() + "  " ;
//            x++;
//            }
//        }
//    return tempString;
//    }

//int Room::numberOfItems() {
//    return itemsInRoom.size();
//}

//int Room::isItemInRoom(string inString)
//{
//    int sizeItems = (itemsInRoom.size());
//    if (itemsInRoom.size() < 1) {
//        return false;
//        }
//    else if (itemsInRoom.size() > 0) {
//       int x = (0);
//        for (int n = sizeItems; n > 0; n--) {
//            // compare inString with short description
//            int tempFlag = inString.compare( itemsInRoom[x].getShortDescription());
//            if (tempFlag == 0) {
//                itemsInRoom.erase(itemsInRoom.begin()+x);
//                return x;
//            }
//            x++;
//            }
//        }
//    return -1;
//}
