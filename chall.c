#include <stdio.h>
#include <stdint.h>

int main() {
    uint64_t first_check = 0x7d786168;  
    
    uint64_t second_check = 0x7233766730306f647d;  

    unsigned long long input1;
    unsigned long long input2;

    printf("Do you really want the flag? Then tell me the first phrase\n");
    scanf("%llx", &input1);

    if (input1 == first_check) {
        printf("Wow, Did not think that. What about the Second Phrase?\n");
        scanf("%llx", &input2);
        
        if (input2 == second_check) {
            printf("You have shown diligence in your ways\n");
            return 1;
        } else {
            printf("BOOO, wrong phrase. so much to come so far\n");
            return 0;
        }
    } else {
        printf("Nope, Try again\n");
        return 0;
    }
    
    return 0;
}