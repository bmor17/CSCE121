# include "functions.h"
#include "string"
// add any includes

using std::cout, std::cin, std::endl, std::string;

void deobfuscate() {
    // TODO
}

void wordFilter() {
    string inputString;
    string filterWord;
    getline(cin,inputString);
    cin >> filterWord;
    
    //Create censor
    string censor;
    for(int i = 0; i < filterWord.length();++i){
        censor += "#";
    }

    //Replace instances with censor
    for(unsigned int i = 0; i < inputString.length(); ++i){
        if(inputString.find(filterWord) != string::npos){
            int index = inputString.find(filterWord);
            inputString.replace(index,filterWord.length(),censor);
        }
        else{
            break;
        }
    }
    //Print the sentence with censor.
    cout << inputString;
    
}

void passwordConverter() {
    // TODO
    string password;
    string newPassword;
    cin >> password;
    newPassword = password;
    //Convert the Vowels

    for(unsigned int i = 0; i < password.length(); ++i){
        if(password.at(i) == 'a'){
            newPassword.replace(i,1,"@");
        }
        else if(password.at(i) == 'e'){
            newPassword.replace(i,1,"3");
        }
        else if(password.at(i) == 'i'){
            newPassword.replace(i,1,"!");
        }
        else if(password.at(i) == 'o'){
            newPassword.replace(i,1,"0");
        }
        else if(password.at(i) == 'u'){
            newPassword.replace(i,1,"^");
        }
    }
    //Reverse of the new password
    string reverse = newPassword;
    int i = 0;
    int j = reverse.length() - 1;

    while(i <= j){
        std::swap(reverse[i],reverse[j]);
        --j;
        ++i;
    }
    //Append the reverse

    newPassword = newPassword + reverse;
    cout << newPassword;
}

void wordCalculator() {
    // TODO
}

void palindromeCounter() {
    // TODO
}