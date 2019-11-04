#include <stddef.h>
#include <string.h>

void main()
{
    string mot;
    printf("Entrez la chaine : ");
    scanf("%s",&mot);
    size_t get_count(mot);
    
}


 size_t get_count( char *s)
{
    size_t cnt = 0ul;
    if (!s)
        return 0ul;
    while (*s)
        switch (*s++) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cnt++;
            break;
        }
    return cnt;
}