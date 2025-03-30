#include <stdio.h>

// Function to calculate penalty based on late days, months, and years
void calculatePenalty(int dueDay, int dueMonth, int dueYear, int subDay, int subMonth, int subYear) {
    int daysLate = 0, monthsLate = 0, yearsLate = 0;
    int penalty = 0;

    // Check if submission is on time
    if (subYear < dueYear || (subYear == dueYear && subMonth < dueMonth) || 
       (subYear == dueYear && subMonth == dueMonth && subDay <= dueDay)) {
        printf("✅ Submission is on time. No penalty.\n");
        return;
    }

    // Calculate year difference
    yearsLate = subYear - dueYear;

    // Calculate month difference
    if (subMonth >= dueMonth) {
        monthsLate = subMonth - dueMonth;
    } else {
        yearsLate--;  // Borrow one year
        monthsLate = (subMonth + 12) - dueMonth;
    }

    // Calculate day difference
    if (subDay > dueDay) {
        daysLate = subDay - dueDay;
    } else if (subDay < dueDay) {
        if (monthsLate > 0) {
            monthsLate--;  // Borrow one month
            daysLate = (subDay + 30) - dueDay;  // Assuming 30 days in a month
        }
    }

    // Calculate penalty
    penalty += daysLate * 10;       // ₹10 per day
    penalty += monthsLate * 200;    // ₹200 per month
    penalty += yearsLate * 5000;    // ₹5000 per year

    printf("📅 Late by: %d years, %d months, %d days\n", yearsLate, monthsLate, daysLate);
    printf("💰 Total Penalty: ₹%d\n", penalty);
}