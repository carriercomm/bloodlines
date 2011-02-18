#include <medium.h>
#include <terrain_types.h>
#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetDayLight(30);
    SetNightLight(30);
    SetShort("The sky");
    SetLong("You are in the air above a vast sea that stretches from horizon to horizon.");
    SetClimate("temperate");
    SetTown("wilderness");
    SetTerrainType(T_MIDAIR);
    SetMedium(MEDIUM_AIR);
    SetItems( ([
                ({ "sea", "ocean" }) : "A seemingly endless body of water.",
                ]) );
    SetExits( ([
                "north" : "/domains/town/virtual/sky/18,9,1",
                "south" : "/domains/town/virtual/sky/18,7,1",
                "east" : "/domains/town/virtual/sky/19,8,1",
                "southeast" : "/domains/town/virtual/sky/19,7,1",
                "northeast" : "/domains/town/virtual/sky/19,9,1",
                "west" : "/domains/town/virtual/sky/17,8,1",
                "southwest" : "/domains/town/virtual/sky/17,7,1",
                "northwest" : "/domains/town/virtual/sky/17,9,1",
                "up" : "/domains/town/virtual/sky/18,8,2",
                "down" : "/domains/fort/room/gstreet6.c",
                ]) );
}
void init(){
    ::init();
}