#include<bits/stdc++.h>
using namespace std;

int main(){

    int intArr[20] = {1,2,3,4,5,6};     // this is a integer array and to get all the values we have to use array location to get located values on that location and can get a single value at a time
    char chArray[30] = "Hello my dear";     // this is a character array size of 30 character means we can't add more then 30 characters and for this character array we can get all the characters at a time
    string str = "I am akshay kumar and working on 60 days of coding challange";        // this is a string array means all the characters are there inthis of char array but there are no limit to store words in this and can eaisly excess.

    cout<<"\n\n";
    cout<<"this is an character array written : "<<chArray<<endl;
    cout<<"this is array of integers written : "<<intArr[0]<<" to "<<intArr[5]<<endl;
    cout<<str<<endl;
    cout<<"\n\n";


    return 0;
}