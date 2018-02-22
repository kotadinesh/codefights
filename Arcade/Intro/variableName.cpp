bool variableName(std::string name) {
    int flag=0;
    for(int i=0;i<name.size();i++){
        if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122) || (name[i]>=48 
          && name[i]<=57) || name[i] == 95){
            if(name[0]>=48 && name[0]<=57)
                flag=1;      
        } 
        else
            flag=1;
    }
    if(flag==1)
        return false;
    else
        return true;
}