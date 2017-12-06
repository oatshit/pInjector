#include "ManualMap.h" 
#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

enum InjectionType : int
{
    ManualMap,
};

InjectionType InjectionMethod;
string proccessname;
string dllname;


int main(int argc, char **argv)
{
    printf("Press ENTER to begin injection ¬ love from qvantom :D\n");
    string InjectionMethodTemp;

    printf("type in your process name, press enter if it's csgo.exe ¬ love from qvantom :D\n");

    getline(cin, proccessname);
    if (proccessname.empty()) proccessname = "csgo.exe";

	if (argc == 1)
	{
		printf("type in your dll name, or press enter if its called cheat.dll ¬ love from qvantom :D\n");
		getline(cin, dllname);
	}
	else if (argc == 2) dllname = argv[1];
    if (dllname.empty()) dllname = "cheat.dll";

    switch (InjectionMethod)
    {
    case ManualMap:
        manual_map->manualmapmain(proccessname.c_str(), dllname.c_str(), argc);
        break;
    }
}
// junk, if you want change the number after 0x to random numbers for example 0xXX ( XX stands for random numbers )
#define JUNKS \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \


// also, you can copy the junk above and add some more :D ^

// never edit this, without this, the junkcode above will not work
#define _JUNK_BLOCK(s) __asm jmp s JUNKS __asm s:
// credits to qvantom <3


#include <stdio.h>
#include <string>
#include <iostream>

// paste junkcode here from basedgod.xyz/junkcode \/

