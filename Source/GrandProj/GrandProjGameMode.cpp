
#include "GrandProjGameMode.h"
#include "GrandProjCharacter.h"
#include "UObject/ConstructorHelpers.h"


AGrandProjGameMode::AGrandProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Chara"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
