#include <stdio.h>
#include <string.h>

int main() {
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";
    
    char entered_email[100];
    char entered_password[100];
    
    printf("Enter your email: ");
    scanf("%s", entered_email);
    printf("Enter your password: ");
    scanf("%s", entered_password);
    
    if (strcmp(entered_email, desired_email) == 0 && strcmp(entered_password, desired_password) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Incorrect email or password.\n");
    }
    
    return 0;
}
