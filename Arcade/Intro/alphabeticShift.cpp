std::string alphabeticShift(std::string inputString) {
    for(int i=0;i<inputString.size();i++){
        if(inputString[i]==122)
            inputString[i]=96;
        inputString[i] +=1;
    }
    return inputString;
}