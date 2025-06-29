#include <iostream>
#include <cstring>
using namespace std;

bool ValidPalin(char word[], int n)
{
    int start = 0, end = n-1;

    while(end>start){
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char word[] = "racecar";
    cout << ValidPalin(word, strlen(word));

    return 0;
}