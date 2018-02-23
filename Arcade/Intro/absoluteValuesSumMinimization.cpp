int absoluteValuesSumMinimization_privot(std::vector<int> &a, int low, int high){
    cout << "low / high : " << low << " " << high << endl;
    if (low == high) return a[low];
    int low_result = 0;
    int high_result = 0;
    for(int i = 0; i < a.size(); ++i){
        low_result += abs(a[i]-a[low]);
        high_result += abs(a[i]-a[high]);
    }
    if (low_result < high_result){
        cout << "returning low";
        return absoluteValuesSumMinimization_privot(a,low,(low+high)/2);
    } else {
        cout << "returning high" << endl;
        return absoluteValuesSumMinimization_privot(a, (low+high)/2, high);
    }
    
}

int absoluteValuesSumMinimization(std::vector<int> a) {
    int low_result = 0;
    int index = 0;
    for(int i = 0; i < a.size(); ++i){
        low_result += abs(a[i]-a[index]);
    }
    for(int i = 1; i < a.size(); ++i){
        int aux_low_result = 0;
        for(int j =0; j < a.size(); ++j){
            aux_low_result += abs(a[j]-a[i]);
        }
        if(low_result > aux_low_result){
            low_result = aux_low_result;
            index = i;
        }
    }
    return a[index];
}
