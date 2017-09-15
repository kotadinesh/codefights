int adjacentElementsProduct(std::vector<int> inputArray) {
    int i,temp,n;
    int tempmax=inputArray[0]*inputArray[1];
    n=inputArray.size();
    for(i=1;i<n-1;i++)
    {
        temp=inputArray[i]*inputArray[i+1];
        
        if(tempmax<temp)
            tempmax=temp;
    }
    return tempmax;

}
