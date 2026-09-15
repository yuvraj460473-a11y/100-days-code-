#include <stdio.h>

int main() {
    float cp, sp;
    
    // Input Cost Price (CP) and Selling Price (SP)
    scanf("%f %f", &cp, &sp);
    
    if (sp > cp) {
        float profit = sp - cp;
        float profit_percent = (profit / cp) * 100.0;
        printf("Profit %.0f%%\n", profit_percent);
    } else if (cp > sp) {
        float loss = cp - sp;
        float loss_percent = (loss / cp) * 100.0;
        printf("Loss %.0f%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
