#include <stdio.h>

int main() {
    float prev, current, units, totalCost;
    const float RATE = 15.80; // Cost per unit in Ksh
    const float TAX_RATE = 0.16; // 16% VAT

    printf("---AI POWERED UTILITY BILLING SYSTEM (C Version) ---\n");
    
    // 1. Get user input
    printf("Enter Previous Meter Reading: ");
    scanf("%f", &prev);
    
    printf("Enter Current Meter Reading: ");
    scanf("%f", &current);

    // 2. Perform Calculations
    units = current - prev;
    float baseAmount = units * RATE;
    float taxAmount = baseAmount * TAX_RATE;
    totalCost = baseAmount + taxAmount;

    // 3. Generate the Bill (The "Receipt")
    printf("\n================================\n");
    printf("       OFFICIAL INVOICE       \n");
    printf("==============================\n");
    printf("Units Consumed: %.2f kWh\n", units);
    printf("Base Amount:    Ksh %.2f\n", baseAmount);
    printf("VAT (16%%):      Ksh %.2f\n", taxAmount);
    printf("------------------------------\n");
    printf("TOTAL PAYABLE:  Ksh %.2f\n", totalCost);
    printf("==============================\n");

    return 0;
}



How It Works

User inputs: 

Previous meter reading

Current meter reading

System calculates:

Units consumed

Base cost (units × rate)

VAT (16%)

Total bill

Output:

A formatted invoice showing all details

🧠 System Logic

Uses arithmetic computation

Applies tax rules

Automates billing process

🏗️ Real-World Relevance

This system simulates how electricity companies:

Track consumption

Calculate bills

Generate invoices






































































