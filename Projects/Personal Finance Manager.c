#include <stdio.h>

int main() {
    int days, i, j;
    float food, travel, shopping, bills;
    float totalFood = 0.0f, totalTravel = 0.0f, totalShopping = 0.0f, totalBills = 0.0f;
    float monthlyTotal, budget, dailyBudget;
    float totalSoFar = 0.0f, idealSoFar, overshoot, maxOvershoot = 0.0f;
    int maxCategory;        // 1 = Food, 2 = Travel, 3 = Shopping, 4 = Bills
    float maxAmount;        // amount of highest spending category
    int starsFood, starsTravel, starsShopping, starsBills;

    printf("=== Personal Finance Manager (Daily Expense Analyzer) ===\n\n");

    printf("Enter number of days you want to record expenses for: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("Invalid number of days.\n");
        return 0;
    }

    printf("Enter your planned monthly budget (in Rs.): ");
    scanf("%f", &budget);

    if (budget <= 0) {
        printf("Warning: Budget should be positive. Pace analysis will be skipped.\n");
    }

    dailyBudget = (budget > 0) ? (budget / days) : 0.0f;

    for (i = 1; i <= days; i++) {
        float dayTotal = 0.0f;

        printf("\nDay %d:\n", i);

        printf("  Enter Food expense for the day: ");
        scanf("%f", &food);

        printf("  Enter Travel expense for the day: ");
        scanf("%f", &travel);

        printf("  Enter Shopping expense for the day: ");
        scanf("%f", &shopping);

        printf("  Enter Bills (electricity, rent, etc.) expense for the day: ");
        scanf("%f", &bills);

        if (food < 0 || travel < 0 || shopping < 0 || bills < 0) {
            printf("  Invalid input! Expenses cannot be negative.\n");
            return 0;
        }

        totalFood     = totalFood     + food;
        totalTravel   = totalTravel   + travel;
        totalShopping = totalShopping + shopping;
        totalBills    = totalBills    + bills;

        dayTotal = food + travel + shopping + bills;
        totalSoFar = totalSoFar + dayTotal;

        if (budget > 0) {
            idealSoFar = dailyBudget * i;
            overshoot = totalSoFar - idealSoFar;
            if (overshoot > maxOvershoot) {
                maxOvershoot = overshoot;
            }
        }
    }

    monthlyTotal = totalFood + totalTravel + totalShopping + totalBills;

    printf("\n================ Monthly Expense Report ================\n");
    printf("Total Food expense     : Rs. %.2f\n", totalFood);
    printf("Total Travel expense   : Rs. %.2f\n", totalTravel);
    printf("Total Shopping expense : Rs. %.2f\n", totalShopping);
    printf("Total Bills expense    : Rs. %.2f\n", totalBills);
    printf("--------------------------------------------------------\n");
    printf("Total Monthly Expense  : Rs. %.2f\n", monthlyTotal);

    /* ---------- Highest spending category ---------- */
    maxCategory = 1;
    maxAmount = totalFood;

    if (totalTravel > maxAmount) {
        maxAmount = totalTravel;
        maxCategory = 2;
    }
    if (totalShopping > maxAmount) {
        maxAmount = totalShopping;
        maxCategory = 3;
    }
    if (totalBills > maxAmount) {
        maxAmount = totalBills;
        maxCategory = 4;
    }

    printf("\nHighest spending category: ");
    if (maxCategory == 1)      printf("Food (Rs. %.2f)\n", maxAmount);
    else if (maxCategory == 2) printf("Travel (Rs. %.2f)\n", maxAmount);
    else if (maxCategory == 3) printf("Shopping (Rs. %.2f)\n", maxAmount);
    else                       printf("Bills (Rs. %.2f)\n", maxAmount);

    /* ---------- Bar chart ---------- */
    printf("\nCategory-wise bar chart (each * = Rs. 100):\n");

    starsFood     = (int)(totalFood / 100.0f);
    starsTravel   = (int)(totalTravel / 100.0f);
    starsShopping = (int)(totalShopping / 100.0f);
    starsBills    = (int)(totalBills / 100.0f);

    printf("Food     : ");
    for (j = 0; j < starsFood; j++) {
        printf("*");
    }
    printf("\n");

    printf("Travel   : ");
    for (j = 0; j < starsTravel; j++) {
        printf("*");
    }
    printf("\n");

    printf("Shopping : ");
    for (j = 0; j < starsShopping; j++) {
        printf("*");
    }
    printf("\n");

    printf("Bills    : ");
    for (j = 0; j < starsBills; j++) {
        printf("*");
    }
    printf("\n");

    /* ---------- Savings & pacing suggestion ---------- */
    printf("\n================ Savings & Pacing Analysis =============\n");

    if (budget <= 0) {
        printf("Budget was not valid, so detailed savings analysis is skipped.\n");
    } else {
        if (monthlyTotal <= budget) {
            float saved = budget - monthlyTotal;
            printf("You are under your budget. You saved Rs. %.2f\n", saved);

            if (maxOvershoot <= 0) {
                printf("Your spending pace was stable throughout the period.\n");
            } else if (maxOvershoot <= 0.2f * budget) {
                printf("You overspent a bit in the earlier days (up to Rs. %.2f ahead),\n", maxOvershoot);
                printf("but you managed to control later. Good recovery.\n");
            } else {
                printf("Even though you are under budget, at one point you were ahead\n");
                printf("of your ideal spending by Rs. %.2f.\n", maxOvershoot);
                printf("Try to avoid heavy spending at the beginning of the month.\n");
            }
        } else {
            float extra = monthlyTotal - budget;
            printf("You crossed your budget by Rs. %.2f\n", extra);
            printf("Your biggest overshoot above ideal pace was Rs. %.2f\n", maxOvershoot);
            printf("Try to reduce expenses in your highest spending category next month.\n");
        }
    }

    printf("\nThank you for using Personal Finance Manager.\n");

    return 0;
}
