int pathFinder(int posX, int posY, solutions){ // declare with 0, 0
    if (posX == 20 && posY == 20){
        return 1;
    }
    else if (posX > 20 || posY > 20){
        return 0;
    }
    else{
        if (pathFinder(posX + 1, posY, solutions) ){

        }
    }
}