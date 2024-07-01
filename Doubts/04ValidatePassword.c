#include <stdio.h>
#include <string.h>

// Function to check if a character is a letter
int is_alpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Function to check if a character is a digit
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

// Function to check if a character is a special character
int is_special(char c) {
    return !(is_alpha(c) || is_digit(c));
}

// Function to check if password is strong
int is_strong_password(char *password) {
    int i;
    int has_letter = 0;
    int has_digit = 0;
    int has_special = 0;
    
    // Check length
    if (strlen(password) < 6) {
        return 0;
    }
    
    // Check each character
    for (i = 0; password[i] != '\0'; i++) {
        if (is_alpha(password[i])) {
            has_letter = 1;
        } else if (is_digit(password[i])) {
            has_digit = 1;
        } else if (is_special(password[i])) {
            has_special = 1;
        }
        
        // Early exit if all criteria are met
        if (has_letter && has_digit && has_special) {
            return 1;
        }
    }
    
    // Return 0 if any criteria is not met
    return 0;
}

int main() {
    char password[100];
    
    // Input password
    printf("Create your password: ");
    fgets(password, sizeof(password), stdin);
    
    // Remove newline character if present
    password[strcspn(password, "\n")] = '\0';
    
    // Check if password is strong
    if (is_strong_password(password)) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }
    
    return 0;
}