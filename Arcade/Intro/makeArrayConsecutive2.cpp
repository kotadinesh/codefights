int makeArrayConsecutive2(std::vector<int> statues) {
    int maxe,mine,n,val=0;
    maxe=*std::max_element(statues.begin(),statues.end());
    mine=*std::min_element(statues.begin(),statues.end());
    n=statues.size();
    val=((maxe-mine)-n)+1;
    return val;
}
