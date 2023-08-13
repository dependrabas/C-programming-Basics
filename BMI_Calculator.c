#include <stdio.h>
#include <string.h>

void calculateBMI(float weight, float height, float *bmi);
const char* getBMICategory(float bmi);
void printCategoryDescription(const char* category);
void printCategoryRecommendation(const char* category);
void printHeightUnitOptions();
void printWeightUnitOptions();

int main() {
    float weight, height, bmi;
    char heightUnit, weightUnit;
    
    printWeightUnitOptions();
    scanf(" %c", &weightUnit);
    
    printf("Enter weight: ");
    scanf("%f", &weight);
    
    printHeightUnitOptions();
    scanf(" %c", &heightUnit);
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    // Convert weight to kilograms if it's in pounds
    if (weightUnit == 'P' || weightUnit == 'p') {
        weight *= 0.453592;  // 1 pound = 0.453592 kilograms
    }
    
    // Convert height to meters if it's in centimeters
    if (heightUnit == 'C' || heightUnit == 'c') {
        height /= 100.0;  // 1 meter = 100 centimeters
    }
    
    calculateBMI(weight, height, &bmi);
    
    const char* category = getBMICategory(bmi);
    
    printf("BMI: %.2f\n", bmi);
    printf("Category: %s\n", category);
    printCategoryDescription(category);
    printCategoryRecommendation(category);
    
    return 0;
}

void calculateBMI(float weight, float height, float *bmi) {
    *bmi = weight / (height * height);
}

const char* getBMICategory(float bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi < 25) {
        return "Normal weight";
    } else if (bmi < 30) {
        return "Overweight";
    } else {
        return "Obese";
    }
}

void printCategoryDescription(const char* category) {
    if (strcmp(category, "Underweight") == 0) {
        printf("Underweight: You have a BMI below the healthy range. It's important to consult a doctor or a nutritionist for proper guidance.\n");
    } else if (strcmp(category, "Normal weight") == 0) {
        printf("Normal weight: Congratulations! Your BMI falls within the healthy range.\n");
    } else if (strcmp(category, "Overweight") == 0) {
        printf("Overweight: Your BMI is higher than the healthy range. It's advisable to focus on a balanced diet and regular exercise.\n");
    } else if (strcmp(category, "Obese") == 0) {
        printf("Obese: Your BMI indicates obesity. It's crucial to seek professional advice and make lifestyle changes for better health.\n");
    }
}

void printCategoryRecommendation(const char* category) {
    if (strcmp(category, "Underweight") == 0) {
        printf("Recommendation: To gain weight in a healthy manner, consider increasing your calorie intake with nutrient-rich foods and consulting a nutritionist.\n");
    } else if (strcmp(category, "Normal weight") == 0) {
        printf("Recommendation: Maintain a balanced diet and engage in regular physical activity to continue maintaining a healthy weight.\n");
    } else if (strcmp(category, "Overweight") == 0) {
        printf("Recommendation: Focus on incorporating more fruits, vegetables, lean proteins, and whole grains into your diet. Engage in regular exercise to manage weight.\n");
    } else if (strcmp(category, "Obese") == 0) {
        printf("Recommendation: It's important to consult a healthcare professional or a registered dietitian to develop a personalized weight loss plan.\n");
    }
}

void printHeightUnitOptions() {
    printf("Enter height unit (C for centimeters, M for meters): ");
    printf("C - Centimeters\n");
    printf("M - Meters\n");
}

void printWeightUnitOptions() {
    printf("Enter weight unit (K for kilograms, P for pounds): ");
    printf("K - Kilograms\n");
    printf("P - Pounds\n");
}
