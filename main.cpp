#include "Utility.h" //DNT!!!
#include "AnimationAndSprites.h"
#include "Character.h"
#include "PlayerItems.h"
#include "UserInterface.h"
#include "LevelDesign.h"


// интерфейс боевки плавает
// главное меню
// окно выбора класса
// предметы
// расстановка предметов по карте



int main() {

    InitializeSettings();
    UserInterface UserInterface;
    UserInterface.ShowStartScreen();
    Player Player("Knight");
    Enemy DefaultEnemy(0);
    //FightInitialize(Player.GetName(), DefaultEnemy.GetName());
    //GameLevel HomeLevel(0);
    //HomeLevel.DrawGameLevel();

    //cout << HomeLevel.GetFromCoordinates(10, 10);
    //PlayerController PlayerController;
    //PlayerController.MovementInit(HomeLevel);


    wait();

}
