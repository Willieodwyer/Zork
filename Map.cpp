#include "Map.h"
#include "Room.h"


Map::Map()
{
  //MASSIVE ARRAY OF DOOOOOOOOM (rooms)
  Item *temp = new Item("temp");
//    roomArray = new Room *[NUM_OF_ROOMS];
  roomArray[0] = new Room("start",120, 510, 150, 630);
  roomArray[1] = new Room("mainBOT",60, 450, 210, 480);
  roomArray[2] = new Room("mainBotDiv",90, 420, 180, 420);
  roomArray[3] = new Room("mainMID",60, 210, 210, 390);
  roomArray[4] = new Room("mainTopDiv",90, 180, 180, 180);
  roomArray[5] = new Room("mainTop",60, 150, 210, 150);
  roomArray[6] = new Room("mainTopL",60, 120, 90, 120);
  roomArray[7] = new Room("mainTopR",180, 120, 210, 120);
  roomArray[8] = new Room("goldSteps",240, 300, 240, 330);
  roomArray[9] = new Room("midCorridor",270, 300, 450,330);
  roomArray[10]= new Room("littleCub",390,360,390,390);
  roomArray[11]= new Room("waterRoom",300,390,360,420);
  roomArray[12]= new Room("beastView",300,450,300,450);
  roomArray[13]= new Room("watersEdge",270,480,450,480);
  roomArray[14]= new Room("longCorridor",480,180,480,540);
  roomArray[15]= new Room("barrel",540,600,540,600);
  roomArray[16]= new Room("lightWay",570,600,690,600);
  roomArray[17]= new Room("benchLeft",690,540,690,570);
  roomArray[18]= new Room("benchMid",630,540,630,570);
  roomArray[19]= new Room("benchRight",570,540,570,570);
  roomArray[20]= new Room("barrelRack",540,510,720,510);
  roomArray[21]= new Room("EntraceToDarkRoom",720,540,750,540);
  roomArray[22]= new Room("darkRoomTop",750,570,810,570);
  roomArray[23]= new Room("darkRoomBot",810,600,840,600);
  roomArray[24]= new Room("darkBarrel",870,600,870,600);
  roomArray[24]->setItem(temp);
  roomArray[25]= new Room("barrelCub",510,540,540,540);
  roomArray[26]= new Room("besideBarrel",540,570,540,570);
  roomArray[27]= new Room("eyesOfTheMonster",300,450,300,450);
  roomArray[28]= new Room("bedROomEntrance",390,240,390,270);
  roomArray[29]= new Room("bedroomLockers",390,150,390,210);
  roomArray[30]= new Room("bedRoom",270,150,360,210);
  roomArray[31]= new Room("upperStairs",270,90,270,120);
  roomArray[32]= new Room("upperCorridor",270,60,450,60);
  roomArray[33]= new Room("FirePit",510,30,540,30);
  roomArray[34]= new Room("tableRoom",480,60,540,150);
  roomArray[35]= new Room("lessUpperCorridor",570,120,750,120);
  roomArray[36]= new Room("pointingDownLessUpperCorridor",750,150,750,180);
  roomArray[37]= new Room("STARING AT THE BEAST",510,300,570,330);
  roomArray[38]= new Room("eyesOfTheMonster",600,210,630,420);
  roomArray[39]= new Room("middlePit",690,210,750,420);
  roomArray[40]= new Room("botRow",630,420,840,420);
  roomArray[41]= new Room("topRow",630,210,840,210);
  roomArray[42]= new Room("before the BEAST",810,240,840,390);
  roomArray[43]= new Room("betweenColumnL",660,270,660,360);
  roomArray[44]= new Room("BetweenColumnR",780,270,780,360);
  currentRoom = roomArray[0];
}

Map::~Map(){
    for( int i = 0 ; i < NUM_OF_ROOMS; i++){
        delete roomArray[i];
    }
}

