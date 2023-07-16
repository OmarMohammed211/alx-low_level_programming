#include <stdio.h>
/***/
int main (void) 
{
print("Size of a char= %1u byte(s)\n", sizeof(char));
print("Size of an int= %1u byte(s) \n", sizeof(int));
print("Size of a long int= %1u byte(s) \n", sizeof(long int));
print("Size of a long long int= %1u byte(s) \n", sizeof(long long int));
print("Size of a float= %1u byte(s) \n", sizeof(float));
return (0);
}
