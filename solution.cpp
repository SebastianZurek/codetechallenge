#include <cstring> //strlen
#include <cmath> //sqrt
#include <iostream> //podstawowa biblioteka
using namespace std; 

int main(int argc, char** argv)
{
	int index = strlen(argv[1]); 
	int N=sqrt(index); 
    int top = 0, bottom = N - 1; 
    int left = 0, right = N - 1;
	
    while (1) 
    {
        if (left > right)
            break;
        // wyswietl dolną kolumnę
        for (int i = right; i >= left; i--){
            cout << argv[1][--index];
		}
        bottom--;
        if (top > bottom)
            break;
        // wyswietl lewą kolumnę
        for (int i = bottom; i >= top; i--){
			index=index-N;
            cout << argv[1][index];
		}
        left++;
        if (left > right)
            break;
        // wyswietl górną kolumnę
        for (int i = left; i <= right; i++)
            cout << argv[1][++index];
        top++;
        if (top > bottom)
            break;
        // wyswietl prawą kolumnę
        for (int i = top; i <= bottom; i++){
            index=index+N;
			cout << argv[1][index];
		}
        right--;
	}
	return 0;
}