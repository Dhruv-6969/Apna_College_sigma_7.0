#include <iostream>
#include <cstring>
using namespace std;

void toRev(char word[], int n)
{
    int start = 0, end = n-1;

    while(end>start){
        swap(word[start], word[end]);
        start++;
        end--;
    }
}

int main()
{
    char word[] = "code";
    toRev(word, strlen(word));

    cout << word << endl;

    return 0;
}