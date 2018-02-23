int depositProfit(int deposit, int rate, int threshold) {
 int count = 0;
    double rate_d = ((double)rate/100) + 1;
    cout << rate_d << endl;
    double deposit_d = (double)deposit;
    while(deposit_d < threshold){
        deposit_d *= rate_d;
        ++count;
    }
    return count;
}