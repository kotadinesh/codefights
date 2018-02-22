bool chessBoardCellColor(std::string cell1, std::string cell2) {
    if(cell1[0]%2 == cell1[1]%2 and cell2[0]%2 == cell2[1]%2 ){
        return true;
    } else if(cell1[0]%2 != cell1[1]%2 and cell2[0]%2 != cell2[1]%2){
        return true;
    } else {
        return false;
    }
}